using System;
using System.Collections.Generic;
using DG.Tweening;
using Spine;
using Spine.Unity;
using TLF;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

[PrefabPath("NewBieMergeView")]
public class NewBieMergeViewLogic : BaseViewLogic
{
	private float cookSpeed = 1.2f;

	private Image imgCookBg;

	private List<NewBieMergeGrid> gridList = new List<NewBieMergeGrid>();

	private int gridRaw = 4;

	private int gridCol = 7;

	private float gridW;

	private float gridH;

	private int talkCount;

	private float talkShowDuration;

	private float talkHideDuration;

	private Sequence handMoveSeq;

	private CanvasGroup talkCanvsGroup;

	private bool bInGuide;

	private Transform orderParent;

	private NewBieMergeGrid submitGrid;

	private int videoType;

	private int createMilkCount;

	private bool bInWeekGuide;

	private bool bStartNoOperate;

	private int noOperateTime;

	private int eatCount;

	private bool bStartVideoEnd;

	private bool bOvenVideoEnd;

	private bool bCookVideoEnd;

	private int videoIndex = 1;

	private GameButton guideTouchBtnCmp;

	private Action closeCallback;

	private Action startCallback;

	public RTLTextMeshPro tipsText;

	public RectTransform gridParent;

	public NewBieMergeGrid mergeGrid;

	public Transform dragParent;

	public SkeletonGraphic roleSpine;

	public SkeletonGraphic handSpine;

	public RTLTextMeshPro guideText;

	public Animation guideAni;

	public Transform guideTrans;

	public RTLTextMeshPro childText;

	public Animation childAni;

	public Transform childTrans;

	public GameObject guideTouchNode;

	public Animation orderAni;

	public GameObject touchMask;

	public Image imgOrder;

	public Vector3 talkPos1;

	public Vector3 talkPos2;

	public GameObject guideShadow;

	public GameObject highlightNode;

	public Image imgOrderBg;

	public GameObject submitNode;

	public Animation ovenAni;

	public RTLTextMeshPro ovenText;

	public VideoPlayer ovenVP;

	public RawImage imgOven;

	public Animation cookAni;

	public RawImage imgCook;

	public RTLTextMeshPro cookText;

	public VideoPlayer cookVP;

	public GameObject touchVideo;

	public GameObject eatCakeNode;

	public Animation eatAni;

	public RTLTextMeshPro eatText;

	public SkeletonGraphic eatSpine;

	public VideoPlayer startVP;

	public GameObject skipNode;

	public RawImage imgStart;

	public List<RTLTextMeshPro> ovenTitleList;

	public List<RTLTextMeshPro> cookTitleList;

	public CanvasGroup ovenCG;

	public CanvasGroup cookCG;

	private bool bOvenOrCookSkip;

	private Image imgOvenBg;

	private void PlayCookAni()
	{
		//IL_0079: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Expected Obj, but got Unknown
		//IL_00b7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c1: Expected Obj, but got Unknown
		videoIndex = 3;
		((Component)cookAni).transform.SetSelfActive<Transform>(true);
		string text = "숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬掰漐摃\r\u0092厑숏끑械漐潫!¦厥匓機ā讹饩";
		cookAni.Play(text);
		AnimationState val = cookAni[text];
		if ((TrackedReference)(object)val != (TrackedReference)null)
		{
			val.speed = cookSpeed;
		}
		imgCook = ((Component)cookAni).GetComponentInChildren<RawImage>(true);
		((Graphic)imgCook).color = new Color(1f, 1f, 1f, 0f);
		cookVP.targetTexture.Release();
		cookVP.prepareCompleted += OnCookVideoPrepared;
		cookVP.seekCompleted += OnCookVideoSeeked;
		OnAnalytic("숚끎徼㘛獫`\u0082厁");
		if ((Object)(object)imgCookBg == (Object)null)
		{
			Image component = ((Component)((Component)cookAni).transform.Find("樲㵿")).GetComponent<Image>();
			if ((Object)(object)component != (Object)null)
			{
				component.SetAlpha<Image>(0f);
				imgCookBg = component;
			}
		}
		string videoName = "숁끕徶㔂捝7\u0082厁숃끥澯⸄浐7Â叁刓斯\ud9dfř";
		LoadVideoRaw(videoName, cookVP);
	}

	private void OnCookVideoSeeked(VideoPlayer vp)
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Expected Obj, but got Unknown
		cookVP.seekCompleted -= OnCookVideoSeeked;
		vp.Play();
	}

	private void OnCookVideoPrepared(VideoPlayer vp)
	{
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		//IL_0012: Expected Obj, but got Unknown
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		vp.prepareCompleted -= OnCookVideoPrepared;
		vp.playbackSpeed = cookSpeed;
		vp.Play();
		if ((Object)(object)imgCookBg != (Object)null)
		{
			imgCookBg.SetAlpha<Image>(1f);
		}
		((Graphic)imgCook).color = Color.white;
		skipNode.SetSelfActive(active: true);
		bOvenOrCookSkip = false;
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			if (!bOvenOrCookSkip)
			{
				cookCG.SetSelfActive<CanvasGroup>(true);
				cookCG.alpha = 1f;
			}
		}, ((float)vp.length - 0.2f) / cookSpeed, 1, 0f);
	}

	private void OnCookVideoError(VideoPlayer vp, string message)
	{
		Debug.LogError((object)("䓎\u2cef䳯\u1937쯲觃\ua8f0옾Ὢሸ" + message));
		OnCookVideoOver();
	}

	private void OnCookVideoFinished(VideoPlayer vp)
	{
		Debug.LogWarning((object)"숁끕榶搂挔$ª厩숌끕槹猍敝<ª厩쉇끟㶽ⵈ栉\u007fù司\ue41e\u008e軴");
		OnCookVideoOver();
	}

	private void OnCookVideoOver(bool bSkip = false)
	{
		if (bCookVideoEnd)
		{
			return;
		}
		bCookVideoEnd = true;
		videoType = 2;
		touchVideo.SetSelfActive(active: true);
		skipNode.SetSelfActive(active: false);
		if (bSkip)
		{
			OnAnalytic("숚끎徼㘛獫`\u0082厁医橳ā讥鍰");
		}
		OnAnalytic("숚끎徼㜛獫`\u0082厁");
		if (bSkip)
		{
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				PlayCookFinishEffect();
			}, 0.5f, 1, 0f);
		}
	}

	private void PlayCookFinishEffect()
	{
		cookCG.SetSelfActive<CanvasGroup>(true);
		cookCG.alpha = 0f;
		DOTweenModuleUI.DOFade(cookCG, 1f, 0.05f);
	}

	private void OnCookVideoSkip()
	{
		AnimationState val = cookAni["숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬掰漐摃\r\u0092厑숏끑械漐潫!¦厥匓機ā讹饩"];
		if ((TrackedReference)(object)val != (TrackedReference)null)
		{
			val.time = val.length - 0.5f;
			cookAni.Sample();
		}
		cookVP.frame = (long)(cookVP.frameCount - 1);
		OnCookVideoOver(bSkip: true);
		Singleton<WwiseAudioManager>.Instance.StopEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢜");
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숏끓犫欐晃=Î反뻯");
	}

	public override void OnEnter()
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_000b: Unknown result type (might be due to invalid IL or missing references)
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		Vector2 sizeDelta = gridParent.sizeDelta;
		gridW = sizeDelta.x * 1f / (float)gridCol;
		gridH = sizeDelta.y * 1f / (float)gridRaw;
		guideTouchBtnCmp = guideTouchNode.GetComponent<GameButton>();
		if ((Object)(object)guideTouchBtnCmp != (Object)null)
		{
			guideTouchBtnCmp.EnableDefaultSound = false;
		}
		talkCanvsGroup = ((Component)guideAni).GetComponent<CanvasGroup>();
		orderParent = ((Component)orderAni).transform.parent;
		talkShowDuration = guideAni.GetClip("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔玾栶愅\rÒ发녯孷㉐\0這\ud974").length;
		talkHideDuration = guideAni.GetClip("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔澾瘶愅\rÂ叁녥孲㉐\0這\ud974").length;
		InitOrder();
		InitGrid();
		RegisterVideoEvent();
		CancelSafeArea();
	}

	public void StartVideo(Action startCb, Action callback = null)
	{
		startCallback = startCb;
		closeCallback = callback;
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			InvokeStartCb();
		}, 12f, 0, 0f);
		MGMakeCakeModel mgMakeCakeModel = ObjectManager.GetInstance().mgMakeCakeModel;
		int curStage = mgMakeCakeModel.GetCurStage();
		Debug.LogWarning((object)string.Format("쉗뀇\u2df4㵘ⴙo¹厸숟뀇璺愠ⵆ\u0001Ö叕籧e4뀠}\udd64哕", curStage));
		string aniName = "녩դ㘶\0郡\ud9e6";
		switch (curStage)
		{
		case 0:
			PlayStartVideo();
			mgMakeCakeModel.OnFinishOneStage();
			break;
		case 1:
			StartTalk();
			break;
		case 2:
		{
			talkCount = 5;
			aniName = "녩դ㘶\0郦\ud9eb";
			PlayOrderShowAni();
			StartTalk();
			NewBieMergeGrid gridById = GetGridById(16);
			if ((Object)(object)gridById != (Object)null)
			{
				gridById.PlayCreatorEffect();
			}
			break;
		}
		case 3:
			talkCount = 8;
			aniName = "녩դ㘶\0部\ud9ed";
			PlayEatShowAni();
			break;
		}
		if (curStage > 0)
		{
			InvokeStartCb();
			Singleton<WwiseAudioManager>.Instance.PlayMusic("숵끝璴漶所'Ö叕划撟\ud9daŘ");
		}
		PlayRoleAni(aniName, curStage != 2);
		OnAnalytic("刖棻\ud9c7Ś");
	}

	private void InvokeStartCb()
	{
		if (startCallback != null)
		{
			startCallback();
			startCallback = null;
			((Component)this).transform.setLocalPosition();
		}
	}

	private void CancelSafeArea()
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_004e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0060: Unknown result type (might be due to invalid IL or missing references)
		//IL_006c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		List<float> safeArea = SDKManager.GetInstance().nativeManager.getSafeArea();
		if (safeArea.Count > 1 && (safeArea[0] > 0f || safeArea[1] > 0f))
		{
			Transform transform = ((Component)this).transform;
			RectTransform val = (RectTransform)(object)((transform is RectTransform) ? transform : null);
			val.offsetMax = new Vector2(val.offsetMax.x, val.offsetMax.y + safeArea[0]);
			val.offsetMin = new Vector2(val.offsetMin.x, val.offsetMin.y - safeArea[1]);
		}
	}

	private void RegisterVideoEvent()
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Expected Obj, but got Unknown
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Expected Obj, but got Unknown
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Expected Obj, but got Unknown
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Expected Obj, but got Unknown
		//IL_0069: Unknown result type (might be due to invalid IL or missing references)
		//IL_0073: Expected Obj, but got Unknown
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_008a: Expected Obj, but got Unknown
		//IL_0097: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a1: Expected Obj, but got Unknown
		startVP.loopPointReached += OnStartVideoFinished;
		startVP.errorReceived += OnStartVideoError;
		startVP.prepareCompleted += OnStartVideoPrepared;
		ovenVP.loopPointReached += OnOvenVideoFinished;
		ovenVP.errorReceived += OnOvenVideoError;
		cookVP.loopPointReached += OnCookVideoFinished;
		cookVP.errorReceived += OnCookVideoError;
	}

	private void UnregisterVideoEvent()
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Expected Obj, but got Unknown
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_002e: Expected Obj, but got Unknown
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Expected Obj, but got Unknown
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Expected Obj, but got Unknown
		//IL_0069: Unknown result type (might be due to invalid IL or missing references)
		//IL_0073: Expected Obj, but got Unknown
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_008a: Expected Obj, but got Unknown
		//IL_0097: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a1: Expected Obj, but got Unknown
		startVP.loopPointReached -= OnStartVideoFinished;
		startVP.errorReceived -= OnStartVideoError;
		startVP.prepareCompleted -= OnStartVideoPrepared;
		ovenVP.loopPointReached -= OnOvenVideoFinished;
		ovenVP.errorReceived -= OnOvenVideoError;
		cookVP.loopPointReached -= OnCookVideoFinished;
		cookVP.errorReceived -= OnCookVideoError;
	}

	private void StartTalk()
	{
		touchMask.SetSelfActive(active: true);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			ShowTalk();
		}, 0.5f, 0, 0f);
	}

	public override void OnExit()
	{
		UnregisterVideoEvent();
	}

	private void Update()
	{
	}

	public override void SetLocalization(int tag = 0, object data = null)
	{
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)ovenText, "숵끛復挶呀=\u0082厁潯n4끩p帧䟍");
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)cookText, "숵끛復挶呀=\u0082厁潯n4끩p帧䟍");
		foreach (RTLTextMeshPro ovenTitle in ovenTitleList)
		{
			LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)ovenTitle, "숵끈碭琶慀7æ句숄끙憶琅当 \u008a厉숞끖溸猟畝=¾厽");
		}
		foreach (RTLTextMeshPro cookTitle in cookTitleList)
		{
			LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)cookTitle, "숵끈碭琶慀7æ句숄끙憶琅当 \u008a厉숞끖溸猟畝=¾厽");
		}
	}

	private void InitGrid()
	{
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		int num = gridRaw * gridCol;
		for (int i = 0; i < num; i++)
		{
			NewBieMergeGrid newBieMergeGrid = Object.Instantiate<NewBieMergeGrid>(mergeGrid);
			int num2 = i + 1;
			((Component)newBieMergeGrid).transform.SetParent((Transform)(object)gridParent, false);
			((Component)newBieMergeGrid).transform.localPosition = GetPosByGridId(num2).Value;
			int initGoodIdByGridId = ObjectManager.GetInstance().mgMakeCakeModel.GetInitGoodIdByGridId(num2);
			newBieMergeGrid.Init(num2, initGoodIdByGridId, this);
			gridList.Add(newBieMergeGrid);
		}
	}

	private void InitOrder()
	{
		string orderIcon = ObjectManager.GetInstance().mgMakeCakeModel.GetOrderIcon();
		if (!orderIcon.IsNullOrEmpty())
		{
			imgOrder.sprite = resLoader.LoadSync<Sprite>(orderIcon);
			((Graphic)imgOrder).SetNativeSize();
		}
		((TMP_Text)tipsText).text = "\ue91a\u0086赴";
	}

	private void ResetOrder()
	{
		//IL_0011: Unknown result type (might be due to invalid IL or missing references)
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		InitOrder();
		Vector3 position = ((Component)orderAni).transform.position;
		((Component)orderAni).transform.SetParent(orderParent, false);
		((Component)orderAni).transform.position = position;
		imgOrderBg.sprite = resLoader.LoadSync<Sprite>("숈끓斆弉畕!\u009a厙숈끟涮攉湝7º厹숵끝撼收牛 \u0096厕녲՟㐪\0郡\ud9e6");
		Material val = resLoader.LoadSync<Material>("숞끕溼伟假7¾厽숸끟痴氹湑5Ú叙숅끈泴椆慁&¶厵숫끟ㆆㄬ湲fÉ又몥");
		if ((Object)(object)val != (Object)null)
		{
			((TMP_Text)tipsText).fontSharedMaterial = val;
		}
		((Graphic)tipsText).color = Color.white;
		submitNode.SetSelfActive(active: false);
	}

	private void OnOrderFinished()
	{
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		imgOrderBg.sprite = resLoader.LoadSync<Sprite>("숈끓斆弉畕!\u009a厙숈끟涮攉湝7º厹숵끝撼收牛 \u0096厕녲՟㐪\0郢\ud9e7");
		Material val = resLoader.LoadSync<Material>("숞끕溼伟假7¾厽숸끟痴氹湑5Ú叙숅끈泴椆慁&¶厵쉘끟㊆ㅙ渍dÍ双뫾");
		if ((Object)(object)val != (Object)null)
		{
			((TMP_Text)tipsText).fontSharedMaterial = val;
		}
		Color color = default;
		if (ColorUtility.TryParseHtmlString("朣a4끦h\uf066㾞", ref color))
		{
			((Graphic)tipsText).color = color;
		}
		((TMP_Text)tipsText).text = "\ue81a\u0086赴";
	}

	private void PlayStartShowGoodsAni()
	{
		NewBieMergeGrid newBieMergeGrid = gridList[10];
		NewBieMergeGrid newBieMergeGrid2 = gridList[11];
		newBieMergeGrid.PlayBoxBrokenAni(canClick: false);
		newBieMergeGrid2.PlayBoxBrokenAni();
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숃끝疫渄彐\rÚ叙刔暇\ud9c4ş");
	}

	private void PlayRoleAni(string aniName, bool bLoop = true, Action callback = null)
	{
		roleSpine.AnimationState.SetAnimation(0, aniName, bLoop);
		if (callback == null)
		{
			return;
		}
		Animation val = roleSpine.SkeletonData.FindAnimation(aniName);
		if (val != null)
		{
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				callback?.Invoke();
			}, val.Duration, 0, 0f);
		}
	}

	public void OnGuideClick()
	{
		//IL_00d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fb: Unknown result type (might be due to invalid IL or missing references)
		guideTouchNode.SetSelfActive(active: false);
		if (talkCount == 1)
		{
			ShowTalk();
		}
		else if (talkCount == 2)
		{
			HideTalk(() =>
			{
				guideTrans.SetSelfActive<Transform>(false);
			});
			PlayRoleAni("녩դ㘶\0郢\ud9e7", bLoop: false, () =>
			{
				PlayRoleAni("녩դ㘶\0郣\ud9e8");
			});
			touchMask.SetSelfActive(active: true);
			PlayOrderShowAni();
			PlayStartShowGoodsAni();
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				ShowTalk();
				ShowHandNotice(12, 11);
				bInGuide = true;
			}, 0.8f, 0, 0f);
		}
		else if (talkCount == 5 || talkCount == 6)
		{
			ShowTalk();
		}
		else if (talkCount == 7)
		{
			ShowTalk();
			NewBieMergeGrid gridById = GetGridById(16);
			if ((Object)(object)gridById != (Object)null)
			{
				bInGuide = true;
				Vector3 position = ((Component)gridById).transform.position;
				((Component)gridById).transform.SetParent(highlightNode.transform, false);
				((Component)gridById).transform.position = position;
				ShowHandClickNotice(position);
			}
		}
		else if (eatCount > 0 && eatCount <= 2)
		{
			EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
			PlayEatAni();
		}
		else if (talkCount == 9)
		{
			ShowTalk();
		}
	}

	private void ShowChildTalk()
	{
		talkCount++;
		touchMask.SetSelfActive(active: true);
		guideShadow.SetSelfActive(active: true);
		string key = string.Format("숏끛殲攐浗3²厱숃끝徬琄彐7\u0082厁籡l4끟}瑤哕", talkCount);
		childTrans.SetSelfActive<Transform>(true);
		guideTouchNode.SetSelfActive(active: true);
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)childText, key);
		childAni.Play("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔玾栶愅\rÒ发녯孷㉐\0這\ud974");
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			touchMask.SetSelfActive(active: false);
		}, talkShowDuration, 0, 0f);
		OnAnalytic("숚끎徼㘛獫a\u0082厁");
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숚끊ザ㈛彁\"Å叄");
	}

	private void ShowTalk()
	{
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_005a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
		//IL_0090: Unknown result type (might be due to invalid IL or missing references)
		talkCount++;
		if (talkCount == 1)
		{
			OnAnalytic("숚끎徼琛獫c\u0082厁룰\u008b赴");
		}
		else if (talkCount == 6)
		{
			OnAnalytic("숚끎徼ㄛ獫`\u0082厁");
		}
		touchMask.SetSelfActive(active: true);
		guideShadow.SetSelfActive(active: true);
		Vector3 localPosition = ((talkCount < 3) ? talkPos2 : talkPos1);
		string key = string.Format("숏끛殲攐浗3²厱숃끝徬琄彐7\u0082厁籡l4끟}瑤哕", talkCount);
		guideTrans.SetSelfActive<Transform>(true);
		guideTrans.localPosition = localPosition;
		guideTouchNode.SetSelfActive(talkCount != 5);
		talkCanvsGroup.alpha = 1f;
		LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)guideText, key);
		guideAni.Play("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔玾栶愅\rÒ发녯孷㉐\0這\ud974");
		if (talkCount == 10)
		{
			ObjectManager.GetInstance().mgMakeCakeModel.OnFinishOneStage();
			OnAnalytic("匧橬ā词靥");
		}
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			touchMask.SetSelfActive(active: false);
			if (talkCount == 10)
			{
				PlayTransportAni();
			}
		}, talkShowDuration, 0, 0f);
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉녟䉰⌰\0造\ud962");
	}

	private void HideChildTalk()
	{
		childAni.Play("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔澾瘶愅\rÂ叁녥孲㉐\0這\ud974");
		guideShadow.SetSelfActive(active: false);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			childTrans.SetSelfActive<Transform>(false);
		}, talkHideDuration * 0.8f, 0, 0f);
	}

	private void HideTalk(Action callback = null)
	{
		guideAni.Play("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숂끏殰甃摁3²厱숵끔澾瘶愅\rÂ叁녥孲㉐\0這\ud974");
		guideShadow.SetSelfActive(active: false);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			guideTrans.SetSelfActive<Transform>(false);
		}, talkHideDuration * 0.8f, 0, 0f);
		if (callback != null)
		{
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				callback?.Invoke();
			}, talkHideDuration, 0, 0f);
		}
	}

	private void OnMergeSuccess()
	{
		if (handMoveSeq != null)
		{
			TweenExtensions.Kill((Tween)(object)handMoveSeq, false);
			handMoveSeq = null;
			HideHandAni();
		}
		if (talkCount == 3)
		{
			ResetGridParent(12, 11);
			HideTalk();
			touchMask.SetSelfActive(active: true);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				ShowTalk();
				ShowHandNotice(11, 10);
				bInGuide = true;
			}, 0.8f, 0, 0f);
			OnAnalytic("숚끎徼ㄛ獫c\u0082厁");
		}
		else if (talkCount == 4 && bInGuide)
		{
			ResetGridParent(11, 10);
			HideTalk();
			OnAnalytic("숚끎徼㈛獫c\u0082厁");
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
	}

	private void ResetGridParent(int id1, int id2)
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		NewBieMergeGrid gridById = GetGridById(id1);
		NewBieMergeGrid gridById2 = GetGridById(id2);
		if ((Object)(object)gridById != (Object)null)
		{
			Vector3 position = ((Component)gridById).transform.position;
			((Component)gridById).transform.SetParent((Transform)(object)gridParent, false);
			((Component)gridById).transform.position = position;
		}
		if ((Object)(object)gridById2 != (Object)null)
		{
			Vector3 position2 = ((Component)gridById2).transform.position;
			((Component)gridById2).transform.SetParent((Transform)(object)gridParent, false);
			((Component)gridById2).transform.position = position2;
		}
		bInGuide = false;
	}

	private void PlayOrderShowAni()
	{
		orderAni.SetSelfActive<Animation>(true);
		orderAni.Play("숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숏끈玽栐但\rÒ发녯孷㉐\0這\ud974");
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢙");
	}

	private void PlayOrderHideAni()
	{
		string text = "숨끟䶮攩九7:匹숼끝瞼弽牝7â叡숏끈澽瘐但\rÂ叁녥孲㉐\0這\ud974";
		float length = orderAni.GetClip(text).length;
		orderAni.Play(text);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			orderAni.SetSelfActive<Animation>(false);
		}, length, 0, 0f);
	}

	private void ShowHandNotice(int id1, int id2)
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0026: Unknown result type (might be due to invalid IL or missing references)
		//IL_005a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0066: Unknown result type (might be due to invalid IL or missing references)
		//IL_006d: Unknown result type (might be due to invalid IL or missing references)
		//IL_006e: Unknown result type (might be due to invalid IL or missing references)
		NewBieMergeGrid gridById = GetGridById(id1);
		NewBieMergeGrid gridById2 = GetGridById(id2);
		Vector3 position = ((Component)gridById).transform.position;
		Vector3 position2 = ((Component)gridById2).transform.position;
		((Component)gridById).transform.SetParent(highlightNode.transform, false);
		((Component)gridById2).transform.SetParent(highlightNode.transform, false);
		((Component)gridById).transform.position = position;
		((Component)gridById2).transform.position = position2;
		DoHandMoveAction(position, position2);
	}

	private void DoHandMoveAction(Vector3 pos1, Vector3 pos2)
	{
		//IL_0034: Unknown result type (might be due to invalid IL or missing references)
		//IL_0052: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Expected Obj, but got Unknown
		//IL_007b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Expected Obj, but got Unknown
		//IL_008d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b6: Expected Obj, but got Unknown
		if (handMoveSeq != null)
		{
			TweenExtensions.Kill((Tween)(object)handMoveSeq, false);
			handMoveSeq = null;
		}
		Transform parent = ((Component)handSpine).transform.parent;
		parent.SetSelfActive<Transform>(true);
		parent.position = pos1;
		handMoveSeq = DOTween.Sequence();
		TweenSettingsExtensions.AppendCallback(handMoveSeq, (TweenCallback)(() =>
		{
			ShowHandAni("匦橥ā讥齮", bLoop: false);
		}));
		TweenSettingsExtensions.AppendInterval(handMoveSeq, 0.433f);
		TweenSettingsExtensions.AppendCallback(handMoveSeq, (TweenCallback)(() =>
		{
			ShowHandAni("初澫\ud9c1ő");
		}));
		TweenSettingsExtensions.Append(handMoveSeq, (Tween)(object)ShortcutExtensions.DOMove(parent, pos2, 0.9f, false));
		TweenSettingsExtensions.AppendCallback(handMoveSeq, (TweenCallback)(() =>
		{
			ShowHandAni("刖棣\ud9c7ņ", bLoop: false);
		}));
		TweenSettingsExtensions.AppendInterval(handMoveSeq, 0.5f);
		TweenSettingsExtensions.SetLoops<Sequence>(handMoveSeq, -1, (LoopType)0);
	}

	private void ShowHandClickNotice(Vector3 pos)
	{
		//IL_0017: Unknown result type (might be due to invalid IL or missing references)
		Transform parent = ((Component)handSpine).transform.parent;
		parent.SetSelfActive<Transform>(true);
		parent.position = pos;
		ShowHandAni("숄끓徸氅摞;\u0082厁녯䵯ఎ\0郢\ud92f");
	}

	private void ShowHandAni(string name, bool bLoop = true)
	{
		handSpine.Skeleton.SetToSetupPose();
		handSpine.AnimationState.ClearTracks();
		handSpine.AnimationState.SetAnimation(0, name, bLoop);
	}

	private void HideHandAni()
	{
		((Component)handSpine).transform.parent.SetSelfActive<Transform>(false);
	}

	public void OnSubmitClick()
	{
		if ((Object)(object)submitGrid == (Object)null)
		{
			return;
		}
		ObjectManager.GetInstance().mgMakeCakeModel.OnFinishOneStage();
		TryCloseWeekGuide();
		if (submitGrid.GetGoodId() == 4)
		{
			OnAnalytic("숚끎徼㐛獫c\u0082厁");
			HideHandAni();
			HideTalk();
			PlayFoodCollectAni(submitGrid, () =>
			{
				PlayOrderHideAni();
				PlayRoleAni("녩դ㘶\0郤\ud9e9", bLoop: false, () =>
				{
					PlayRoleAni("녩դ㘶\0郥\ud9ea", bLoop: false, () =>
					{
						PlayOvenAni();
						ResetOrder();
						PlayOrderShowAni();
					});
				});
			});
			Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢚");
		}
		else
		{
			OnAnalytic("숚끎徼㔛獫`\u0082厁");
			PlayFoodCollectAni(submitGrid, () =>
			{
				PlayOrderHideAni();
				PlayRoleAni("녩դ㘶\0部\ud9ed", bLoop: false);
				TimeManager.GetInstance().Schedule(this, (float dt) =>
				{
					PlayCookAni();
				}, 0.7f, 1, 0f);
			});
			Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢜");
		}
		submitGrid = null;
		submitNode.SetSelfActive(active: false);
		SetStartNoOperate(bStart: false);
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
	}

	public void OnVideoClick()
	{
		if (videoType == 0)
		{
			touchVideo.SetSelfActive(active: false);
			return;
		}
		if (videoType == 1)
		{
			string text = "숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬澰瘐摃\rÂ叁쉛끈溆楜敫3¾厽";
			float length = ovenAni.GetClip(text).length;
			ovenAni.Play(text);
			DOTweenModuleUI.DOFade(ovenCG, 0f, 0.1f);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				((Component)ovenAni).transform.SetSelfActive<Transform>(false);
			}, length, 0, 0f);
			PlayRoleAni("녩դ㘶\0郦\ud9eb", bLoop: false);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				NewBieMergeGrid grid = GetGridById(16);
				if ((Object)(object)grid != (Object)null)
				{
					PlayRoleAni("녩դ㘶\0郧\ud9ec");
					grid.PlayBoxBrokenAni(canClick: true, () =>
					{
						grid.PlayCreatorEffect();
					});
					Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숃끝疫渄彐\rÚ叙刔暇\ud9c4ş");
					ShowTalk();
				}
			}, 1f, 1, 0f);
			OnAnalytic("숚끎徼㜛獫c\u0082厁");
			Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢛");
		}
		else
		{
			string text2 = "숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬掰漐摃\r\u0092厑숏끑皰攐潫=Þ叝化機ā讹饩";
			float length2 = cookAni.GetClip(text2).length;
			cookAni.Play(text2);
			DOTweenModuleUI.DOFade(cookCG, 0f, 0.1f);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				((Component)cookAni).transform.SetSelfActive<Transform>(false);
				PlayEatShowAni();
			}, length2, 0, 0f);
		}
		videoType = 0;
		touchVideo.SetSelfActive(active: false);
	}

	private void PlayFoodCollectAni(NewBieMergeGrid grid, Action callback)
	{
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_0033: Expected Obj, but got Unknown
		//IL_008e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cf: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ed: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f7: Expected Obj, but got Unknown
		//IL_01a9: Unknown result type (might be due to invalid IL or missing references)
		//IL_01b3: Expected Obj, but got Unknown
		int goodId = grid.GetGoodId();
		grid.ChangeGoodId(0);
		grid.OnSubminit();
		GameObject node = new GameObject();
		Image val = node.AddComponent<Image>();
		string iconByGoodId = ObjectManager.GetInstance().mgMakeCakeModel.GetIconByGoodId(goodId);
		val.sprite = resLoader.LoadSync<Sprite>(iconByGoodId);
		((Graphic)val).SetNativeSize();
		node.transform.SetParent(dragParent, false);
		node.transform.position = ((Component)grid).transform.position;
		float num = 0.565f;
		node.transform.localScale = Vector3.one * num;
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(node.transform, ((Component)imgOrder).transform.position, 0.4f, false), (Ease)9), (TweenCallback)(() =>
		{
			PlayGoodFeedbackAni();
		}));
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)ShortcutExtensions.DOScale(node.transform, 1.5f * num, 0.266f)), (Tween)(object)ShortcutExtensions.DOScale(node.transform, 0.9f * num, 0.2f)), (Tween)(object)ShortcutExtensions.DOScale(node.transform, 1.05f * num, 0.166f)), (Tween)(object)ShortcutExtensions.DOScale(node.transform, 0.98f * num, 0.1f)), (Tween)(object)ShortcutExtensions.DOScale(node.transform, 1f * num, 0.166f)), (TweenCallback)(() =>
		{
			Object.Destroy((Object)(object)node);
			callback?.Invoke();
		}));
	}

	private void PlayGoodFeedbackAni()
	{
		//IL_0059: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = resLoader.LoadSync<GameObject>("숏끜徿唐䕗&\u0082厁숝끴於䴞䥶;\u009a厙숏끈斾眐敢;\u009a厙숄끜榸弅彟'ª厩뺭");
		if ((Object)(object)val != (Object)null)
		{
			GameObject go = Object.Instantiate<GameObject>(val);
			go.transform.SetParent(dragParent, false);
			go.transform.position = ((Component)imgOrder).transform.position;
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				Object.Destroy((Object)(object)go);
			}, 2.5f, 0, 0f);
		}
	}

	private void WeekGuideMerge(int goodId)
	{
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_007d: Unknown result type (might be due to invalid IL or missing references)
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_008f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		List<int> operateIdList = ObjectManager.GetInstance().mgMakeCakeModel.GetOperateIdList();
		List<NewBieMergeGrid> list = new List<NewBieMergeGrid>();
		for (int i = 0; i < operateIdList.Count; i++)
		{
			NewBieMergeGrid gridById = GetGridById(operateIdList[i]);
			if (gridById.GetGoodId() == goodId)
			{
				list.Add(gridById);
			}
		}
		if (list.Count < 2)
		{
			Debug.LogWarning((object)string.Format("隫\u1733결€⭝6í區쉉뀊ᆤ軯笈栂⹉ᶾ∲*z뀡#\uda73憎", goodId));
			return;
		}
		Vector3 position = ((Component)list[0]).transform.position;
		Vector3 position2 = ((Component)list[1]).transform.position;
		DoHandMoveAction(position, position2);
		bInWeekGuide = true;
	}

	private void WeekGuideCreateMilk()
	{
		//IL_0033: Unknown result type (might be due to invalid IL or missing references)
		List<int> operateIdList = ObjectManager.GetInstance().mgMakeCakeModel.GetOperateIdList();
		for (int i = 0; i < operateIdList.Count; i++)
		{
			NewBieMergeGrid gridById = GetGridById(operateIdList[i]);
			if (gridById.GetGoodId() == 10)
			{
				ShowHandClickNotice(((Component)gridById).transform.position);
				bInWeekGuide = true;
				break;
			}
		}
	}

	public void TryCloseWeekGuide()
	{
		if (bInWeekGuide)
		{
			bInWeekGuide = false;
			if (handMoveSeq != null)
			{
				TweenExtensions.Kill((Tween)(object)handMoveSeq, false);
				handMoveSeq = null;
			}
			HideHandAni();
		}
	}

	private void OnOneSecond(float dt)
	{
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		if (!bStartNoOperate)
		{
			return;
		}
		noOperateTime++;
		if (noOperateTime == 2)
		{
			if (talkCount == 4)
			{
				WeekGuideMerge(3);
				SetStartNoOperate(bStart: false);
			}
			else if (createMilkCount == 2 && (Object)(object)submitGrid == (Object)null)
			{
				WeekGuideMerge(11);
				SetStartNoOperate(bStart: false);
			}
			else if (createMilkCount == 2 && (Object)(object)submitGrid != (Object)null)
			{
				ShowHandClickNotice(submitNode.transform.position);
				bInWeekGuide = true;
				SetStartNoOperate(bStart: false);
			}
		}
		else if (noOperateTime == 1 && createMilkCount == 1)
		{
			WeekGuideCreateMilk();
			SetStartNoOperate(bStart: false);
		}
		Debug.LogWarning((object)string.Format("숄끔斖挅佑\u0001\u009a厙쉇끔㶽ⵈ漉\u007fù司쉇뀗濤佈㴉<Â叁숋끟咫椌灀7V单籭e4뀠}\udd64哕", noOperateTime));
	}

	public void SetStartNoOperate(bool bStart)
	{
		if (talkCount >= 4 && bStartNoOperate != bStart)
		{
			bStartNoOperate = bStart;
			noOperateTime = 0;
			if (bStart)
			{
				TimeManager.GetInstance().Schedule(this, OnOneSecond, 1f, -1, 1f);
			}
			else
			{
				TimeManager.GetInstance().UnSchedule(OnOneSecond, this);
			}
		}
	}

	private void PlayTransportAni()
	{
		OnAnalytic("숚끎徼㜛獫a\u0082厁");
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			CloseView();
			closeCallback?.Invoke();
		}, 0.3f, 0, 0f);
		Singleton<WwiseAudioManager>.Instance.StopMusic();
	}

	private void OnAnalytic(string step)
	{
		ObjectManager.GetInstance().mgMakeCakeModel.OnAnalyticCake(step);
	}

	private void PlayVideoMusic()
	{
		Singleton<WwiseAudioManager>.Instance.PlayMusic("숵끏碽弶慇4æ句숄끊枼々潝<¢厡뺭");
	}

	public void PlayCanMergeAni(int goodId)
	{
		List<NewBieMergeGrid> list = new List<NewBieMergeGrid>();
		foreach (NewBieMergeGrid grid in gridList)
		{
			if (grid.GetGoodId() == goodId)
			{
				list.Add(grid);
			}
		}
		if (list.Count == 2)
		{
			NewBieMergeGrid newBieMergeGrid = list[0];
			NewBieMergeGrid newBieMergeGrid2 = list[1];
			newBieMergeGrid.PlayMergeHintAni(((Component)newBieMergeGrid2.MergeItem).transform);
			newBieMergeGrid2.PlayMergeHintAni(((Component)newBieMergeGrid.MergeItem).transform);
		}
	}

	private void PlayEatShowAni()
	{
		eatCakeNode.SetSelfActive(active: true);
		eatText.SetAlpha<RTLTextMeshPro>(0f);
		float length = eatAni.GetClip("숨끟䶮攩九7:匹숯끝䎼愰牕&\u0012匑숃끟徏猄歑%\u0082厁扨o4끟c䤾㫁").length;
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			PlayEatTextAni(bShow: true, () =>
			{
				eatCount++;
			});
		}, length, 0, 0f);
		OnAnalytic("숚끎徼ㄛ獫a\u0082厁");
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢝");
	}

	private void PlayEatTextAni(bool bShow, Action callback = null)
	{
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Expected Obj, but got Unknown
		if (bShow)
		{
			int num = ((eatCount == 0) ? 4 : 5);
			LocalizedLang.SetUITextLocalization((TextMeshProUGUI)(object)eatText, string.Format("숏끛殲攐浗3²厱숃끝徬琄彐7\u0082厁녩հ⡐\0逭\ud932", num));
			TweenSettingsExtensions.OnComplete<Tweener>(DOTweenModuleUI.DOFade((Graphic)(object)eatText, 1f, 0.3f), (TweenCallback)(() =>
			{
				callback?.Invoke();
				guideTouchNode.SetSelfActive(active: true);
			}));
		}
		else
		{
			DOTweenModuleUI.DOFade((Graphic)(object)eatText, 0f, 0.3f);
		}
	}

	private void PlayEatAni(Action callback = null)
	{
		PlayEatTextAni(bShow: false);
		string eventName = ((eatCount == 1) ? "숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숞끟憸欟彫1\u008a厉밚ú赴" : "숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숞끟憸欟彫1\u008a厉밗ú赴");
		Singleton<WwiseAudioManager>.Instance.PlayEffect(eventName);
		string text = ((eatCount == 0) ? "删犛\ud9dbŃ" : string.Format("籩d4끥}\uf464哕", eatCount));
		eatCount++;
		eatSpine.AnimationState.SetAnimation(0, text, false);
		Animation val = eatSpine.SkeletonData.FindAnimation(text);
		if (val != null)
		{
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				if (eatCount <= 2)
				{
					PlayEatTextAni(bShow: true);
				}
				if (eatCount == 3)
				{
					ObjectManager.GetInstance().mgMakeCakeModel.OnFinishOneStage();
					ShowChildTalk();
				}
				callback?.Invoke();
			}, val.Duration, 0, 0f);
		}
		if (eatCount > 1 && eatCount < 4)
		{
			OnAnalytic(string.Format("숚끎徼笛獫a\u0082厁⑤அ", eatCount));
		}
	}

	public (int, int) GetRawAndColByGridId(int id)
	{
		int num = gridCol * gridRaw;
		if (id > 0 && id <= num)
		{
			int item = Mathf.FloorToInt((float)(id - 1) * 1f / (float)gridCol) + 1;
			int item2 = Mathf.FloorToInt((float)(id - 1) * 1f % (float)gridCol) + 1;
			return (item, item2);
		}
		return (0, 0);
	}

	public int GetGridIdByWorldPos(Vector3 worldP)
	{
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_000c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_004e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0059: Unknown result type (might be due to invalid IL or missing references)
		//IL_0077: Unknown result type (might be due to invalid IL or missing references)
		Vector3 val = ((Transform)gridParent).InverseTransformPoint(worldP);
		Vector2 sizeDelta = gridParent.sizeDelta;
		float num = sizeDelta.x * 0.5f;
		float num2 = sizeDelta.y * 0.5f;
		if (val.x <= 0f - num || val.x >= num || val.y <= 0f - num2 || val.y >= num2)
		{
			return 0;
		}
		int num3 = Mathf.FloorToInt((val.x + num) * 1f / gridW) + 1;
		return (Mathf.FloorToInt((num2 - val.y) * 1f / gridH) + 1 - 1) * gridCol + num3;
	}

	public Vector3? GetPosByGridId(int id)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		var (num, num2) = GetRawAndColByGridId(id);
		if (num <= 0 || num2 <= 0)
		{
			return null;
		}
		Vector2 sizeDelta = gridParent.sizeDelta;
		float num3 = (0f - sizeDelta.x) * 0.5f + gridW * 0.5f;
		float num4 = sizeDelta.y * 0.5f - gridH * 0.5f;
		float num5 = num3 + (float)(num2 - 1) * gridW;
		float num6 = num4 - (float)(num - 1) * gridH;
		return new Vector3(num5, num6, 0f);
	}

	public void TryMergeGrid(NewBieMergeGrid grid1, NewBieMergeGrid grid2)
	{
		int goodId = grid1.GetGoodId();
		int goodId2 = grid2.GetGoodId();
		if (goodId == goodId2)
		{
			int num = goodId + 1;
			grid1.ResetItemIcon();
			grid1.ChangeGoodId(0);
			grid2.ChangeGoodId(num);
			grid2.PlayMergeAni();
			string text = "";
			switch (num)
			{
			case 2:
				text = "숍끟カㄎ浑\rÅ叄";
				break;
			case 3:
				text = "숍끟カ㈎浑\rÅ叄";
				break;
			case 4:
				text = "숍끟カ㌎浑\rÅ叄";
				break;
			case 12:
				text = "숍끟カ㐎浑\rÅ叄";
				break;
			}
			if (text != "")
			{
				Singleton<WwiseAudioManager>.Instance.PlayEffect(text);
			}
			if (num == 3 || num == 12)
			{
				SetStartNoOperate(bStart: true);
				guideTouchNode.SetSelfActive(active: false);
				if (num == 3)
				{
					TimeManager.GetInstance().Schedule(this, (float dt) =>
					{
						PlayCanMergeAni(3);
					}, 0.7f, 1, 0f);
				}
			}
			int unlockGridIdByGoodId = ObjectManager.GetInstance().mgMakeCakeModel.GetUnlockGridIdByGoodId(goodId);
			if (unlockGridIdByGoodId > 0)
			{
				NewBieMergeGrid gridById = GetGridById(unlockGridIdByGoodId);
				if ((Object)(object)gridById != (Object)null)
				{
					gridById.PlayBoxBrokenAni(talkCount >= 4);
					Singleton<WwiseAudioManager>.Instance.PlayEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉숃끝疫渄彐\rÚ叙刔暇\ud9c4ş");
				}
			}
			bool flag = num == 4 || num == 12;
			grid2.SetTouchEnabled(!flag);
			OnMergeSuccess();
			if (!flag)
			{
				return;
			}
			grid2.PlayGreatAni();
			OnOrderFinished();
			submitGrid = grid2;
			if (num == 4)
			{
				OnAnalytic("숚끎徼㌛獫c\u0082厁");
				touchMask.SetSelfActive(active: true);
				TimeManager.GetInstance().Schedule(this, (float dt) =>
				{
					//IL_0017: Unknown result type (might be due to invalid IL or missing references)
					//IL_001c: Unknown result type (might be due to invalid IL or missing references)
					//IL_0044: Unknown result type (might be due to invalid IL or missing references)
					//IL_005c: Unknown result type (might be due to invalid IL or missing references)
					submitNode.SetSelfActive(active: true);
					Vector3 position = ((Component)orderAni).transform.position;
					((Component)orderAni).transform.SetParent(highlightNode.transform, false);
					((Component)orderAni).transform.position = position;
					ShowTalk();
					ShowHandClickNotice(submitNode.transform.position);
				}, 0.5f, 0, 0f);
			}
			else
			{
				OnAnalytic("숚끎徼㐛獫`\u0082厁");
				submitNode.SetSelfActive(active: true);
			}
		}
		else
		{
			grid1.ResetItemIcon();
			if (!bInGuide)
			{
				grid1.ChangeGoodId(goodId2);
				grid2.ChangeGoodId(goodId);
				SetStartNoOperate(bStart: true);
				Singleton<WwiseAudioManager>.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
			}
		}
	}

	public NewBieMergeGrid GetGridByWorldPos(Vector3 worldPos)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		int gridIdByWorldPos = GetGridIdByWorldPos(worldPos);
		return GetGridById(gridIdByWorldPos);
	}

	public NewBieMergeGrid GetGridById(int id)
	{
		if (id < 1 || id > gridList.Count)
		{
			return null;
		}
		return gridList[id - 1];
	}

	public void CreateOneMilk(NewBieMergeGrid generateGrid)
	{
		//IL_00cb: Unknown result type (might be due to invalid IL or missing references)
		if (createMilkCount >= 2 || (Object)(object)generateGrid == (Object)null)
		{
			return;
		}
		EventManager.GetInstance().DispatchEvent(202123, VibrateManager.VibrateType.Moderate);
		if (createMilkCount == 0)
		{
			bInGuide = false;
			HideTalk();
			HideHandAni();
			guideTouchNode.SetSelfActive(active: false);
		}
		List<int> list = new List<int> { 10, 11, 12 };
		NewBieMergeGrid newBieMergeGrid = null;
		for (int i = 0; i < list.Count; i++)
		{
			int id = list[i];
			NewBieMergeGrid gridById = GetGridById(id);
			if ((Object)(object)gridById != (Object)null && gridById.GetGoodId() == 0)
			{
				newBieMergeGrid = gridById;
				break;
			}
		}
		if ((Object)(object)newBieMergeGrid != (Object)null)
		{
			createMilkCount++;
			newBieMergeGrid.ChangeGoodId(11);
			newBieMergeGrid.PlayCreateMilkAni(((Component)generateGrid).transform.position);
			if (createMilkCount == 2)
			{
				generateGrid.ChangeGoodId(0);
				generateGrid.HideCreatorEffect();
			}
			string step = ((createMilkCount == 1) ? "숚끎徼㈛獫`\u0082厁" : "숚끎徼㌛獫`\u0082厁");
			OnAnalytic(step);
			Singleton<WwiseAudioManager>.Instance.PlayEffect("숉끖枰攊损\r¢厡畮e4끡v䐽䷚");
		}
	}

	private void PlayOvenAni()
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_006a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0074: Expected Obj, but got Unknown
		//IL_0081: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Expected Obj, but got Unknown
		videoIndex = 2;
		((Component)ovenAni).transform.SetSelfActive<Transform>(true);
		ovenAni.Play("숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬现栐摃\rÒ发쉛끍溆楜潫3¾厽");
		((Graphic)imgOven).color = new Color(1f, 1f, 1f, 0f);
		ovenVP.targetTexture.Release();
		ovenVP.prepareCompleted += OnOvenVideoPrepared;
		ovenVP.seekCompleted += OnOvenVideoSeeked;
		OnAnalytic("숚끎徼㔛獫c\u0082厁");
		if ((Object)(object)imgOvenBg == (Object)null)
		{
			Image component = ((Component)((Component)ovenAni).transform.Find("樲㵿")).GetComponent<Image>();
			if ((Object)(object)component != (Object)null)
			{
				component.SetAlpha<Image>(0f);
				imgOvenBg = component;
			}
		}
		string videoName = "숄끌㦼㜅潫eé叨숃끥澯⸄歐7Â叁刓斯\ud9dfř";
		LoadVideoRaw(videoName, ovenVP);
	}

	private void OnOvenVideoSeeked(VideoPlayer vp)
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0017: Expected Obj, but got Unknown
		ovenVP.seekCompleted -= OnOvenVideoSeeked;
		vp.Play();
	}

	private void OnOvenVideoPrepared(VideoPlayer vp)
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Expected Obj, but got Unknown
		//IL_0047: Unknown result type (might be due to invalid IL or missing references)
		Debug.LogWarning((object)"숅끔滹\u2006潂7¾厽숚끈於搛灕 \u009a厙넭ᨽ溴\0郮\ud907");
		vp.prepareCompleted -= OnOvenVideoPrepared;
		vp.Play();
		if ((Object)(object)imgOvenBg != (Object)null)
		{
			imgOvenBg.SetAlpha<Image>(1f);
		}
		((Graphic)imgOven).color = Color.white;
		skipNode.SetSelfActive(active: true);
		bOvenOrCookSkip = false;
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			if (!bOvenOrCookSkip)
			{
				ovenCG.SetSelfActive<CanvasGroup>(true);
				ovenCG.alpha = 1f;
			}
		}, (float)vp.length - 0.3f, 1, 0f);
	}

	private void OnOvenVideoError(VideoPlayer vp, string message)
	{
		Debug.LogError((object)("䐋\u2cef樁ᥴ쯲觃\ua8f0왠Ὢሸ" + message));
		OnOvenVideoOver();
	}

	private void OnOvenVideoFinished(VideoPlayer vp)
	{
		Debug.LogWarning((object)"숄끌榼搅演$ª厩숌끕槹猍敝<ª厩쉇끟㶽ⵈ栉\u007fù司\ue41e\u008e軴");
		OnOvenVideoOver();
	}

	private void OnOvenVideoOver(bool bSkip = false)
	{
		if (bOvenVideoEnd)
		{
			return;
		}
		bOvenVideoEnd = true;
		videoType = 1;
		touchVideo.SetSelfActive(active: true);
		skipNode.SetSelfActive(active: false);
		if (bSkip)
		{
			OnAnalytic("숚끎徼㔛獫c\u0082厁医橳ā讥鍰");
		}
		OnAnalytic("숚끎徼㘛獫c\u0082厁");
		if (bSkip)
		{
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				PlayOvenFinishEffect();
			}, 0.5f, 1, 0f);
		}
	}

	private void PlayOvenFinishEffect()
	{
		ovenCG.SetSelfActive<CanvasGroup>(true);
		ovenCG.alpha = 0f;
		DOTweenModuleUI.DOFade(ovenCG, 1f, 0.05f);
	}

	private void OnOvenVideoSkip()
	{
		AnimationState val = ovenAni["숨끟䶮攩九7:匹숸끝憼爹牑%\u008a厉숏끬现栐摃\rÒ发쉛끍溆楜潫3¾厽"];
		if ((TrackedReference)(object)val != (TrackedReference)null)
		{
			val.time = val.length - 0.5f;
			ovenAni.Sample();
		}
		ovenVP.frame = (long)(ovenVP.frameCount - 1);
		OnOvenVideoOver(bSkip: true);
		Singleton<WwiseAudioManager>.Instance.StopEffect("숵끏碽弶慇4æ句숅끏憭氆瑆;\u008a厉恟a4끩aﭤ㢚");
		Singleton<WwiseAudioManager>.Instance.PlayEffect("숏끓犫欐晃=Î反뻯");
	}

	private void PlayStartVideo()
	{
		videoIndex = 1;
		skipNode.SetSelfActive(active: false);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			skipNode.SetSelfActive(active: true);
		}, 10f, 0, 0f);
		imgStart.SetAlpha<RawImage>(0f);
		((Component)startVP).transform.parent.SetSelfActive<Transform>(true);
		OnAnalytic("숚끎徼猛獫c\u0082厁刣疿\ud9dcŀ");
		string videoName = "수끎憸欙獀\u0011\u008a厉숎끬ㆰ⸏救=É又듓\u0087赴";
		LoadVideoRaw(videoName, startVP);
	}

	private void LoadVideoRaw(string videoName, VideoPlayer vp)
	{
		string path = ResKitUtil.AssetBundleName2Url(videoName);
		path = _getPlatformPath(path);
		vp.renderMode = (VideoRenderMode)2;
		vp.source = (VideoSource)1;
		vp.url = path;
		vp.Prepare();
	}

	private string _getPlatformPath(string path)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Invalid comparison between Unknown and I4
		if ((int)Application.platform == 11 && !path.StartsWith(Application.streamingAssetsPath))
		{
			path = "㭦i4끥<杽ᎇ" + path;
		}
		return path;
	}

	private void LoadVideo(string videoName, VideoPlayer vp)
	{
	}

	private void OnStartVideoPrepared(VideoPlayer vp)
	{
		int width = (int)vp.width;
		int height = (int)vp.height;
		SetRawImageSize(width, height);
		imgStart.SetAlpha<RawImage>(1f);
		vp.Play();
		PlayVideoMusic();
		InvokeStartCb();
	}

	private void SetRawImageSize(int width, int height)
	{
		//IL_0011: Unknown result type (might be due to invalid IL or missing references)
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		//IL_0020: Unknown result type (might be due to invalid IL or missing references)
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		RectTransform component = ((Component)((Component)((Component)this).transform).GetComponentInParent<Canvas>()).GetComponent<RectTransform>();
		Rect rect = component.rect;
		float width2 = rect.width;
		rect = component.rect;
		float height2 = rect.height;
		float num = (float)width / (float)height;
		float num2;
		float num3;
		if (width2 / height2 > num)
		{
			num2 = height2;
			num3 = num2 * num;
		}
		else
		{
			num3 = width2;
			num2 = num3 / num;
		}
		startVP.targetTexture.Release();
		((Texture)startVP.targetTexture).width = (int)num3;
		((Texture)startVP.targetTexture).height = (int)num2;
		startVP.targetTexture.Create();
		((Graphic)imgStart).rectTransform.sizeDelta = new Vector2(num3, num2);
	}

	private void OnStartVideoError(VideoPlayer vp, string message)
	{
		InvokeStartCb();
		Debug.LogError((object)("䓨\u2cef姙ᥑ쯲觃\ua8f0왆Ὢሸ" + message));
		OnStartVideoOver();
	}

	private void OnStartVideoFinished(VideoPlayer vp)
	{
		OnAnalytic("숚끎徼瘛獫c\u0082厁숅끞溼搆楫7¾厽");
		OnStartVideoOver();
	}

	private void OnStartVideoOver()
	{
		if (!bStartVideoEnd)
		{
			bStartVideoEnd = true;
			((Component)startVP).transform.parent.SetSelfActive<Transform>(false);
			skipNode.SetSelfActive(active: false);
			Singleton<WwiseAudioManager>.Instance.StopMusic();
			Singleton<WwiseAudioManager>.Instance.PlayMusic("숵끝璴漶所'Ö叕划撟\ud9daŘ");
			StartTalk();
		}
	}

	public void OnSkipClick()
	{
		skipNode.SetSelfActive(active: false);
		switch (videoIndex)
		{
		case 1:
			startVP.Stop();
			OnAnalytic("숚끎徼猛獫c\u0082厁닙\u009f赴");
			OnStartVideoOver();
			break;
		case 2:
			bOvenOrCookSkip = true;
			OnOvenVideoSkip();
			break;
		case 3:
			bOvenOrCookSkip = true;
			OnCookVideoSkip();
			break;
		}
	}
}
