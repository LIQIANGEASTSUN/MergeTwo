using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UniRx;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.U2D;
using UnityEngine.UI;

namespace TLF;

public class BaseViewLogic : EventTarget
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnPreloadAssetsAsync_003Ed__36 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0042: Unknown result type (might be due to invalid IL or missing references)
			//IL_0047: Unknown result type (might be due to invalid IL or missing references)
			//IL_004e: Unknown result type (might be due to invalid IL or missing references)
			//IL_000a: Unknown result type (might be due to invalid IL or missing references)
			//IL_000f: Unknown result type (might be due to invalid IL or missing references)
			//IL_0012: Unknown result type (might be due to invalid IL or missing references)
			//IL_0017: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Unknown result type (might be due to invalid IL or missing references)
			//IL_002c: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			try
			{
				Awaiter val;
				if (num != 0)
				{
					UniTask completedTask = UniTask.CompletedTask;
					val = completedTask.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003COnPreloadAssetsAsync_003Ed__36>(ref val, ref this);
						return;
					}
				}
				else
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val.GetResult();
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public bool isBackground;

	public bool isFullScene = true;

	public bool isBackPressed;

	public bool isHide;

	public bool isFilter;

	public bool isAutoPopup;

	public bool isHideDontDestroy;

	public bool isShieldBackPressed;

	public ResLoader resLoader;

	protected bool isView;

	public object viewData;

	[NonSerialized]
	public BaseViewLogic parentViewLogic;

	private readonly List<Object> assetCache = new List<Object>();

	[NonSerialized]
	private List<BaseViewLogic> subViewLogicList = new List<BaseViewLogic>();

	[HideInInspector]
	public bool isShowingView = true;

	[NonSerialized]
	public long ShowIndex;

	[HideInInspector]
	protected bool IsShowCloseMask = true;

	[NonSerialized]
	public bool isPlayAnimation;

	public void RetainAsset(Object asset)
	{
		if (asset != (Object)null && !assetCache.Contains(asset))
		{
			assetCache.Add(asset);
		}
	}

	public void ReleaseAsset(Object asset)
	{
		if (asset != (Object)null && assetCache.Contains(asset))
		{
			assetCache.Remove(asset);
		}
	}

	public void ReleaseAllAssets()
	{
		assetCache.Clear();
	}

	public void OpenView(GameObject parent, BaseViewLogic parentLogic)
	{
		if (Object.op_Implicit((Object)(object)parent) && Object.op_Implicit((Object)(object)parentLogic))
		{
			isView = false;
			if (!parentLogic.subViewLogicList.Contains(this))
			{
				parentLogic.subViewLogicList.Add(this);
				parentViewLogic = parentLogic;
			}
		}
		else
		{
			isView = true;
			ViewManager.GetInstance().PushViewLogic(this);
		}
		EventManager.GetInstance().AddEventListener<int, object>(EventManager.EVENT_SET_LOCALIZATION, SetLocalization);
		OnEnter();
		SetLocalization();
	}

	public void SetViewVisible(bool vb)
	{
		((Component)this).gameObject.SetActive(vb);
		isHide = !vb;
	}

	public void ShowView(string viewName)
	{
		ViewManager.GetInstance().ShowView(viewName);
	}

	public void SetParentLogic(BaseViewLogic parentLogic)
	{
		if ((Object)(object)parentLogic != (Object)null && !parentLogic.subViewLogicList.Contains(this))
		{
			parentLogic.subViewLogicList.Add(this);
			parentViewLogic = parentLogic;
		}
	}

	public void CloseViewAin()
	{
		CloseViewAin(null, false);
	}

	public void CloseViewAin(UnityAction onComplete = null, bool isFromParent = false)
	{
		if ((Object)(object)this == (Object)null)
		{
			return;
		}
		isShowingView = false;
		bool flag = false;
		if (this is IBaseViewAnimation && this is IBaseViewAnimation baseViewAnimation)
		{
			if (IsShowCloseMask)
			{
				CommonMaskViewLogic.Show(0.2f);
			}
			OnBeforeHide();
			isPlayAnimation = true;
			if ((Object)(object)((Component)this).gameObject != (Object)null)
			{
				EventManager.GetInstance().DispatchEvent(EventManager.EVENT_CLOSE_VIEW_ANI_START, ((Object)((Component)this).gameObject).name);
			}
			baseViewAnimation.ExitAnimation(() =>
			{
				OnAfterHide();
				CloseView(isFromParent);
				if (onComplete != null)
				{
					onComplete.Invoke();
				}
				ViewManager.GetInstance().SetTouchMaskVisible(isVisible: false);
			});
			flag = true;
		}
		if (!flag)
		{
			OnAfterHide();
			CloseView(isFromParent);
		}
	}

	public virtual void CloseView(bool isFromParent = false)
	{
		if ((Object)(object)this == (Object)null)
		{
			return;
		}
		isShowingView = false;
		if (isHideDontDestroy)
		{
			((Component)this).gameObject.SetSelfActive(active: false);
			ViewManager.GetInstance().PopViewLogic(this);
			ViewManager.GetInstance().ResetSceneType(IsShowCloseMask);
			OnHideView();
			EventManager.GetInstance().DispatchEvent(EventManager.EVENT_CLOSE_VIEW, ((Object)((Component)this).gameObject).name);
			EventManager.GetInstance().DispatchEvent(EventManager.EVENT_CLOSE_VIEW_WITH_INDEX, ShowIndex);
			return;
		}
		ViewManager.Instance.LastCloseViewData = viewData;
		ViewManager.Instance.LastCloseViewName = ((Object)this).name.RemoveString("漨C4끯p䈷䞁");
		ViewManager.Instance.LastCloseViewLayer = ((Object)((Component)this).transform.parent).name;
		isPlayAnimation = true;
		EventManager.GetInstance().RemoveEventListener<int, object>(EventManager.EVENT_SET_LOCALIZATION, SetLocalization);
		OnExit();
		for (int num = subViewLogicList.Count - 1; num >= 0; num--)
		{
			BaseViewLogic baseViewLogic = subViewLogicList[num];
			if ((Object)(object)baseViewLogic != (Object)null)
			{
				baseViewLogic.CloseView(isFromParent: true);
			}
		}
		subViewLogicList.Clear();
		if ((Object)(object)parentViewLogic != (Object)null && !isFromParent)
		{
			parentViewLogic.subViewLogicList.Remove(this);
		}
		Clear();
		ReleaseAllAssets();
		bool flag = isView;
		if (isView)
		{
			ViewManager.GetInstance().PopViewLogic(this);
		}
		if (resLoader != null)
		{
			resLoader.Dispose();
		}
		ViewManager.GetInstance().ResetSceneType(IsShowCloseMask);
		EventManager.GetInstance().DispatchEvent(EventManager.EVENT_CLOSE_VIEW, ((Object)((Component)this).gameObject).name);
		EventManager.GetInstance().DispatchEvent(EventManager.EVENT_CLOSE_VIEW_WITH_INDEX, ShowIndex);
		TimeManager.Instance.ClearSchedule(this);
		Object.Destroy((Object)(object)((Component)this).gameObject);
		if (flag)
		{
			ViewManager.GetInstance().ReleaseUnusedAssets();
			AudioManager.GetInstance().Clear();
		}
		if (isAutoPopup)
		{
			ViewManager.GetInstance().SetOpenViewIdx(-1);
			Singleton<PopupManager>.Instance.ShowPopups();
		}
	}

	public void AutoPopsup_open()
	{
		if (!isAutoPopup)
		{
			isAutoPopup = true;
			ViewManager.GetInstance().SetOpenViewIdx(1);
		}
	}

	public void AutoPopsup_close()
	{
		if (isAutoPopup)
		{
			isAutoPopup = false;
			ViewManager.GetInstance().SetOpenViewIdx(-1);
		}
	}

	public virtual void OnEnter()
	{
	}

	public virtual void OnReset(object data)
	{
	}

	public virtual void OnExit()
	{
		ViewManager.Instance.LastCloseViewData = viewData;
		ViewManager.Instance.LastCloseViewName = ((Object)this).name.RemoveString("漨C4끯p䈷䞁");
		ViewManager.Instance.LastCloseViewLayer = ((Object)((Component)this).transform.parent).name;
	}

	public virtual void OnHideView()
	{
	}

	public virtual void SetLocalization(int tag = 0, object data = null)
	{
	}

	public virtual bool OnBackPressed()
	{
		if (isShieldBackPressed)
		{
			return true;
		}
		if (isBackPressed)
		{
			if (!isPlayAnimation)
			{
				CloseViewAin();
			}
			return true;
		}
		return false;
	}

	public virtual void OnAutoClose()
	{
	}

	[AsyncStateMachine(typeof(_003COnPreloadAssetsAsync_003Ed__36))]
	public virtual UniTask OnPreloadAssetsAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		_003COnPreloadAssetsAsync_003Ed__36 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003COnPreloadAssetsAsync_003Ed__36>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public SpriteAtlas LoadSpriteAtlas(string path)
	{
		SpriteAtlas val = this.Load<SpriteAtlas>(path);
		RetainAsset((Object)(object)val);
		return val;
	}

	public Texture LoadTexture(string path)
	{
		Texture val = this.Load<Texture>(path);
		RetainAsset((Object)(object)val);
		return val;
	}

	public Sprite GetSpriteFromCache(string spriteName)
	{
		//IL_002d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0033: Expected Obj, but got Unknown
		foreach (Object item in assetCache)
		{
			if (item is Sprite && item.name == spriteName)
			{
				return (Sprite)item;
			}
		}
		return null;
	}

	public Sprite SetImageSprite(Image img, string spriteName, string atlasPath, bool useCache = true)
	{
		if ((Object)(object)img.sprite != (Object)null && ((Object)img.sprite).name == spriteName)
		{
			return img.sprite;
		}
		if (useCache)
		{
			Sprite spriteFromCache = GetSpriteFromCache(spriteName);
			if ((Object)(object)spriteFromCache != (Object)null)
			{
				img.sprite = null;
				img.sprite = spriteFromCache;
				((Graphic)img).SetNativeSize();
				return spriteFromCache;
			}
		}
		Sprite sprite = LoadSpriteAtlas(atlasPath).GetSprite(spriteName);
		RetainAsset((Object)(object)sprite);
		RetainAsset((Object)(object)sprite.texture);
		((Object)sprite).name = spriteName;
		img.sprite = null;
		img.sprite = sprite;
		((Graphic)img).SetNativeSize();
		return sprite;
	}

	public Sprite SetImageTexture(Image img, string spritePath, bool useCache = true)
	{
		//IL_005b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_0087: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Expected Obj, but got Unknown
		if ((Object)(object)img.sprite != (Object)null && ((Object)img.sprite).name == spritePath)
		{
			return img.sprite;
		}
		if (useCache)
		{
			Sprite spriteFromCache = GetSpriteFromCache(spritePath);
			if ((Object)(object)spriteFromCache != (Object)null)
			{
				img.sprite = null;
				img.sprite = spriteFromCache;
				((Graphic)img).SetNativeSize();
				return spriteFromCache;
			}
		}
		Texture val = LoadTexture(spritePath);
		Sprite val2 = Sprite.Create((Texture2D)val, new Rect(0f, 0f, (float)val.width, (float)val.height), new Vector2(0.5f, 0.5f));
		((Object)val2).name = spritePath;
		img.sprite = null;
		img.sprite = val2;
		((Graphic)img).SetNativeSize();
		RetainAsset((Object)(object)val2);
		return val2;
	}

	public Sprite SetSpriteRenderSprite(SpriteRenderer spRender, string spriteName, string atlasPath, bool useCache = true)
	{
		if ((Object)(object)spRender.sprite != (Object)null && ((Object)spRender.sprite).name == spriteName)
		{
			return spRender.sprite;
		}
		if (useCache)
		{
			Sprite spriteFromCache = GetSpriteFromCache(spriteName);
			if ((Object)(object)spriteFromCache != (Object)null)
			{
				spRender.sprite = null;
				spRender.sprite = spriteFromCache;
				return spriteFromCache;
			}
		}
		Sprite sprite = LoadSpriteAtlas(atlasPath).GetSprite(spriteName);
		if ((Object)(object)sprite == (Object)null)
		{
			Log.E("쉊끕疭湋湒=Ú叙숚뀚璪攛摆;Ö叕朗Ò赴" + spriteName);
		}
		RetainAsset((Object)(object)sprite);
		RetainAsset((Object)(object)sprite.texture);
		((Object)sprite).name = spriteName;
		spRender.sprite = null;
		spRender.sprite = sprite;
		return sprite;
	}

	public Sprite SetSpriteRenderTexture(SpriteRenderer spRender, string spritePath, bool useCache = true)
	{
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		//IL_0072: Unknown result type (might be due to invalid IL or missing references)
		//IL_0081: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Expected Obj, but got Unknown
		if ((Object)(object)spRender.sprite != (Object)null && ((Object)spRender.sprite).name == spritePath)
		{
			return spRender.sprite;
		}
		if (useCache)
		{
			Sprite spriteFromCache = GetSpriteFromCache(spritePath);
			if ((Object)(object)spriteFromCache != (Object)null)
			{
				spRender.sprite = null;
				spRender.sprite = spriteFromCache;
				return spriteFromCache;
			}
		}
		Texture val = LoadTexture(spritePath);
		Sprite val2 = Sprite.Create((Texture2D)val, new Rect(0f, 0f, (float)val.width, (float)val.height), new Vector2(0.5f, 0.5f));
		((Object)val2).name = spritePath;
		spRender.sprite = null;
		spRender.sprite = val2;
		RetainAsset((Object)(object)val2);
		return val2;
	}

	public T Load<T>(string name) where T : Object
	{
		if (resLoader == null)
		{
			resLoader = new ResLoader();
			DisposableExtensions.AddTo<ResLoader>(resLoader, (Component)(object)this);
		}
		if (name.Contains("뺳"))
		{
			name = Path.GetFileNameWithoutExtension(name);
		}
		return resLoader.LoadSync<T>(name);
	}

	public AnimationCurve UserCurve(string name)
	{
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Expected Obj, but got Unknown
		Transform val = ((Component)this).transform.Find(name);
		if ((Object)(object)val != (Object)null && (Object)(object)((Component)val).GetComponent<UserCurve>() != (Object)null)
		{
			return ((Component)val).GetComponent<UserCurve>().curve;
		}
		GameObject val2 = this.Load<GameObject>(name);
		if ((Object)(object)val2 != (Object)null)
		{
			GameObject val3 = Object.Instantiate<GameObject>(val2);
			UserCurve component = val3.GetComponent<UserCurve>();
			if ((Object)(object)component != (Object)null && component.curve != null)
			{
				val3.transform.SetParent(((Component)this).transform, false);
				((Object)val3).name = name;
				return component.curve;
			}
			Object.DestroyImmediate((Object)(object)val3);
		}
		return new AnimationCurve();
	}

	public virtual void OnBeforeShow()
	{
	}

	public virtual void OnAfterShow()
	{
	}

	public virtual void OnBeforeHide()
	{
	}

	public virtual void OnAfterHide()
	{
	}

	public virtual void OnViewDestory()
	{
	}

	protected GameObject CloneGamemObject(GameObject mode, Transform parent, Vector3 pos)
	{
		//IL_000d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0019: Unknown result type (might be due to invalid IL or missing references)
		GameObject val = Object.Instantiate<GameObject>(mode, parent);
		val.transform.localPosition = pos;
		val.transform.localScale = Vector3.one;
		return val;
	}

	private void OnDestroy()
	{
		isPlayAnimation = false;
		OnViewDestory();
	}

	private void DelayCall(float delay, Action call)
	{
		TimeManager.GetInstance().Schedule(this, (float arg0) =>
		{
			call.InvokeGracefully();
		}, delay, 1);
	}
}
