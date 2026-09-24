using System;
using System.Collections.Generic;
using EL;
using UnityEngine;

namespace FAT
{
	public class UIBase : MonoBehaviour
	{
		[SerializeField]
		public bool _enableBackgroundBlur;

		[NonSerialized]
		public RectTransform _rootRect;

		[NonSerialized]
		public Animator RootAnimator;

		[NonSerialized]
		public UIWindowState _uiState;

		[NonSerialized]
		public List<UIModuleBase> _childrenList;

		public static readonly Vector2 ResumeAnchorPos;

		public static readonly Vector2 PauseAnchorPos;

		[NonSerialized]
		public bool _isAutoDestroy;

		[NonSerialized]
		public CanvasGroup _canvasGroup;

		[NonSerialized]
		public GameObject _lockEventObject;

		[NonSerialized]
		public Action _cacheOpenAnimCb;

		[NonSerialized]
		public Action _cacheCloseAnimCb;

		[NonSerialized]
		public Action _cachePauseAnimCb;

		[NonSerialized]
		public Action _cacheResumeAnimCb;

		public UILayer BelongLayer { get; set; }

		public UIResource ResConfig { get; set; }

		public bool EnableBackgroundBlur => false;

		public CommonFunction Com { get; set; }

		public virtual void OnCreate()
		{
		}

		public virtual void OnParse(params object[] items)
		{
		}

		public virtual void OnPreOpen()
		{
		}

		public virtual void OnAddListener()
		{
		}

		public virtual void OnPostOpen()
		{
		}

		public virtual void OnRefresh()
		{
		}

		public virtual void OnVisible(bool isVisible)
		{
		}

		public virtual void OnPreClose()
		{
		}

		public virtual void OnRemoveListener()
		{
		}

		public virtual void OnPostClose()
		{
		}

		public virtual void OnPause()
		{
		}

		public virtual void OnResume()
		{
		}

		public bool IsOpen()
		{
			return false;
		}

		public bool IsOpening()
		{
			return false;
		}

		public bool IsShow()
		{
			return false;
		}

		public bool IsPause()
		{
			return false;
		}

		public bool IsClosed()
		{
			return false;
		}

		public bool CheckIsState(UIWindowState state)
		{
			return false;
		}

		public void OnLoaded()
		{
		}

		public T AddModule<T>(T module) where T : UIModuleBase
		{
			return null;
		}

		public void RemoveModule(UIModuleBase module)
		{
		}

		public void ClearModule()
		{
		}

		public void PreOpen(params object[] items)
		{
		}

		public void PostOpen()
		{
		}

		public void Refresh(params object[] items)
		{
		}

		public void PreClose()
		{
		}

		public void PostClose()
		{
		}

		public void Pause()
		{
		}

		public void Resume()
		{
		}

		public void Close()
		{
		}

		public void MarkAutoDestroy(bool isAuto)
		{
		}

		public bool IsVisible()
		{
			return false;
		}

		public void Visible(bool v_)
		{
		}

		public void _Prepare()
		{
		}

		public void _SetUIState(UIWindowState state)
		{
		}

		public void LockEvent()
		{
		}

		public void UnlockEvent()
		{
		}

		public bool IsLocked()
		{
			return false;
		}

		public bool CheckAnimValid()
		{
			return false;
		}

		public void PlayOpenAnim(Action finishCb = null)
		{
		}

		public void PlayCloseAnim(Action finishCb = null)
		{
		}

		public void PlayPauseAnim(Action finishCb = null)
		{
		}

		public void PlayResumeAnim(Action finishCb = null)
		{
		}

		public void OnPlayOpenAnimFinish()
		{
		}

		public void OnPlayCloseAnimFinish()
		{
		}

		public void OnPlayPauseAnimFinish()
		{
		}

		public void OnPlayResumeAnimFinish()
		{
		}

		public void _ClearAnimCb()
		{
		}
	}
}
