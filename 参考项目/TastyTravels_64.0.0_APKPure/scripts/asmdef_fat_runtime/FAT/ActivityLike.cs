using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using EL.Resource;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public abstract class ActivityLike : IAssetDependent
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003COpenResAsync_003Ed__89<T> : IAsyncStateMachine where T : UIBase
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<T> _003C_003Et__builder;

			public UIResource ui_;

			public ActivityLike acti_;

			[NonSerialized]
			public UniTask<T>.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		public bool Ineffective;

		public int dataIndex;

		public int phase;

		public long startTS;

		public long endTS;

		public static Action<IAssetDependent> WhenResReady;

		public ActivityLite Lite { get; set; }

		public (int, int, int) Info3 => default((int, int, int));

		public int Id => 0;

		public (int, int) Id2 => default((int, int));

		public EventType Type => default(EventType);

		public int Param => 0;

		public int From => 0;

		public int OpenCount => 0;

		public virtual bool Valid => false;

		public virtual bool BoardFlyCenterSoundEnabled => false;

		public virtual ActivityVisual Visual { get; }

		public virtual ActivityVisual AppendVisual { get; }

		public virtual VisualRes GuideRes { get; }

		public virtual bool EntryVisible => false;

		public virtual bool AppendEntryVisible => false;

		public virtual string EntryIcon => null;

		public virtual string AppendEntryIcon => null;

		public virtual int Priority => 0;

		public virtual int AppendPriority => 0;

		public long Countdown => 0L;

		public bool Active => false;

		public ActivityAsset Asset { get; }

		public override string ToString()
		{
			return null;
		}

		public virtual ActivityInstance SaveData()
		{
			return null;
		}

		public virtual void LoadData(ActivityInstance data_)
		{
		}

		public abstract void SaveSetup(ActivityInstance data_);

		public abstract void LoadSetup(ActivityInstance data_);

		[IDTag(1)]
		public virtual void AfterLoad(bool isFresh)
		{
		}

		[IDTag(0)]
		public virtual void AfterLoad(ActivityInstance data_)
		{
		}

		public virtual bool SetupPending()
		{
			return false;
		}

		public virtual bool ResPending()
		{
			return false;
		}

		public virtual void SetupFresh()
		{
		}

		public virtual void SetupClear()
		{
		}

		public void RefreshTS(long sTS_, long eTS_)
		{
		}

		public virtual (long, long) SetupTS(long sTS_, long eTS_)
		{
			return default((long, long));
		}

		public virtual void WhenActive(bool new_)
		{
		}

		public virtual void WhenEnd()
		{
		}

		public virtual void WakeLimbo()
		{
		}

		public virtual void WhenReset()
		{
		}

		public virtual bool WhenObserve(string e_)
		{
			return false;
		}

		public virtual void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public virtual void ResetPopup()
		{
		}

		public virtual bool BeforePopupActiveCheck(IScreenPopup popup_)
		{
			return false;
		}

		public abstract void Open();

		public virtual void OpenAppend()
		{
		}

		public virtual bool CheckClickAppend(ActivityVisual visual_)
		{
			return false;
		}

		[IDTag(1)]
		public void Open(in VisualPopup vi_)
		{
		}

		[IDTag(2)]
		public void Open(in VisualRes vi_)
		{
		}

		[IDTag(0)]
		public void Open(UIResAlt ui_)
		{
		}

		[IDTag(1)]
		public static void OpenRes(UIResAlt ui_)
		{
		}

		[IDTag(0)]
		public static void OpenRes(UIResource ui_, ActivityLike acti_)
		{
		}

		public UniTask<T> OpenAsync<T>(in VisualPopup vi_) where T : UIBase
		{
			return default(UniTask<T>);
		}

		public UniTask<T> OpenAsync<T>(in VisualRes vi_) where T : UIBase
		{
			return default(UniTask<T>);
		}

		public UniTask<T> OpenAsync<T>(UIResAlt ui_) where T : UIBase
		{
			return default(UniTask<T>);
		}

		public static UniTask<T> OpenResAsync<T>(UIResAlt ui_) where T : UIBase
		{
			return default(UniTask<T>);
		}

		[AsyncStateMachine(typeof(_003COpenResAsync_003Ed__89<>))]
		public static UniTask<T> OpenResAsync<T>(UIResource ui_, ActivityLike acti_) where T : UIBase
		{
			return default(UniTask<T>);
		}

		public virtual IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public ActivityLike()
		{
		}

		public string _003C_003EiFixBaseProxy_ToString()
		{
			return null;
		}
	}
}
