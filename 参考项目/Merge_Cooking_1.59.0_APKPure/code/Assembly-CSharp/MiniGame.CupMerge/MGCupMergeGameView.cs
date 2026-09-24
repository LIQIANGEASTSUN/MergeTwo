using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using Spine.Unity;
using TLF;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace MiniGame.CupMerge;

public class MGCupMergeGameView : MonoBehaviour
{
	public GameObject topBgNode;

	public GameObject gameNode;

	public GameObject wordNode;

	public GameObject topNode;

	public GameObject bottomNode;

	public Image imgIcon;

	public GameObject orderView;

	public RTLTextMeshPro textNext;

	public Image imgNext;

	public Image imgProgress;

	public GameObject nodeNormal;

	public RTLTextMeshPro textCount;

	public CanvasGroup warningCG;

	public Animation warningAni;

	public Image imgTargetProgress;

	public Image imgTargetXX;

	public GameObject nodeCash;

	public GameObject flyNode;

	public GameObject nodeBest;

	public RTLTextMeshPro textScoreNum;

	public RTLTextMeshPro textBestScoreNum;

	public RTLTextMeshPro textTimeNum;

	public GameObject nodeTips;

	public GameObject touchTipsMask;

	public GameObject nodeArrow;

	public RectTransform tipsRectTrans;

	public RTLTextMeshPro textTips;

	public GameObject NodeAnimation;

	public GameObject effectNodeTarget;

	public GameObject itemNodeParent;

	public GameObject startPosNode;

	public GameObject startPosLinkNode;

	public GameObject startPosItemNode;

	public List<IntGameObjectKvp> bmGameItemDic1 = new List<IntGameObjectKvp>();

	public List<IntGameObjectKvp> bmGameItemDic2 = new List<IntGameObjectKvp>();

	public float moveLeftPosX = -215f;

	public float moveRightPosX = 215f;

	public float forceNum = 1000f;

	private MGCupMergeLevelItem curLevelItem;

	private List<MGCupMergeBeverageItem> cupItemList;

	private int curCupIndex;

	private MGCupMergeGameItem curCupItem;

	private MGCupMergeGameItem nextCupItem;

	private List<MGCupMergeGameItem> addCupItems = new List<MGCupMergeGameItem>();

	private float updateTimer;

	private float updateInterval = 0.1f;

	private int curGainCount;

	private TweenerCore<float, float, FloatOptions> progressTween;

	private MGCupMergeGameOrderView orderCmp;

	private bool bOver;

	private bool bDelayShowOver;

	private MGCupMergeResultVO resultData;

	private int playTime;

	private bool bPaused;

	private float oneSecond;

	private bool bPlayedWarning;

	private int gamePlayTime = 180;

	private bool isShowGuide;

	private SkeletonGraphic handAni;

	private float adjustHeight;

	private bool bAdjusted;

	private void AdjustTop()
	{
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0066: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
		if (!bAdjusted)
		{
			if (Display.DesignScreenHeight > 1308)
			{
				adjustHeight = 40f;
				Vector3 val = new Vector3(0f, adjustHeight, 0f);
				Transform transform = topNode.transform;
				transform.localPosition -= val;
				wordNode.transform.localScale = Display.MaxScale * Vector3.one;
				gameNode.transform.localScale = Display.MaxScale * Vector3.one;
				topBgNode.transform.localScale = Display.MaxScale * Vector3.one;
			}
			bAdjusted = true;
		}
	}

	private void Start()
	{
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		AdjustTop();
		MGBaseGameManager.GetInstance().OnEnterMiniGamePlayView();
		MGBaseGameManager.GetInstance().SetFullScreen(isFullScreen: true);
		Physics2D.gravity = new Vector2(0f, 9.81f);
	}

	private void Update()
	{
		if (bPaused || bOver)
		{
			return;
		}
		updateTimer += Time.deltaTime;
		if (updateTimer >= updateInterval)
		{
			updateIndex();
			updateTimer = 0f;
		}
		oneSecond += Time.deltaTime;
		if (oneSecond >= 1f)
		{
			oneSecond--;
			playTime++;
		}
		if (curLevelItem == null || curLevelItem.goalValue != 0 || bOver || bPaused)
		{
			return;
		}
		((TMP_Text)textTimeNum).text = GetTimeStrBySecond(gamePlayTime - playTime);
		if (gamePlayTime - playTime <= 15)
		{
			PlayWarningAni();
			if (playTime >= gamePlayTime)
			{
				DoGameOver();
			}
		}
	}

	public void InitGame(MGCupMergeLevelItem levelItem)
	{
		//IL_00ea: Unknown result type (might be due to invalid IL or missing references)
		//IL_0101: Unknown result type (might be due to invalid IL or missing references)
		//IL_0172: Unknown result type (might be due to invalid IL or missing references)
		//IL_0177: Unknown result type (might be due to invalid IL or missing references)
		//IL_0181: Unknown result type (might be due to invalid IL or missing references)
		//IL_019e: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_021b: Unknown result type (might be due to invalid IL or missing references)
		//IL_022c: Unknown result type (might be due to invalid IL or missing references)
		curLevelItem = levelItem;
		if (levelItem.id == 0)
		{
			MGCupMergeGameVO gameVO = MGCupMergeDataManager.GetInstance().GetGameVO();
			curLevelItem.id = gameVO.maxPlayLevelId;
		}
		if (levelItem == null)
		{
			Debug.LogError((object)string.Format("숏끟撯㨐汘\u001b\u0096厕숗끁珩‘—;Ò发쉊끕溭晋湗=¾厽숎끝↼ℏ椕s\u0089厈뺽", levelItem.id));
			Object.Destroy((Object)(object)((Component)this).gameObject);
			return;
		}
		MGBaseGameManager.GetInstance().PlayMusic("숉끝徆洊流\"\u0082厁숏끈疾猐敫?Ú叙匭橣ā讉ꝧ");
		MGCupMergeDataManager.GetInstance().StartPlayLevel(levelItem.id);
		cupItemList = MGCupMergeDataManager.GetInstance().GetCurrentLevelCupList(levelItem.type, levelItem.maxBeverageLevel);
		for (int i = 0; i < cupItemList.Count; i++)
		{
			GameObject val = Object.Instantiate<GameObject>(((Component)imgIcon).gameObject);
			val.transform.SetParent(bottomNode.transform, false);
			val.SetActive(true);
			Image component = val.GetComponent<Image>();
			SetImageTexture(component, cupItemList[i].icon);
			val.transform.localScale = Vector3.one * cupItemList[i].displayScale;
		}
		List<InitialBoardBeverage> list = ParseFixedInitBoardBeverage(curLevelItem.initialBoardBeverage);
		for (int j = 0; j < list.Count; j++)
		{
			CreateStaticCupItem(itemNodeParent.transform, list[j], bSleep: true);
		}
		curCupItem = CreateCupItem(startPosItemNode.transform, Vector3.zero, Vector3.one * 0.9f, bSleep: true);
		nextCupItem = CreateCupItem(startPosItemNode.transform, Vector3.zero, Vector3.one * 0.9f, bSleep: true);
		((Component)nextCupItem).gameObject.SetActive(false);
		nodeNormal.gameObject.SetActive(curLevelItem.goalValue != 0);
		nodeBest.gameObject.SetActive(curLevelItem.goalValue == 0);
		Transform transform = ((Component)imgProgress).transform;
		Transform obj = ((transform is RectTransform) ? transform : null);
		float y = ((RectTransform)obj).sizeDelta.y;
		((RectTransform)obj).sizeDelta = new Vector2(0f, y);
		((TMP_Text)textCount).text = string.Format("쉊뀊箤ㅋ笛rò叱뻡", 0, curLevelItem.goalValue);
		((TMP_Text)textScoreNum).text = curGainCount.ToString() ?? "";
		MGCupMergeLevelVO levelVO = MGCupMergeDataManager.GetInstance().GetLevelVO(curLevelItem.id);
		((TMP_Text)textBestScoreNum).text = MGCupMergeDataManager.GetInstance().GetLocalizedText("숨끽斆爩䵑$\u009a厙숧끝枼攨慑 ¢厡勢㓾\ud9f7Ą") + "뺼" + levelVO.scoreNum;
		((TMP_Text)textNext).text = MGCupMergeDataManager.GetInstance().GetLocalizedText("숨끽斆爩䵑$\u009a厙숧끝枼攨慑 ¢厡勡㏲\ud9f7Ą");
		SetNextItemIcon();
		InitOrderView();
		OpenGuide();
	}

	public void OnTouchStart(BaseEventData eventData)
	{
		//IL_0010: Unknown result type (might be due to invalid IL or missing references)
		//IL_001b: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Unknown result type (might be due to invalid IL or missing references)
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		HideGuide();
		PointerEventData val = (PointerEventData)(object)((eventData is PointerEventData) ? eventData : null);
		Vector3 val2 = new Vector3(val.position.x, val.position.y, 0f);
		Vector3 val3 = MGBaseGameManager.GetInstance().GetUICamera().ScreenToWorldPoint(val2);
		Vector3 startPos = gameNode.transform.InverseTransformPoint(val3);
		SetStartPos(startPos);
	}

	public void OnTouchMove(BaseEventData eventData)
	{
		//IL_000a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_0033: Unknown result type (might be due to invalid IL or missing references)
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_004b: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		PointerEventData val = (PointerEventData)(object)((eventData is PointerEventData) ? eventData : null);
		Vector3 val2 = new Vector3(val.position.x, val.position.y, 0f);
		Vector3 val3 = MGBaseGameManager.GetInstance().GetUICamera().ScreenToWorldPoint(val2);
		Vector3 startPos = gameNode.transform.InverseTransformPoint(val3);
		SetStartPos(startPos);
	}

	public void OnTouchEnd(BaseEventData eventData)
	{
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00da: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0122: Unknown result type (might be due to invalid IL or missing references)
		//IL_0146: Unknown result type (might be due to invalid IL or missing references)
		//IL_0192: Unknown result type (might be due to invalid IL or missing references)
		//IL_0197: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f5: Expected Obj, but got Unknown
		if (!((Object)(object)curCupItem == (Object)null) && startPosNode.activeSelf)
		{
			startPosLinkNode.gameObject.SetActive(false);
			((Component)curCupItem).transform.SetParent(itemNodeParent.transform);
			((Behaviour)((Component)((Component)curCupItem).transform).GetComponent<PolygonCollider2D>()).enabled = true;
			Rigidbody2D component = ((Component)((Component)curCupItem).transform).GetComponent<Rigidbody2D>();
			component.WakeUp();
			component.gravityScale = 1f;
			int num = Mathf.Abs(-10) + 6;
			float num2 = Mathf.Abs(moveLeftPosX) + moveRightPosX;
			float num3 = startPosNode.transform.localPosition.x * ((float)num / num2) * ((float)Math.PI / 180f);
			float num4 = (0f - forceNum) * Mathf.Tan(num3);
			float num5 = forceNum;
			Vector2 val = new Vector2(num4, num5);
			component.AddForce(val, (ForceMode2D)0);
			startPosNode.gameObject.SetActive(false);
			startPosNode.transform.localPosition = new Vector3(0f, startPosNode.transform.localPosition.y, 0f);
			startPosLinkNode.transform.localRotation = Quaternion.Euler(0f, 0f, 0f);
			startPosLinkNode.gameObject.SetActive(true);
			addCupItems.Add(curCupItem);
			curCupItem = null;
			curCupItem = nextCupItem;
			nextCupItem = CreateCupItem(startPosItemNode.transform, Vector3.zero, Vector3.one * 0.9f, bSleep: true);
			((Component)nextCupItem).gameObject.SetActive(false);
			SetNextItemIcon();
			TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), (float)curLevelItem.cdTime / 1000f), (TweenCallback)(() =>
			{
				((Component)curCupItem).gameObject.SetActive(true);
				startPosNode.gameObject.SetActive(true);
			}));
		}
	}

	public void CheckOrderComplete()
	{
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0054: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		addCupItems.OrderByDescending((MGCupMergeGameItem obj) =>
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			return ((Component)obj).transform.position.y;
		}).ToList();
		for (int num = 0; num < addCupItems.Count; num++)
		{
			MGCupMergeGameItem component = ((Component)addCupItems[num]).GetComponent<MGCupMergeGameItem>();
			Vector3 localPosition = ((Component)component).transform.localPosition;
			GameObject val = null;
			if (orderCmp.CheckCurOrderComplete(component))
			{
				val = Object.Instantiate<GameObject>(((Component)component).gameObject);
				((Component)val.transform).GetComponent<Rigidbody2D>().Sleep();
				((Behaviour)((Component)val.transform).GetComponent<PolygonCollider2D>()).enabled = false;
				val.transform.SetParent(flyNode.transform, false);
				val.transform.localPosition = localPosition;
				component.SetIsRemove(isRemove: true);
				RemoveCupItem(component);
				PlayCupFlyToOrder(val);
				break;
			}
		}
	}

	public void OnMergeCup(MGCupMergeGameItem cup1, MGCupMergeGameItem cup2)
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_0107: Unknown result type (might be due to invalid IL or missing references)
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0127: Unknown result type (might be due to invalid IL or missing references)
		//IL_012c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0131: Unknown result type (might be due to invalid IL or missing references)
		//IL_0138: Unknown result type (might be due to invalid IL or missing references)
		//IL_013f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0144: Unknown result type (might be due to invalid IL or missing references)
		//IL_02bb: Unknown result type (might be due to invalid IL or missing references)
		//IL_02c5: Unknown result type (might be due to invalid IL or missing references)
		//IL_02df: Unknown result type (might be due to invalid IL or missing references)
		//IL_02e9: Unknown result type (might be due to invalid IL or missing references)
		//IL_0303: Unknown result type (might be due to invalid IL or missing references)
		//IL_030d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0207: Unknown result type (might be due to invalid IL or missing references)
		//IL_022d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0237: Unknown result type (might be due to invalid IL or missing references)
		//IL_0256: Unknown result type (might be due to invalid IL or missing references)
		//IL_0260: Unknown result type (might be due to invalid IL or missing references)
		//IL_027f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0289: Unknown result type (might be due to invalid IL or missing references)
		//IL_02a4: Unknown result type (might be due to invalid IL or missing references)
		//IL_02ae: Expected Obj, but got Unknown
		Vector3 localPosition = ((Component)cup1).transform.localPosition;
		((Behaviour)((Component)((Component)cup1).transform).GetComponent<PolygonCollider2D>()).enabled = false;
		((Behaviour)((Component)((Component)cup2).transform).GetComponent<PolygonCollider2D>()).enabled = false;
		cup1.SetIsRemove(isRemove: true);
		cup2.SetIsRemove(isRemove: true);
		RemoveCupItem(cup1);
		RemoveCupItem(cup2);
		MGCupMergeBeverageItem beverageItem = MGCupMergeDataManager.GetInstance().GetCupItemByTypeAndLevel(curLevelItem.type, cup1.GetBeverageItem().beverageLevel + 1);
		GameObject val = null;
		val = ((curLevelItem.type != 1) ? Object.Instantiate<GameObject>(bmGameItemDic2.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value) : Object.Instantiate<GameObject>(bmGameItemDic1.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value));
		val.SetActive(true);
		val.transform.SetParent(itemNodeParent.transform, false);
		val.transform.localPosition = localPosition;
		val.transform.localScale = Vector3.zero;
		Vector3 val2 = Vector2.op_Implicit(new Vector2(0f, 1f));
		val.GetComponent<Rigidbody2D>().AddForce(Vector2.op_Implicit(val2 * forceNum));
		val.GetComponent<Rigidbody2D>().gravityScale = 1f;
		MGCupMergeGameItem component = val.GetComponent<MGCupMergeGameItem>();
		component.Init(beverageItem, this);
		addCupItems.Add(component);
		MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈斾爐敫?\u009a厙椵䁽");
		GameObject cupItemNode = null;
		if (orderCmp.CheckCurOrderComplete(component))
		{
			cupItemNode = Object.Instantiate<GameObject>(val);
			((Component)cupItemNode.transform).GetComponent<Rigidbody2D>().Sleep();
			((Behaviour)((Component)cupItemNode.transform).GetComponent<PolygonCollider2D>()).enabled = false;
			cupItemNode.transform.SetParent(flyNode.transform, false);
			cupItemNode.transform.localPosition = localPosition;
			component.SetIsRemove(isRemove: true);
			RemoveCupItem(component);
			TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOScale(cupItemNode.transform, Vector3.one * 0.6f, 0f)), (Tween)(object)ShortcutExtensions.DOScale(cupItemNode.transform, Vector3.one * 1.1f, 0.2f)), (Tween)(object)ShortcutExtensions.DOScale(cupItemNode.transform, Vector3.one * 0.9f, 0.2f)), (TweenCallback)(() =>
			{
				PlayCupFlyToOrder(cupItemNode);
			}));
		}
		else
		{
			TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOScale(val.transform, Vector3.one * 0.6f, 0f)), (Tween)(object)ShortcutExtensions.DOScale(val.transform, Vector3.one * 1.1f, 0.2f)), (Tween)(object)ShortcutExtensions.DOScale(val.transform, Vector3.one * 0.9f, 0.2f));
		}
	}

	public void OnProgressClick()
	{
		//IL_0028: Unknown result type (might be due to invalid IL or missing references)
		string key = "숨끽斆爩䵑$\u009a厙숧끝枼攨慑 ¢厡蘙â赴";
		string localizedText = MGCupMergeDataManager.GetInstance().GetLocalizedText(key);
		Transform parent = ((TMP_Text)textCount).transform.parent;
		ShowTips(localizedText, parent, parent.localPosition);
		MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈沾椐敫1¶厵由㱳");
	}

	public void OnPauseClick()
	{
		Debug.LogWarning((object)"숚끔珹攛潕'Ò发숃끙ⶵ㴄⁗9¹厸叩樽ā说픭");
		OnPause();
		MGBaseGameManager.GetInstance().ShowView("숟끽斚爠䵄\u001f\u009a厙숋끟斉嘌杁!\u009a厙냔\u00af赴", (GameObject go) =>
		{
			resultData = GetResultData(bWin: true);
			go.GetComponent<MGCupMergePauseView>().Init(this, resultData);
		});
		MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈沾椐敫1¶厵由㱳");
	}

	public void OnMaskClick()
	{
		touchTipsMask.SetActive(false);
		nodeTips.SetActive(false);
		MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈沾椐敫1¶厵由㱳");
	}

	public void DoGameOver()
	{
		if (curLevelItem.goalValue == 0)
		{
			bOver = true;
			bDelayShowOver = true;
			resultData = GetResultData(bWin: true);
			bool bUp = MGCupMergeDataManager.GetInstance().OnCompleteLevel(resultData.levelId, resultData.scoreNum);
			OnAnalyticEvent(bUp);
			TryShowOverView(0.5f);
		}
	}

	public MGCupMergeLevelItem GetCurLevelItem()
	{
		return curLevelItem;
	}

	public void OnPause()
	{
		bPaused = true;
	}

	public void OnResume()
	{
		bPaused = false;
	}

	public int GetPlayTime()
	{
		return playTime;
	}

	private MGCupMergeGameItem CreateStaticCupItem(Transform itemParent, InitialBoardBeverage beverageInfo, bool bSleep)
	{
		//IL_009b: Unknown result type (might be due to invalid IL or missing references)
		MGCupMergeBeverageItem beverageItem = MGCupMergeDataManager.GetInstance().GetCupItemById(beverageInfo.id);
		GameObject val = null;
		val = ((curLevelItem.type != 1) ? Object.Instantiate<GameObject>(bmGameItemDic2.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value) : Object.Instantiate<GameObject>(bmGameItemDic1.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value));
		val.SetActive(true);
		val.transform.SetParent(itemParent, false);
		val.transform.localPosition = beverageInfo.pos;
		Rigidbody2D component = val.GetComponent<Rigidbody2D>();
		if (bSleep)
		{
			component.gravityScale = 0f;
			component.Sleep();
		}
		MGCupMergeGameItem component2 = val.GetComponent<MGCupMergeGameItem>();
		component2.Init(beverageItem, this);
		addCupItems.Add(component2);
		return component2;
	}

	private MGCupMergeGameItem CreateCupItem(Transform itemParent, Vector3 itemPos, Vector3 itemScale, bool bSleep)
	{
		//IL_013f: Unknown result type (might be due to invalid IL or missing references)
		//IL_014b: Unknown result type (might be due to invalid IL or missing references)
		MGCupMergeBeverageItem beverageItem = null;
		List<int> list = ParseFixedBeverage(curLevelItem.fixedBeverage);
		if (list.Count > 0 && curCupIndex < list.Count)
		{
			beverageItem = MGCupMergeDataManager.GetInstance().GetCupItemById(list[curCupIndex]);
		}
		if (beverageItem == null)
		{
			List<int> list2 = ParseWeightList(curLevelItem.beverageWeight, curLevelItem.maxBeverageLevel);
			if (list2 == null || list2.Count != curLevelItem.maxBeverageLevel)
			{
				Debug.LogError((object)"ꕠ䇷惎\u0003䍋间✽㓄朧酮断ᕰ丏鉫韥");
			}
			int id = WeightedRandomPickSingle(list2, curLevelItem.maxBeverageLevel);
			beverageItem = MGCupMergeDataManager.GetInstance().GetCupItemById(id);
		}
		GameObject val = null;
		val = ((curLevelItem.type != 1) ? Object.Instantiate<GameObject>(bmGameItemDic2.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value) : Object.Instantiate<GameObject>(bmGameItemDic1.FirstOrDefault((IntGameObjectKvp kvp) => kvp != null && kvp.key == beverageItem.id && (Object)(object)kvp.value != (Object)null)?.value));
		val.SetActive(true);
		val.transform.SetParent(itemParent, false);
		val.transform.localPosition = itemPos;
		val.transform.localScale = itemScale;
		MGCupMergeGameItem component = val.GetComponent<MGCupMergeGameItem>();
		component.Init(beverageItem, this);
		((Behaviour)((Component)val.transform).GetComponent<PolygonCollider2D>()).enabled = false;
		Rigidbody2D component2 = val.GetComponent<Rigidbody2D>();
		if (bSleep)
		{
			component2.gravityScale = 0f;
			component2.Sleep();
		}
		curCupIndex++;
		return component;
	}

	private void PlayCupFlyToOrder(GameObject cupItemNode)
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0050: Unknown result type (might be due to invalid IL or missing references)
		//IL_0051: Unknown result type (might be due to invalid IL or missing references)
		//IL_009d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0123: Unknown result type (might be due to invalid IL or missing references)
		Vector3 position = cupItemNode.transform.position;
		Vector3 position2 = ((Component)orderCmp.GetCurOrderItem().imageIcon).transform.position;
		MGCupMergeViewTool.PlayParabolaAni(cupItemNode.transform, 0.8f, position, position2, () =>
		{
			Object.Destroy((Object)(object)cupItemNode);
			orderCmp.GetCurOrderItem().PlayCompleteAni();
		});
		MGCupMergeBeverageItem cupItemById = MGCupMergeDataManager.GetInstance().GetCupItemById(orderCmp.GetCurOrderItem().GetOrderVO().beverageId);
		ShortcutExtensions.DOScale(((Component)((Component)cupItemNode.transform).GetComponentInChildren<Image>()).transform, Vector3.one * cupItemById.orderScale / 0.9f, 0.7f);
		int addCash = orderCmp.GetCurOrderItem().GetOrderVO().cash;
		int flyCashNum = orderCmp.GetCurOrderItem().GetOrderVO().flyCashNum;
		GameObject gameObject = ((Component)imgTargetXX).gameObject;
		if (curLevelItem.goalValue != 0)
		{
			gameObject = ((Component)imgTargetProgress).gameObject;
		}
		MGCupMergeViewTool.PlayFlyCoin(position2, gameObject.transform.position, nodeCash, gameObject.gameObject, flyNode.transform, flyCashNum, () =>
		{
			MGBaseGameManager.GetInstance().PlayAudio("숉끝徆洊流\"\u0082厁숏끈犾搐敫=Î反숉끈炆氊敛?Æ叅볦ë赴");
			OnAddGoalCount(addCash);
			orderCmp.ChangeToNextOrder(() =>
			{
				CheckOrderComplete();
			});
		});
	}

	private void RemoveCupItem(MGCupMergeGameItem item)
	{
		((Component)item).gameObject.SetActive(false);
		int num = addCupItems.IndexOf(item);
		if (num != -1)
		{
			addCupItems.RemoveAt(num);
			Object.Destroy((Object)(object)((Component)item).gameObject);
		}
	}

	private void SetStartPos(Vector3 touchPos)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		float num = Mathf.Min(Mathf.Max(touchPos.x, moveLeftPosX), moveRightPosX);
		startPosNode.transform.localPosition = new Vector3(num, startPosNode.transform.localPosition.y, 0f);
		int num2 = Mathf.Abs(-10) + 8;
		float num3 = Mathf.Abs(moveLeftPosX) + moveRightPosX;
		startPosLinkNode.transform.localRotation = Quaternion.Euler(0f, 0f, num * ((float)num2 / num3));
	}

	private void InitOrderView()
	{
		List<MGCupMergeOrderItem> levelOrderListById = MGCupMergeDataManager.GetInstance().GetLevelOrderListById(curLevelItem.fixedOrder);
		orderCmp = ((Component)orderView.transform).GetComponent<MGCupMergeGameOrderView>();
		orderCmp.Init(levelOrderListById, this);
	}

	private void ShowTips(string content, Transform trans, Vector3 localPos)
	{
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0050: Unknown result type (might be due to invalid IL or missing references)
		//IL_0060: Unknown result type (might be due to invalid IL or missing references)
		//IL_006c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Expected Obj, but got Unknown
		touchTipsMask.SetActive(true);
		((TMP_Text)textTips).text = content;
		nodeTips.SetActive(true);
		Vector3 position = new Vector3(100f, 0f, 0f);
		nodeArrow.transform.position = position;
		((Transform)tipsRectTrans).position = position;
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.017f), (TweenCallback)(() =>
		{
			//IL_000b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0010: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Unknown result type (might be due to invalid IL or missing references)
			//IL_003b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0040: Unknown result type (might be due to invalid IL or missing references)
			//IL_0045: Unknown result type (might be due to invalid IL or missing references)
			//IL_006d: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
			//IL_00be: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f8: Unknown result type (might be due to invalid IL or missing references)
			//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
			//IL_011a: Unknown result type (might be due to invalid IL or missing references)
			//IL_011c: Unknown result type (might be due to invalid IL or missing references)
			Vector2 sizeDelta = tipsRectTrans.sizeDelta;
			float num = (float)Display.DesignScreenWidth * 0.5f;
			float num2 = -50f;
			float num3 = 60f;
			Vector3 val = localPos + new Vector3(0f, num2, 0f);
			int num4 = ((!(localPos.x <= 0f)) ? 1 : (-1));
			float num5 = localPos.x + (float)num4 * sizeDelta.x * 0.5f;
			float num6 = (float)num4 * (num5 - (num - num3) * (float)num4);
			float num7 = ((num6 > 0f) ? (localPos.x - (float)num4 * num6) : localPos.x);
			float num8 = val.y - sizeDelta.y * 0.5f;
			Vector3 val2 = new Vector3(num7, num8, 0f);
			nodeArrow.transform.position = trans.parent.TransformPoint(val);
			((Transform)tipsRectTrans).position = trans.parent.TransformPoint(val2);
		}));
	}

	private void OnAddGoalCount(int scoreNum)
	{
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_007b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0121: Unknown result type (might be due to invalid IL or missing references)
		//IL_012b: Expected Obj, but got Unknown
		curGainCount += scoreNum;
		if (curLevelItem.goalValue != 0)
		{
			if (curGainCount > curLevelItem.goalValue)
			{
				curGainCount = curLevelItem.goalValue;
			}
			Transform transform = ((Component)imgProgress).transform;
			RectTransform progressRtrans = (RectTransform)(object)((transform is RectTransform) ? transform : null);
			float curWidth = progressRtrans.sizeDelta.x;
			float height = progressRtrans.sizeDelta.y;
			float num = (float)curGainCount * 1f / (float)curLevelItem.goalValue * 206f;
			((TMP_Text)textCount).text = string.Format("쉊뀊箤ㅋ笛rò叱뻡", curGainCount, curLevelItem.goalValue);
			if (progressTween != null)
			{
				TweenExtensions.Kill((Tween)(object)progressTween, false);
				progressTween = null;
			}
			progressTween = TweenSettingsExtensions.OnComplete<TweenerCore<float, float, FloatOptions>>(DOTween.To((DOGetter<float>)(() => curWidth), (DOSetter<float>)((float w) =>
			{
				//IL_000d: Unknown result type (might be due to invalid IL or missing references)
				progressRtrans.sizeDelta = new Vector2(w, height);
			}), num, 0.2f), (TweenCallback)(() =>
			{
				progressTween = null;
				CheckGameOver();
			}));
		}
		else
		{
			((TMP_Text)textScoreNum).text = curGainCount.ToString() ?? "";
		}
	}

	private void SetImageTexture(Image img, string texName, Action callback = null)
	{
		MGBaseGameManager.GetInstance().LoadAssetAsync<Sprite>(texName, (Action<bool, Sprite>)((bool success, Sprite sprite) =>
		{
			if (success)
			{
				img.sprite = null;
				img.sprite = sprite;
				((Graphic)img).SetNativeSize();
			}
			callback?.Invoke();
		}));
	}

	private void ShowTargetAnimation(Vector3 targetPos)
	{
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0066: Unknown result type (might be due to invalid IL or missing references)
		//IL_0070: Expected Obj, but got Unknown
		GameObject targetEffectNode = Object.Instantiate<GameObject>(effectNodeTarget);
		targetEffectNode.transform.SetParent(NodeAnimation.transform, false);
		targetEffectNode.transform.position = targetPos;
		targetEffectNode.SetActive(true);
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.7f), (TweenCallback)(() =>
		{
			targetEffectNode.DestroySelf<GameObject>();
		}));
	}

	private void PlayWarningAni()
	{
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Expected Obj, but got Unknown
		if (!bPlayedWarning)
		{
			bPlayedWarning = true;
			((Component)warningAni).gameObject.SetActive(true);
			TweenSettingsExtensions.OnComplete<Tweener>(DOTweenModuleUI.DOFade(warningCG, 1f, 1f), (TweenCallback)(() =>
			{
				warningAni.Play("숉끝涆漊浛?º厹숟끥玿挠湘>Ò发숄끟碼弅牫4æ句룲\u0083赴");
			}));
		}
	}

	private MGCupMergeResultVO GetResultData(bool bWin)
	{
		return new MGCupMergeResultVO
		{
			isWin = bWin,
			levelId = curLevelItem.id,
			scoreNum = curGainCount,
			playTime = GetPlayTime(),
			totalCupIndex = curCupIndex - 2,
			orderCount = orderCmp.GetOrderCount() - 1
		};
	}

	private void CheckGameOver()
	{
		if (curLevelItem.goalValue != 0 && curGainCount >= curLevelItem.goalValue)
		{
			bDelayShowOver = true;
			bOver = true;
			resultData = GetResultData(bWin: true);
			bool bUp = MGCupMergeDataManager.GetInstance().OnCompleteLevel(resultData.levelId, resultData.scoreNum);
			OnAnalyticEvent(bUp);
			TryShowOverView(1f);
		}
	}

	private void TryShowOverView(float time)
	{
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Expected Obj, but got Unknown
		if (!bDelayShowOver)
		{
			return;
		}
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), time), (TweenCallback)(() =>
		{
			MGBaseGameManager.GetInstance().ShowView("숟끽斚爠䵄\u001f\u009a厙숏끟沋琐杇'¶厵刖梟\ud9feŃ", (GameObject go) =>
			{
				go.GetComponent<MGCupMergeResultView>().Init(resultData);
			});
		}));
	}

	private void SetNextItemIcon()
	{
		//IL_0010: Unknown result type (might be due to invalid IL or missing references)
		//IL_002b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Expected Obj, but got Unknown
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		TweenSettingsExtensions.Append(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOScale(((Component)imgNext).transform, Vector3.zero, 0.1f)), (TweenCallback)(() =>
		{
			SetImageTexture(imgNext, nextCupItem.GetBeverageItem().icon);
		})), (Tween)(object)ShortcutExtensions.DOScale(((Component)imgNext).transform, Vector3.one * nextCupItem.GetBeverageItem().nextScale, 0.1f));
	}

	private List<InitialBoardBeverage> ParseFixedInitBoardBeverage(string fixedStr)
	{
		//IL_0069: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		List<InitialBoardBeverage> list = new List<InitialBoardBeverage>();
		if (string.IsNullOrEmpty(fixedStr) || fixedStr.Trim() == "뺬")
		{
			return list;
		}
		string[] array = fixedStr.Split('|');
		for (int i = 0; i < array.Length; i++)
		{
			string[] array2 = array[i].Split(';');
			InitialBoardBeverage initialBoardBeverage = new InitialBoardBeverage();
			initialBoardBeverage.id = int.Parse(array2[0]);
			initialBoardBeverage.pos = new Vector3(float.Parse(array2[1]), float.Parse(array2[2]), 0f);
			list.Add(initialBoardBeverage);
		}
		return list;
	}

	private List<int> ParseFixedBeverage(string fixedStr)
	{
		List<int> list = new List<int>();
		if (string.IsNullOrEmpty(fixedStr) || fixedStr.Trim() == "뺬")
		{
			return list;
		}
		string[] array = fixedStr.Split('|');
		for (int i = 0; i < array.Length; i++)
		{
			if (int.TryParse(array[i].Trim(), out var result) && result > 0)
			{
				list.Add(result);
			}
		}
		return list;
	}

	private List<int> ParseWeightList(string weightStr, int expectedLength)
	{
		List<int> list = new List<int>();
		if (string.IsNullOrEmpty(weightStr))
		{
			return list;
		}
		string[] array = weightStr.Split('|');
		for (int i = 0; i < array.Length; i++)
		{
			if (int.TryParse(array[i].Trim(), out var result))
			{
				list.Add(result);
			}
		}
		return list;
	}

	private int WeightedRandomPickSingle(List<int> weightList, int maxId)
	{
		int num = 0;
		foreach (int weight in weightList)
		{
			num += weight;
		}
		if (num <= 0)
		{
			return Random.Range(1, maxId + 1);
		}
		int num2 = Random.Range(0, num);
		int num3 = 0;
		for (int i = 0; i < weightList.Count; i++)
		{
			num3 += weightList[i];
			if (num2 < num3)
			{
				return cupItemList[i].id;
			}
		}
		return cupItemList[Random.Range(0, cupItemList.Count)].id;
	}

	private void updateIndex()
	{
		List<MGCupMergeGameItem> list = addCupItems.OrderByDescending((MGCupMergeGameItem obj) =>
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			return ((Component)obj).transform.position.y;
		}).ToList();
		for (int num = 0; num < list.Count; num++)
		{
			if (Object.op_Implicit((Object)(object)list[num]) && ((Component)list[num]).gameObject.activeSelf)
			{
				((Component)list[num]).transform.SetSiblingIndex(num);
			}
		}
	}

	public void OpenGuide()
	{
		if (curLevelItem.id >= 401002 || IsGuidedLevel(curLevelItem.id))
		{
			return;
		}
		isShowGuide = true;
		OnGuideAnalyticEvent("숏끟徯朐汘c\u0082厁匑橩ā讕鰱");
		MGBaseGameManager.GetInstance().LoadAssetAsync<GameObject>("숃끓涷攄䵳3º厹숎끏憰渏䝑\u001a\u008a厉뻸", (Action<bool, GameObject>)((bool success, GameObject prefab) =>
		{
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			if (success)
			{
				GameObject val = Object.Instantiate<GameObject>(prefab);
				val.transform.SetParent(((Component)this).transform, false);
				val.transform.localPosition = Vector3.zero;
				Transform val2 = val.transform.Find("숏끜徿猐敗&\u0082厁숓끕撫攔瑂;\u0096厕숂끥窪栃潛'î叭뻵");
				handAni = ((Component)val2).GetComponent<SkeletonGraphic>();
				val.SetActive(false);
				UpdateHandAniStatus(bShow: true);
			}
		}));
	}

	public void HideGuide()
	{
		if (isShowGuide && (Object)(object)handAni != (Object)null)
		{
			ShortcutExtensions.DOKill((Component)(object)((Component)handAni).transform.parent, false);
			UpdateHandAniStatus(bShow: false);
			SaveGuided();
		}
	}

	private void UpdateHandAniStatus(bool bShow, Vector3? pos = null)
	{
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)handAni != (Object)null)
		{
			((Component)((Component)handAni).transform.parent).gameObject.SetActive(bShow);
			if (bShow && pos.HasValue)
			{
				((Component)handAni).transform.parent.position = pos.Value;
				handAni.Skeleton.SetToSetupPose();
				handAni.AnimationState.ClearTracks();
				handAni.AnimationState.SetAnimation(0, "숄끓徸氅摞;\u0082厁녯䵯ఎ\0郢\ud92f", true);
			}
		}
	}

	private string GetGuideKey(int levelId)
	{
		return string.Format("숟끽斚爠䵄\u001f\u009a厙숍끟撆攎杁;\u0096厕순끖徼笝彑>\u0082厁⑤அ", levelId);
	}

	private void SaveGuided()
	{
		string guideKey = GetGuideKey(curLevelItem.id);
		MGBaseGameManager.GetInstance().SaveData(guideKey, "뺭");
	}

	private bool IsGuidedLevel(int levelId)
	{
		return MGBaseGameManager.GetInstance().GetData(GetGuideKey(levelId)) == "뺭";
	}

	private void OnAnalyticEvent(bool bUp)
	{
		if (!bUp)
		{
			return;
		}
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숞끃循渟獑?\u0082厁룦\u008f赴", "숍끟撫爎浑\r\u0096厕냰\u0083赴");
		List<MGCupMergeLevelItem> levelList = MGCupMergeDataManager.GetInstance().GetLevelList();
		int playerLevel = MGBaseGameManager.GetInstance().GetPlayerLevel();
		int num = 0;
		for (int i = 0; i < levelList.Count; i++)
		{
			MGCupMergeLevelItem mGCupMergeLevelItem = levelList[i];
			MGCupMergeDataManager.GetInstance().GetLevelVO(mGCupMergeLevelItem.id);
			if (playerLevel >= mGCupMergeLevelItem.unlockPLayerLevel)
			{
				num++;
			}
		}
		dictionary.Add("수끉憼爙畫\"\u008a厉潡m4끟p렧䟅", num);
		MGBaseGameManager.GetInstance().AnalyticOnEventTemplate("숓끥斪洔杇&\u009a厙癟m4끤w䑀仍", "숵끥撪愶杙\r\u0096厕堨佹", dictionary);
	}

	private void OnGuideAnalyticEvent(string action)
	{
	}

	private string GetTimeStrBySecond(int totalSeconds)
	{
		int num = Mathf.FloorToInt((float)totalSeconds);
		int num2 = num / 60;
		int num3 = num % 60;
		return string.Format("숮뀊㫣笯笆/í召叕樺ā诈뱽", num2, num3);
	}

	private void OnDestroy()
	{
		MGBaseGameManager.GetInstance().CloseView("숋끽䞚愌䵟7\"匡숣끟斌眤浢;\u009a厙");
		MGCupMergeDataManager.GetInstance().SetCameraVisible(bVisible: true);
		MGBaseGameManager.GetInstance().SetFullScreen(isFullScreen: false);
		MGBaseGameManager.GetInstance().StopMusic();
		MGBaseGameManager.GetInstance().OnExitMiniGamePlayView();
	}
}
