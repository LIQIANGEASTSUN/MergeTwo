using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

namespace MiniGame.CupMerge;

public class MGBaseGameManager
{
	private static MGBaseGameManager _instance;

	private float touchMaskTime;

	private bool bInited;

	public IMiniGameBridge miniGameBridge;

	private MGCupMergeLauncher miniGameLauncher;

	private Dictionary<string, GameObject> viewMap = new Dictionary<string, GameObject>();

	private Dictionary<string, string> startParam = new Dictionary<string, string>();

	public static MGBaseGameManager GetInstance()
	{
		if (_instance == null)
		{
			_instance = new MGBaseGameManager();
		}
		return _instance;
	}

	private MGBaseGameManager()
	{
	}

	public void Init(IMiniGameBridge bridge, MGCupMergeLauncher launcher, string startParamJson)
	{
		miniGameBridge = bridge;
		miniGameLauncher = launcher;
		if (!bInited)
		{
			bInited = true;
			startParam = JsonConvert.DeserializeObject<Dictionary<string, string>>(startParamJson);
		}
	}

	public string GetStartConfig(string key)
	{
		if (startParam.ContainsKey(key))
		{
			return startParam[key];
		}
		return "";
	}

	public void LoadAssetAsync<T>(string assetName, Action<bool, T> callback) where T : Object
	{
		miniGameBridge?.LoadAsync(assetName, callback);
	}

	public void PlayAudio(string audioName)
	{
		miniGameBridge?.PlayAudio(audioName);
	}

	public void PlayMusic(string musicName)
	{
		miniGameBridge?.PlayMusic(musicName);
	}

	public void StopMusic()
	{
		miniGameBridge?.StopMusic();
	}

	public string GetData(string key)
	{
		if (miniGameBridge != null)
		{
			return miniGameBridge.GetData(key);
		}
		return "";
	}

	public void SaveData(string key, string jsonStr)
	{
		miniGameBridge?.SaveData(key, jsonStr);
	}

	public void ClearData(string key)
	{
		miniGameBridge?.ClearData(key);
	}

	public string GetCurLanguage()
	{
		if (miniGameBridge != null)
		{
			return miniGameBridge.GetCurrentLanguage();
		}
		return "欷㹶";
	}

	public int GetPlayerLevel()
	{
		if (miniGameBridge != null)
		{
			return miniGameBridge.GetPlayerLevel();
		}
		return 9999;
	}

	public void RegistOnKeyback(Action callback)
	{
		miniGameBridge?.RegistOnKeyback(callback);
	}

	public void SetFullScreen(bool isFullScreen)
	{
		miniGameBridge?.SetFullScreen(isFullScreen);
	}

	public void RegisterLanguageChange(Action<string> registerFuc)
	{
		miniGameBridge?.RegistLanguageChanged(registerFuc);
	}

	public void OnAnalyticEvent(string eventName, Dictionary<string, object> dataDic)
	{
		miniGameBridge?.AnalyticOnEvent(eventName, dataDic);
	}

	public void AnalyticOnEventTemplate(string eventName, string eventParamName, Dictionary<string, object> dataDic)
	{
		miniGameBridge?.AnalyticOnEventTemplate(eventName, eventParamName, dataDic);
	}

	public Camera GetUICamera()
	{
		if (miniGameBridge != null)
		{
			return miniGameBridge.GetUICamera();
		}
		return null;
	}

	public Camera GetMainCamera()
	{
		if (miniGameBridge != null)
		{
			return miniGameBridge.GetMainCamera();
		}
		return null;
	}

	public void OnEnterMiniGamePlayView()
	{
		miniGameBridge?.OnEnterMiniGamePlayView();
	}

	public void OnExitMiniGamePlayView()
	{
		miniGameBridge?.OnExitMiniGamePlayView();
	}

	public void ShowView(string name, Action<GameObject> callback = null, bool bUIView = true)
	{
		if (viewMap.ContainsKey(name))
		{
			GameObject val = viewMap[name];
			val.SetActive(true);
			val.transform.SetAsLastSibling();
			if (callback != null)
			{
				callback(val);
			}
			return;
		}
		this.LoadAssetAsync<GameObject>(name, (Action<bool, GameObject>)((bool bSuccess, GameObject prefab) =>
		{
			if (bSuccess && (Object)(object)prefab != (Object)null)
			{
				GameObject val2 = Object.Instantiate<GameObject>(prefab);
				if (bUIView)
				{
					val2.transform.SetParent(((Component)miniGameLauncher).transform, false);
				}
				viewMap.Add(name, val2);
				if (callback != null)
				{
					callback(val2);
				}
			}
			else
			{
				Debug.LogWarning((object)("숝끒榶攞匔\u0004ª厩숋뀚斟搌睝>\u009a厙ቪᔸ" + name));
			}
		}));
	}

	public void CloseView(string name)
	{
		if (viewMap.ContainsKey(name))
		{
			Object.Destroy((Object)(object)viewMap[name]);
			viewMap.Remove(name);
		}
	}

	public void CloseGame(string param = "{}")
	{
		miniGameLauncher.EndGame(param);
	}

	public void Destroy()
	{
		miniGameBridge = null;
		miniGameLauncher = null;
		viewMap.Clear();
		viewMap = null;
		_instance = null;
		bInited = false;
	}

	public void Tick()
	{
		CutDownTouchMaskTime();
	}

	public void OpenPlayableLink()
	{
		Debug.Log((object)"숄끊枼\u2005佝<¢厡숓끖沸攔灕0¶厵숄끖⺰⸅\u205f|½厼");
	}

	private void CutDownTouchMaskTime()
	{
		if (!((double)touchMaskTime <= 1E-07))
		{
			touchMaskTime -= Time.deltaTime;
			if (touchMaskTime < 0f)
			{
				touchMaskTime = 0f;
			}
		}
	}

	public bool CanTouch()
	{
		return (double)touchMaskTime <= 1E-07;
	}

	public void SetTouchMaskTime(float t)
	{
		if (t > touchMaskTime)
		{
			touchMaskTime = t;
		}
	}
}
