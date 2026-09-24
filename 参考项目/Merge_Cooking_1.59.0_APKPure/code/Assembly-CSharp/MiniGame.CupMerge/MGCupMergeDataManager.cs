using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;

namespace MiniGame.CupMerge;

public class MGCupMergeDataManager
{
	private static MGCupMergeDataManager _instance;

	private bool bInited;

	private MGCupMergeGameVO gameVO = new MGCupMergeGameVO();

	private string MG_CUP_MERGE_INFO = "숩끽徆䴪䵡\u0002\u0082厁숯끨䆞䴰䕫\u0015\n匉녅獟ᵼ\0郿\ud972";

	private string curLan = "欷㹶";

	private int curPlayLevelId;

	private GameObject mainCamera;

	public static MGCupMergeDataManager GetInstance()
	{
		if (_instance == null)
		{
			_instance = new MGCupMergeDataManager();
		}
		return _instance;
	}

	public void Init()
	{
		GetItem(MG_CUP_MERGE_INFO);
		gameVO = LoadCacheGameVO();
		curLan = MGBaseGameManager.GetInstance().GetCurLanguage();
		MGBaseGameManager.GetInstance().RegisterLanguageChange((string lang) =>
		{
			curLan = lang;
		});
	}

	private MGCupMergeGameVO LoadStaticGameVO()
	{
		List<MGCupMergeLevelItem> levelList = GetLevelList();
		if (levelList.Count > 0)
		{
			gameVO.maxPlayLevelId = levelList[0].id;
			MGCupMergeLevelVO mGCupMergeLevelVO = new MGCupMergeLevelVO();
			mGCupMergeLevelVO.id = gameVO.maxPlayLevelId;
			gameVO.activeLevels.Add(mGCupMergeLevelVO);
		}
		return gameVO;
	}

	public MGCupMergeGameVO GetGameVO()
	{
		return LoadCacheGameVO();
	}

	private MGCupMergeGameVO LoadCacheGameVO()
	{
		string item = GetItem(MG_CUP_MERGE_INFO);
		if (!string.IsNullOrEmpty(item))
		{
			MGCupMergeGameVO mGCupMergeGameVO = new MGCupMergeGameVO();
			JsonUtility.FromJsonOverwrite(item, (object)mGCupMergeGameVO);
			return mGCupMergeGameVO;
		}
		return LoadStaticGameVO();
	}

	public int GetCurPlayLevelId()
	{
		return curPlayLevelId;
	}

	public void StartPlayLevel(int levelId)
	{
		curPlayLevelId = levelId;
	}

	public bool OnCompleteLevel(int levelId, int scoreNum)
	{
		bool result = false;
		if (levelId == curPlayLevelId && scoreNum > 0)
		{
			MGCupMergeLevelVO levelVO = GetLevelVO(levelId);
			if (GetInstance().GetLevelItem(levelId).goalValue == 0)
			{
				levelVO.endlessLevelTotalTimes++;
			}
			if (levelVO != null && scoreNum > levelVO.scoreNum)
			{
				levelVO.scoreNum = scoreNum;
			}
			MGCupMergeLevelItem nextLevelItem = GetNextLevelItem(levelId);
			if (nextLevelItem != null)
			{
				MGCupMergeLevelVO mGCupMergeLevelVO = GetLevelVO(nextLevelItem.id);
				if (mGCupMergeLevelVO == null)
				{
					result = true;
					mGCupMergeLevelVO = new MGCupMergeLevelVO();
					mGCupMergeLevelVO.id = nextLevelItem.id;
					gameVO.maxPlayLevelId = nextLevelItem.id;
				}
				gameVO.activeLevels.Add(mGCupMergeLevelVO);
			}
			SaveGameVO();
		}
		return result;
	}

	public MGCupMergeLevelVO GetLevelVO(int levelId)
	{
		for (int i = 0; i < gameVO.activeLevels.Count; i++)
		{
			MGCupMergeLevelVO mGCupMergeLevelVO = gameVO.activeLevels[i];
			if (mGCupMergeLevelVO.id == levelId)
			{
				return mGCupMergeLevelVO;
			}
		}
		return null;
	}

	public MGCupMergeLevelItem GetLevelItem(int level)
	{
		List<MGCupMergeLevelItem> list = MGCupMergeStaticDataManager.GetInstance().cupMergeLevelList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].id == level)
			{
				return list[i];
			}
		}
		return null;
	}

	public MGCupMergeLevelItem GetNextLevelItem(int curLevelId)
	{
		List<MGCupMergeLevelItem> levelList = GetLevelList();
		for (int i = 0; i < levelList.Count; i++)
		{
			if (levelList[i].id == curLevelId && i < levelList.Count - 1)
			{
				return levelList[i + 1];
			}
		}
		return null;
	}

	public List<MGCupMergeLevelItem> GetLevelList()
	{
		return MGCupMergeStaticDataManager.GetInstance().cupMergeLevelList.list;
	}

	public List<MGCupMergeBeverageItem> GetCurrentLevelCupList(int type, int level)
	{
		List<MGCupMergeBeverageItem> list = new List<MGCupMergeBeverageItem>();
		List<MGCupMergeBeverageItem> list2 = MGCupMergeStaticDataManager.GetInstance().cupMergeBeverageList.list;
		for (int i = 0; i < list2.Count; i++)
		{
			if (list2[i].type == type && list2[i].beverageLevel <= level)
			{
				list.Add(list2[i]);
			}
		}
		return list;
	}

	public MGCupMergeBeverageItem GetCupItemById(int id)
	{
		List<MGCupMergeBeverageItem> list = MGCupMergeStaticDataManager.GetInstance().cupMergeBeverageList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].id == id)
			{
				return list[i];
			}
		}
		return null;
	}

	public MGCupMergeBeverageItem GetCupItemByTypeAndLevel(int type, int level)
	{
		List<MGCupMergeBeverageItem> list = MGCupMergeStaticDataManager.GetInstance().cupMergeBeverageList.list;
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].type == type && list[i].beverageLevel == level)
			{
				return list[i];
			}
		}
		return null;
	}

	public List<MGCupMergeOrderItem> GetLevelOrderListById(int id)
	{
		List<MGCupMergeOrderItem> list = new List<MGCupMergeOrderItem>();
		List<MGCupMergeOrderItem> list2 = MGCupMergeStaticDataManager.GetInstance().cupMergeOrderList.list;
		for (int i = 0; i < list2.Count; i++)
		{
			if (list2[i].id == id)
			{
				list.Add(list2[i]);
			}
		}
		return list;
	}

	public string GetLocalizedText(string key, List<string> parmas = null)
	{
		MGCupMergeLanguageTextItem mGCupMergeLanguageTextItem = MGCupMergeStaticDataManager.GetInstance().cupMergeLanguageTextList.list.SingleOrDefault((MGCupMergeLanguageTextItem item) => item.key == key);
		if (mGCupMergeLanguageTextItem == null)
		{
			return key;
		}
		string text = GetValueByProperty(mGCupMergeLanguageTextItem, curLan);
		if (string.IsNullOrEmpty(text))
		{
			text = key;
		}
		if (parmas == null || parmas.Count == 0)
		{
			return text;
		}
		MatchCollection matchCollection = Regex.Matches(text, "匟樣ā讑ꑽ");
		if (matchCollection.Count > 0)
		{
			for (int num = 0; num < matchCollection.Count; num++)
			{
				int replaceIndex = GetReplaceIndex(matchCollection[num].Value);
				text = ((replaceIndex <= 0 || replaceIndex > parmas.Count) ? text.Replace(matchCollection[num].Value, "") : text.Replace(matchCollection[num].Value, parmas[replaceIndex - 1]));
			}
		}
		return text;
	}

	private int GetReplaceIndex(string replace)
	{
		replace = replace.Replace("崩吻", "");
		replace = replace.Replace("뻡", "");
		if (int.TryParse(replace, out var result))
		{
			return result;
		}
		return -1;
	}

	private string GetValueByProperty(MGCupMergeLanguageTextItem data, string propertyName)
	{
		return propertyName switch
		{
			"欷㹶" => data.en, 
			"ꏘ\u009b赴" => data.zhs, 
			"洹䑷" => data.ko, 
			"核㽽" => data.de, 
			"渶䆊" => data.fr, 
			"欷㺋" => data.es, 
			"搤䮌" => data.pt, 
			"漻䊌" => data.it, 
			"戺䕹" => data.ja, 
			"刪啰" => data.zh, 
			"냫«赴" => data.idn, 
			"娢䶍" => data.ru, 
			"堨佰" => data.th, 
			"显䥴" => data.nl, 
			"眳㪊" => data.ar, 
			"堨侊" => data.tr, 
			"带共" => data.vi, 
			_ => throw new ArgumentException("豎ᔕ烘㫯൪屵⨹厮몼" + propertyName), 
		};
	}

	public void SetCameraObject(GameObject mainCamera)
	{
		if ((Object)(object)this.mainCamera == (Object)null)
		{
			this.mainCamera = mainCamera;
		}
	}

	public void SetCameraVisible(bool bVisible)
	{
		if (!((Object)(object)mainCamera == (Object)null))
		{
			mainCamera.SetActive(bVisible);
		}
	}

	private void SaveGameVO()
	{
		SaveItem(MG_CUP_MERGE_INFO, JsonUtility.ToJson((object)gameVO));
	}

	private void SaveItem(string key, string jsonStr)
	{
		MGBaseGameManager.GetInstance().SaveData(key, jsonStr);
	}

	private string GetItem(string key)
	{
		return MGBaseGameManager.GetInstance().GetData(key);
	}
}
