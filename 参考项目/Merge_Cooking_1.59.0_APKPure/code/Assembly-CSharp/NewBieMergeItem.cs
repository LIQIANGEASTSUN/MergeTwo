using System;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using TLF;
using UnityEngine;
using UnityEngine.UI;

public class NewBieMergeItem : MonoBehaviour
{
	public Transform ItemIconParent;

	public Animation IconParentAni;

	public Image ItemIcon;

	public Image WebIcon;

	public Graphic DragIcon;

	public Transform EffectParent;

	public Transform EffectTopParent;

	public GameObject FinishFlag;

	public Animation BoxAni;

	public GameButton btnCmp;

	private NewBieMergeGrid mergeGrid;

	private ResLoader resloader;

	private float IconNormalScale = 0.565f;

	private int goodId;

	private bool bValid;

	private GameObject creatorEffectGo;

	private GameObject mMergeHintGo;

	private Tween mergeHintScaleTween;

	public void Init(NewBieMergeGrid grid, int goodId, ResLoader loader)
	{
		mergeGrid = grid;
		this.goodId = goodId;
		resloader = loader;
		InitItem();
	}

	private void InitItem()
	{
		MGMakeCakeModel mgMakeCakeModel = ObjectManager.GetInstance().mgMakeCakeModel;
		SetIcon(mgMakeCakeModel.GetIconByGoodId(goodId));
		SetBoxEnable(mgMakeCakeModel.IsShowBox(mergeGrid.GetGridId()), bInit: true);
	}

	public void SetIcon(string icon)
	{
		//IL_0044: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		if (string.IsNullOrEmpty(icon))
		{
			ItemIcon.SetSelfActive<Image>(false);
		}
		else
		{
			ItemIcon.SetSelfActive<Image>(true);
			ItemIcon.sprite = resloader.LoadSync<Sprite>(icon);
			((Component)ItemIcon).transform.localScale = Vector3.one * IconNormalScale;
			((Graphic)ItemIcon).SetNativeSize();
		}
		if ((Object)(object)btnCmp != (Object)null && goodId == 10)
		{
			btnCmp.EnableDefaultSound = false;
		}
	}

	private void SetBoxEnable(bool bEnable, bool bInit = false)
	{
		((Component)BoxAni).transform.parent.SetSelfActive<Transform>(bEnable);
		if (bEnable & bInit)
		{
			ItemIcon.SetSelfActive<Image>(false);
		}
		bValid = !bEnable;
	}

	public void OnItemClick()
	{
		if (bValid && goodId == 10)
		{
			mergeGrid.CreateOneMilk();
		}
	}

	public void UpdateGoodId(int id)
	{
		goodId = id;
		MGMakeCakeModel mgMakeCakeModel = ObjectManager.GetInstance().mgMakeCakeModel;
		SetIcon(mgMakeCakeModel.GetIconByGoodId(goodId));
	}

	public void PlayBoxBrokenAni(Action callback = null)
	{
		string text = "숏끛皴攐䝸7Þ叝숏끳碭椐汙\ræ句숐끔澾瘑慝\rÂ叁녥孲㉐\0這\ud974";
		float length = BoxAni.GetClip(text).length;
		BoxAni.Play(text);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			ItemIcon.SetSelfActive<Image>(true);
		}, length - 0.5f, 0, 0f);
		TimeManager.GetInstance().Schedule(this, (float dt) =>
		{
			SetBoxEnable(bEnable: false);
			callback?.Invoke();
		}, length, 0, 0f);
	}

	public void OnBeginDrag(Vector3 worldPos)
	{
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		Transform dragParent = mergeGrid.GetDragParent();
		if ((Object)(object)dragParent != (Object)null)
		{
			((Component)ItemIcon).transform.SetParent(dragParent, false);
			((Component)ItemIcon).transform.position = worldPos;
		}
	}

	public void OnDrag(Vector3 worldPos)
	{
		//IL_000b: Unknown result type (might be due to invalid IL or missing references)
		((Component)ItemIcon).transform.position = worldPos;
	}

	public void ResetIconParent()
	{
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		((Component)ItemIcon).transform.SetParent(ItemIconParent, false);
		((Component)ItemIcon).transform.localPosition = Vector3.zero;
	}

	public bool IsValid()
	{
		return bValid;
	}

	public void SetFinsihed(bool bFinished)
	{
		FinishFlag.SetSelfActive(bFinished);
	}

	public void PlayCreateMilkAni(Vector3 startPos, Action callbak = null)
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0024: Unknown result type (might be due to invalid IL or missing references)
		//IL_0064: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_006b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		//IL_0072: Unknown result type (might be due to invalid IL or missing references)
		//IL_0079: Unknown result type (might be due to invalid IL or missing references)
		//IL_0082: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ec: Unknown result type (might be due to invalid IL or missing references)
		//IL_0150: Unknown result type (might be due to invalid IL or missing references)
		//IL_0157: Unknown result type (might be due to invalid IL or missing references)
		//IL_015c: Unknown result type (might be due to invalid IL or missing references)
		//IL_015d: Unknown result type (might be due to invalid IL or missing references)
		//IL_015f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0173: Unknown result type (might be due to invalid IL or missing references)
		//IL_0175: Unknown result type (might be due to invalid IL or missing references)
		//IL_017c: Unknown result type (might be due to invalid IL or missing references)
		//IL_017d: Unknown result type (might be due to invalid IL or missing references)
		//IL_018c: Unknown result type (might be due to invalid IL or missing references)
		//IL_018e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0127: Unknown result type (might be due to invalid IL or missing references)
		//IL_0139: Unknown result type (might be due to invalid IL or missing references)
		//IL_0102: Unknown result type (might be due to invalid IL or missing references)
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0209: Unknown result type (might be due to invalid IL or missing references)
		//IL_020f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0219: Unknown result type (might be due to invalid IL or missing references)
		//IL_0301: Unknown result type (might be due to invalid IL or missing references)
		//IL_030b: Expected Obj, but got Unknown
		Vector3 position = ((Component)ItemIcon).transform.position;
		Transform dragParent = mergeGrid.GetDragParent();
		if ((Object)(object)dragParent != (Object)null)
		{
			((Component)ItemIcon).transform.SetParent(dragParent, false);
			((Component)ItemIcon).transform.position = startPos;
		}
		float iconNormalScale = IconNormalScale;
		Vector3 val = Vector3.Lerp(startPos, position, 0.84f);
		float num = val.x - startPos.x;
		float num2 = val.y - startPos.y;
		float num3 = startPos.x + num * 0.5f;
		float num4 = startPos.y + num * 0.5f;
		if (num == 0f)
		{
			num4 = startPos.y + num * 0.5f;
		}
		else if (num2 == 0f)
		{
			num4 = startPos.y + 100f / Display.PixelsPerUnit * GetHorizontalScale(startPos, val);
		}
		else if (num2 > 0f)
		{
			num3 = startPos.x + num * GameLevelDefine.DownUp2X;
			num4 = val.y - num2 * GameLevelDefine.DownUp2Y;
		}
		else
		{
			num3 = val.x - num * GameLevelDefine.UpDown2X;
			num4 = startPos.y + num2 * GameLevelDefine.UpDown2Y;
		}
		Vector3 controlPoint = new Vector3(num3, num4, val.z);
		Vector3[] beizerList = UIAnimationExtend.GetBeizerList(startPos, controlPoint, val, 30);
		Vector3[] array = new Vector3[2] { val, position };
		float num5 = GetPathDistance(beizerList) + Vector3.Distance(val, position) * 100f;
		float num6 = 0.51f;
		float num7 = 0.28f;
		float num8 = 867f;
		float num9 = 84f;
		float num10 = (num6 - num7) * ((num5 - num9) / (num8 - num9));
		if (num10 < 0f)
		{
			num10 = 0f;
		}
		if (num10 > num6 - num7)
		{
			num10 = num6 - num7;
		}
		float num11 = num7 + num10;
		float num12 = 0.383f;
		Transform transform = ((Component)ItemIcon).transform;
		transform.localScale = Vector3.one * iconNormalScale * 0.5f;
		TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, iconNormalScale * 1.3f, num11 * 0.4f), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, iconNormalScale * 0.7f, num11 * 0.6f), (Ease)2)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, iconNormalScale * 1.1f, num12 * 0.5f), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, iconNormalScale * 1f, num12 * 0.5f), (Ease)2));
		TweenSettingsExtensions.OnComplete<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(transform, beizerList, num11, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)3)), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(transform, array, num12, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)6)), (TweenCallback)(() =>
		{
			callbak?.Invoke();
			ResetIconParent();
		}));
	}

	private float GetPathDistance(Vector3[] path)
	{
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		float num = 0f;
		for (int i = 1; i < path.Length; i++)
		{
			num += Vector3.Distance(path[i - 1], path[i]);
		}
		return num * 100f;
	}

	private float GetHorizontalScale(Vector3 _startPoint, Vector3 _endPoint)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		return (int)(Vector2.Distance(Vector2.op_Implicit(_startPoint), Vector2.op_Implicit(_endPoint)) * 100f / GameLevelViewLogic.GridWidth) switch
		{
			0 => 0.25f, 
			1 => 0.5f, 
			_ => 1f, 
		};
	}

	public void PlayMergeHint()
	{
		if ((Object)(object)mMergeHintGo == (Object)null)
		{
			mMergeHintGo = CreateGameObject("숏끜徿唐䕗&\u0082厁숝끴於䴞䥶;\u009a厙숏끈斾眐敢;\u009a厙숄끒梼攅当1¦厥癮g4끨w弶仉", EffectParent);
		}
		IconParentAni.Play("숏끛皴攐䝸7Þ叝숏끳溭攐汙\r¾厽뻫");
	}

	public void PlayMergeHintHide()
	{
		if ((Object)(object)mMergeHintGo != (Object)null)
		{
			Object.Destroy((Object)(object)mMergeHintGo);
			mMergeHintGo = null;
		}
		IconParentAni.Stop("숏끛皴攐䝸7Þ叝숏끳溭攐汙\r¾厽뻫");
	}

	public void PlayMergeAnim()
	{
		//IL_003a: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_004f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Unknown result type (might be due to invalid IL or missing references)
		//IL_006f: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0095: Expected Obj, but got Unknown
		if (!((Object)(object)ItemIcon == (Object)null))
		{
			ShortcutExtensions.DOKill((Component)(object)((Component)ItemIcon).transform, false);
			Vector3 endScale = ((Component)ItemIcon).transform.localScale;
			((Component)ItemIcon).transform.localScale = Vector3.zero;
			TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale()), (TweenCallback)(() =>
			{
				//IL_0011: Unknown result type (might be due to invalid IL or missing references)
				ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale());
			}));
		}
	}

	private GameObject CreateGameObject(string resName, Transform parent)
	{
		GameObject val = resloader.LoadSync<GameObject>(resName);
		if ((Object)(object)val == (Object)null)
		{
			return null;
		}
		GameObject val2 = Object.Instantiate<GameObject>(val);
		val2.transform.SetParent(parent);
		val2.transform.LocalIdentity<Transform>();
		val2.SetSelfActive(active: true);
		return val2;
	}

	public void PlayMergeHintScaleAni(Transform trans)
	{
		if (!((Object)(object)trans == (Object)null))
		{
			Tween val = mergeHintScaleTween;
			if (val != null)
			{
				TweenExtensions.Kill(val, false);
			}
			mergeHintScaleTween = DOTweenUITools.DoInterattractionAnimation(((Component)this).transform, trans, isGuideOptimize: false, 1);
		}
	}

	public void PlayCreatorEffect()
	{
		creatorEffectGo = CreateGameObject("숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹划擫\ud9dbņ", EffectTopParent);
	}

	public void HideCreatorEffect()
	{
		if ((Object)(object)creatorEffectGo != (Object)null)
		{
			Object.Destroy((Object)(object)creatorEffectGo);
			creatorEffectGo = null;
		}
	}
}
