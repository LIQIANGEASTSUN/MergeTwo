using System;
using System.Collections.Generic;
using DG.Tweening;
using Spine.Unity;
using UnityEngine;
using UnityEngine.UI;

namespace MiniGame.Kitchen;

public class MGMergeGrid : MonoBehaviour
{
	public Image imgGrid;

	public GameObject gridBg1;

	public GameObject gridBg2;

	public GameObject propNode;

	public Image imgMask;

	public GameObject highLightNode;

	public GameObject effectNode;

	public GameObject selectNode;

	private int gridW = 119;

	private int gridH = 120;

	private int maxCol = 4;

	private int maxRaw = 4;

	private List<MGMergeProp> propList = new List<MGMergeProp>();

	private MGMergeView mgViewComp;

	private GameObject matchEffectNode;

	private int matchId = -1;

	private float noOperateDuration;

	private bool startNotice;

	private bool bNoticing;

	private bool bGuide;

	private bool bFinished;

	private List<GameObject> bgList = new List<GameObject>();

	private Sequence guideSeq;

	private SkeletonGraphic handAni;

	private List<GameObject> guideBgList = new List<GameObject>();

	private Dictionary<string, bool> gridedMap = new Dictionary<string, bool>();

	public void SetViewComp(MGMergeView viewComp)
	{
		mgViewComp = viewComp;
	}

	public void SetNeedGuide(bool guide)
	{
		bGuide = guide;
	}

	public void Init(int raw, int col, MGCookMergeLevelList levelList)
	{
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		maxCol = col;
		maxRaw = raw;
		int num = gridW * col + 34;
		int num2 = gridW * raw + 34;
		((Graphic)imgGrid).rectTransform.sizeDelta = new Vector2((float)num, (float)num2);
		((Graphic)imgMask).rectTransform.sizeDelta = new Vector2((float)(num - 12), (float)(num2 - 10));
		int num3 = 1;
		for (int i = 0; i < raw; i++)
		{
			num3 = -num3;
			for (int j = 0; j < col; j++)
			{
				GameObject val = Object.Instantiate<GameObject>((((j % 2 == 0) ? 1 : (-1)) * num3 == 1) ? gridBg1 : gridBg2);
				val.transform.SetParent(gridBg1.transform.parent, false);
				val.SetActive(true);
				val.transform.localPosition = GetPosByRawAndCol(i + 1, j + 1);
				bgList.Add(val);
			}
		}
		InitProps(levelList.list);
		MGKitchenGameManager.GetInstance().LoadAssetAsync<GameObject>("숏끜徿唐䕗&\u0082厁숅끩嚭椆䥆+^卝숼끟瞶弽摝7â叡숍끟斷渎桗:\u009a厙녧卣☾\0逑\ud964", (Action<bool, GameObject>)((bool success, GameObject prefab) =>
		{
			//IL_0027: Unknown result type (might be due to invalid IL or missing references)
			if (success)
			{
				GameObject val2 = Object.Instantiate<GameObject>(prefab);
				val2.transform.SetParent(effectNode.transform, false);
				val2.transform.localPosition = Vector3.zero;
				val2.SetActive(false);
				matchEffectNode = val2;
			}
		}));
	}

	private MGMergeProp CreateOneProp()
	{
		GameObject val = Object.Instantiate<GameObject>(propNode);
		val.transform.SetParent(propNode.transform.parent, false);
		MGMergeProp component = val.GetComponent<MGMergeProp>();
		component.SetGridComp(this);
		propList.Add(component);
		return component;
	}

	private void InitProps(List<MGCookMergeLevelItem> props)
	{
		props.ForEach((MGCookMergeLevelItem item) =>
		{
			//IL_0022: Unknown result type (might be due to invalid IL or missing references)
			if (item.materialId > 0)
			{
				MGMergeProp mGMergeProp = CreateOneProp();
				((Component)mGMergeProp).transform.localPosition = GetPosByRawAndCol(item.row, item.column);
				AddGrided(item.row, item.column);
				mGMergeProp.InitProp(item.materialId);
				mGMergeProp.SetRawAndCol(item.row, item.column);
			}
		});
	}

	public void AddGrided(int raw, int col)
	{
		string gridKey = GetGridKey(raw, col);
		gridedMap.Add(gridKey, value: true);
	}

	public bool IsGrided(int raw, int col)
	{
		string gridKey = GetGridKey(raw, col);
		return gridedMap.ContainsKey(gridKey);
	}

	public void RemoveGrided(int raw, int col)
	{
		string gridKey = GetGridKey(raw, col);
		gridedMap.Remove(gridKey);
	}

	private string GetGridKey(int raw, int col)
	{
		return string.Format("类04뀭}ﱣ哕", raw, col);
	}

	public void OnEnterEnd()
	{
		if (bGuide)
		{
			OpenGuide();
		}
		else
		{
			startNotice = true;
		}
	}

	private void OpenGuide()
	{
		MGKitchenGameManager.GetInstance().LoadAssetAsync<GameObject>("숃끓涷攄䵳3º厹숎끏憰渏䝑\u001a\u008a厉뻸", (Action<bool, GameObject>)((bool success, GameObject prefab) =>
		{
			//IL_012a: Unknown result type (might be due to invalid IL or missing references)
			//IL_012f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0138: Unknown result type (might be due to invalid IL or missing references)
			//IL_013d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0176: Unknown result type (might be due to invalid IL or missing references)
			//IL_0184: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
			//IL_01e4: Unknown result type (might be due to invalid IL or missing references)
			//IL_01f1: Unknown result type (might be due to invalid IL or missing references)
			GameObject val = Object.Instantiate<GameObject>(prefab);
			val.transform.SetParent(effectNode.transform, false);
			((Component)imgMask).gameObject.SetActive(true);
			mgViewComp.OnStartGuide(highLightNode.transform);
			int curPropId = mgViewComp.GetCurPropId();
			List<MGMergeProp> list = new List<MGMergeProp>();
			for (int i = 0; i < propList.Count; i++)
			{
				MGMergeProp mGMergeProp = propList[i];
				if (curPropId == mGMergeProp.GetPropId())
				{
					list.Add(mGMergeProp);
				}
			}
			if (list.Count < 2)
			{
				Debug.LogError((object)"鴪\u0bc6\ue2b0쾬ᕹ鄼닆숙褉î颡뀡#ᙳ憎");
				Object.Destroy((Object)(object)val);
				mgViewComp.OnEndGuide();
			}
			else
			{
				int raw = list[0].GetRaw();
				int col = list[0].GetCol();
				int raw2 = list[1].GetRaw();
				int col2 = list[1].GetCol();
				int indexByRawAndCol = GetIndexByRawAndCol(raw, col);
				int indexByRawAndCol2 = GetIndexByRawAndCol(raw2, col2);
				GameObject val2 = bgList[indexByRawAndCol];
				GameObject val3 = bgList[indexByRawAndCol2];
				Vector3 position = val2.transform.position;
				Vector3 position2 = val3.transform.position;
				val2.transform.SetParent(highLightNode.transform, false);
				val3.transform.SetParent(highLightNode.transform, false);
				val2.transform.position = position;
				val3.transform.position = position2;
				((Component)list[0]).transform.SetParent(highLightNode.transform, false);
				((Component)list[1]).transform.SetParent(highLightNode.transform, false);
				((Component)list[0]).transform.position = position;
				((Component)list[1]).transform.position = position2;
				val.transform.position = position;
				Transform val4 = val.transform.Find("숏끜徿猐敗&\u0082厁숓끕撫攔瑂;\u0096厕숂끥窪栃潛'î叭뻵");
				handAni = ((Component)val4).GetComponent<SkeletonGraphic>();
				guideBgList.Add(val2);
				guideBgList.Add(val3);
				PlayGuideAni();
			}
		}));
	}

	private void PlayGuideAni()
	{
		//IL_0048: Unknown result type (might be due to invalid IL or missing references)
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_008a: Expected Obj, but got Unknown
		if (!((Object)(object)handAni != (Object)null))
		{
			return;
		}
		Transform trans = ((Component)handAni).transform.parent;
		trans.position = guideBgList[0].transform.position;
		handAni.AnimationState.SetAnimation(0, "匦橥ā讥齮", false);
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.7f), (TweenCallback)(() =>
		{
			//IL_004c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0074: Unknown result type (might be due to invalid IL or missing references)
			//IL_007e: Expected Obj, but got Unknown
			//IL_007e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0088: Expected Obj, but got Unknown
			if ((Object)(object)handAni != (Object)null)
			{
				handAni.AnimationState.SetAnimation(0, "初澫\ud9c1ő", true);
				Tweener val = TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(trans, guideBgList[1].transform.position, 0.8f, false), (Ease)4);
				((Tween)val).onComplete = (TweenCallback)Delegate.Combine((Delegate?)(object)((Tween)val).onComplete, (Delegate?)(TweenCallback)(() =>
				{
					//IL_003c: Unknown result type (might be due to invalid IL or missing references)
					//IL_0046: Expected Obj, but got Unknown
					if ((Object)(object)handAni != (Object)null)
					{
						handAni.AnimationState.SetAnimation(0, "刖棣\ud9c7ņ", false);
						TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.6f), (TweenCallback)(() =>
						{
							PlayGuideAni();
						}));
					}
				}));
			}
		}));
	}

	private int GetIndexByRawAndCol(int raw, int col)
	{
		return (raw - 1) * maxCol + col - 1;
	}

	private Vector3 GetPosByRawAndCol(int raw, int col)
	{
		//IL_005a: Unknown result type (might be due to invalid IL or missing references)
		int num = gridW * maxCol;
		int num2 = gridH * maxRaw;
		float num3 = (float)(-(num - gridW)) * 0.5f;
		float num4 = (float)(num2 - gridH) * 0.5f;
		float num5 = num3 + (float)((col - 1) * gridW);
		float num6 = num4 - (float)((raw - 1) * gridH);
		return new Vector3(num5, num6, 0f);
	}

	public List<int> GetRowAndColByPos(Vector3 localP)
	{
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_002c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0058: Unknown result type (might be due to invalid IL or missing references)
		int num = gridW * maxCol;
		int num2 = gridH * maxRaw;
		float num3 = localP.x + (float)num * 0.5f;
		float num4 = localP.y - (float)num2 * 0.5f;
		List<int> list = new List<int>();
		if (Mathf.Abs(localP.x) > (float)num * 0.5f || Mathf.Abs(localP.y) > (float)num2 * 0.5f)
		{
			list.Add(-1);
			list.Add(-1);
			return list;
		}
		int item = Mathf.FloorToInt(num3 / (float)gridW) + 1;
		int item2 = Mathf.FloorToInt(Mathf.Abs(num4) / (float)gridH) + 1;
		list.Add(item2);
		list.Add(item);
		return list;
	}

	private MGMergeProp GetNearProp(MGMergeProp prop)
	{
		//IL_0026: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		float num = 0.5f;
		for (int i = 0; i < propList.Count; i++)
		{
			MGMergeProp mGMergeProp = propList[i];
			if ((Object)(object)mGMergeProp != (Object)(object)prop && Vector3.Distance(((Component)prop).transform.position, ((Component)mGMergeProp).transform.position) <= num)
			{
				return mGMergeProp;
			}
		}
		return null;
	}

	public void OnPropMove(MGMergeProp curProp)
	{
		//IL_007a: Unknown result type (might be due to invalid IL or missing references)
		if (selectNode.activeSelf)
		{
			selectNode.SetActive(false);
		}
		if ((Object)(object)matchEffectNode == (Object)null)
		{
			return;
		}
		MGMergeProp nearProp = GetNearProp(curProp);
		if ((Object)(object)nearProp != (Object)null)
		{
			int propId = nearProp.GetPropId();
			int propId2 = curProp.GetPropId();
			if (propId != propId2)
			{
				matchEffectNode.SetActive(false);
				matchId = -1;
			}
			else if (propId != matchId)
			{
				matchEffectNode.transform.localPosition = ((Component)nearProp).transform.localPosition;
				matchEffectNode.SetActive(true);
				matchId = propId;
			}
		}
		else
		{
			matchEffectNode.SetActive(false);
			matchId = -1;
		}
	}

	public bool isFinished()
	{
		return bFinished;
	}

	public bool OnPropMoveEnd(MGMergeProp curProp)
	{
		//IL_027c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0281: Unknown result type (might be due to invalid IL or missing references)
		//IL_0283: Unknown result type (might be due to invalid IL or missing references)
		//IL_009f: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ba: Unknown result type (might be due to invalid IL or missing references)
		//IL_0254: Unknown result type (might be due to invalid IL or missing references)
		//IL_026a: Unknown result type (might be due to invalid IL or missing references)
		//IL_030e: Unknown result type (might be due to invalid IL or missing references)
		//IL_01c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ca: Unknown result type (might be due to invalid IL or missing references)
		if (matchId != -1)
		{
			matchEffectNode.SetActive(false);
			matchId = -1;
		}
		MGMergeProp nearProp = GetNearProp(curProp);
		if ((Object)(object)nearProp != (Object)null)
		{
			int propId = curProp.GetPropId();
			int propId2 = nearProp.GetPropId();
			if (propId == propId2)
			{
				mgViewComp.OnMergePorp();
				propList.Remove(curProp);
				propList.Remove(nearProp);
				RemoveGrided(curProp.GetRaw(), curProp.GetCol());
				int propId3 = nearProp.GetPropId();
				MGFoodMaterialItem chainItemById = mgViewComp.GetChainItemById(propId3);
				MGMergeProp mGMergeProp = CreateOneProp();
				Vector3 localPosition = ((Component)nearProp).transform.localPosition;
				Vector3 position = ((Component)nearProp).transform.position;
				((Component)mGMergeProp).transform.localPosition = localPosition;
				mGMergeProp.InitProp(chainItemById.upId);
				mGMergeProp.SetRawAndCol(nearProp.GetRaw(), nearProp.GetCol());
				mGMergeProp.PlayShowAni();
				Object.Destroy((Object)(object)((Component)curProp).gameObject);
				Object.Destroy((Object)(object)((Component)nearProp).gameObject);
				MGFoodMaterialItem chainItemById2 = mgViewComp.GetChainItemById(chainItemById.upId);
				int num = ((chainItemById2.level > 4) ? 4 : chainItemById.level);
				PlayAudio(string.Format("숍끟箫『浑\rò叱뻡", num));
				if ((Object)(object)handAni != (Object)null)
				{
					Object.Destroy((Object)(object)((Component)handAni).gameObject);
					handAni = null;
					((Component)imgMask).gameObject.SetActive(false);
					guideBgList.ForEach((GameObject bg) =>
					{
						//IL_0006: Unknown result type (might be due to invalid IL or missing references)
						//IL_000b: Unknown result type (might be due to invalid IL or missing references)
						//IL_002e: Unknown result type (might be due to invalid IL or missing references)
						Vector3 position2 = bg.transform.position;
						bg.transform.SetParent(gridBg1.transform.parent, false);
						bg.transform.position = position2;
					});
					mgViewComp.OnEndGuide();
				}
				OnPropClick(mGMergeProp);
				if (mgViewComp.IsUpTarget(chainItemById2.id))
				{
					bFinished = true;
					PlayGreateAni(((Component)mGMergeProp).transform.parent, localPosition, position);
				}
				else
				{
					startNotice = true;
				}
			}
			else
			{
				startNotice = true;
				if ((Object)(object)handAni != (Object)null)
				{
					return false;
				}
				int raw = curProp.GetRaw();
				int col = curProp.GetCol();
				int raw2 = nearProp.GetRaw();
				int col2 = nearProp.GetCol();
				curProp.SetRawAndCol(raw2, col2);
				nearProp.SetRawAndCol(raw, col);
				((Component)curProp).transform.SetParent(propNode.transform.parent, false);
				((Component)curProp).transform.localPosition = GetPosByRawAndCol(raw2, col2);
				curProp.OnUpdateEndPos();
				nearProp.MoveToTargetPos(GetPosByRawAndCol(raw, col));
			}
			return true;
		}
		Vector3 localPosition2 = ((Component)curProp).transform.localPosition;
		List<int> rowAndColByPos = GetRowAndColByPos(localPosition2);
		startNotice = true;
		if (rowAndColByPos[0] > 0 && (Object)(object)handAni == (Object)null)
		{
			int raw3 = rowAndColByPos[0];
			int col3 = rowAndColByPos[1];
			if (!IsGrided(raw3, col3))
			{
				int raw4 = curProp.GetRaw();
				int col4 = curProp.GetCol();
				curProp.SetRawAndCol(raw3, col3);
				((Component)curProp).transform.SetParent(propNode.transform.parent, false);
				((Component)curProp).transform.localPosition = GetPosByRawAndCol(raw3, col3);
				AddGrided(raw3, col3);
				RemoveGrided(raw4, col4);
				curProp.OnUpdateEndPos();
				return true;
			}
		}
		return false;
	}

	public bool IsGuiding()
	{
		return (Object)(object)handAni != (Object)null;
	}

	private void PlayAudio(string audioName)
	{
		MGKitchenGameManager.GetInstance().PlayAudio(audioName);
	}

	private void PlayGreateAni(Transform parent, Vector3 localP, Vector3 worldP)
	{
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		TweenCallback val4 = default;
		MGKitchenGameManager.GetInstance().LoadAssetAsync<GameObject>("숏끜徿唐䕗&\u0082厁숅끩嚭椆䥆+^卝숼끟瞶弽摝7â叡參橲ā讅鵴", (Action<bool, GameObject>)((bool success, GameObject prefab) =>
		{
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			//IL_0035: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0075: Unknown result type (might be due to invalid IL or missing references)
			//IL_007a: Unknown result type (might be due to invalid IL or missing references)
			//IL_007c: Expected Obj, but got Unknown
			//IL_0081: Expected Obj, but got Unknown
			if (success)
			{
				GameObject val = Object.Instantiate<GameObject>(prefab);
				val.transform.SetParent(parent, false);
				val.transform.localPosition = localP + new Vector3(0f, 70f, 0f);
				PlayAudio("수끎玶挙獍\rÒ发숵끔於愶敓 \u009a厙뻨");
			}
			Sequence val2 = TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 1f);
			TweenCallback val3 = val4;
			if (val3 == null)
			{
				TweenCallback val5 = () =>
				{
					//IL_000c: Unknown result type (might be due to invalid IL or missing references)
					mgViewComp.PlayMergeAni(worldP);
					mgViewComp.PlayExitAni();
				};
				TweenCallback val6 = val5;
				val4 = val5;
				val3 = val6;
			}
			TweenSettingsExtensions.AppendCallback(val2, val3);
		}));
	}

	public void OnPropClick(MGMergeProp prop)
	{
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		if (!selectNode.activeSelf)
		{
			selectNode.SetActive(true);
		}
		selectNode.transform.localPosition = ((Component)prop).transform.localPosition;
	}

	private void Update()
	{
		if (startNotice && !bNoticing)
		{
			noOperateDuration += Time.deltaTime;
			if (noOperateDuration >= 3f)
			{
				noOperateDuration = 0f;
				bNoticing = true;
				UpdateNoticeAni(bPlay: true);
			}
		}
	}

	public void OnOperate()
	{
		if (bNoticing)
		{
			bNoticing = false;
			startNotice = false;
			noOperateDuration = 0f;
			UpdateNoticeAni(bPlay: false);
		}
	}

	private void UpdateNoticeAni(bool bPlay)
	{
		int curPropId = mgViewComp.GetCurPropId();
		for (int i = 0; i < propList.Count; i++)
		{
			MGMergeProp mGMergeProp = propList[i];
			if (mGMergeProp.GetPropId() == curPropId)
			{
				if (bPlay)
				{
					mGMergeProp.PlayNoticeAni();
				}
				else
				{
					mGMergeProp.StopNoticeAni();
				}
			}
		}
	}
}
