using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using FAT.Merge;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class MiniBoardMultiActivity : ActivityLike, IBoardEntry, IBoardActivityOutput, IActivityOrderHandler
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__38 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public MiniBoardMultiActivity _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<(string, AssetTag)> _003C_003E7__wrap1;

			(string, AssetTag) IEnumerator<(string, AssetTag)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, AssetTag));
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CResEnumerate_003Ed__38(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			public void _003C_003Em__Finally2()
			{
			}

			public void _003C_003Em__Finally3()
			{
			}

			public void _003C_003Em__Finally4()
			{
			}

			public void _003C_003Em__Finally5()
			{
			}

			public void _003C_003Em__Finally6()
			{
			}

			public void _003C_003Em__Finally7()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(string, AssetTag)> IEnumerable<(string, AssetTag)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public int UnlockMaxLevel;

		[NonSerialized]
		public bool _hasPop;

		public ActivityVisual StartTheme;

		public ActivityVisual BoardTheme;

		public ActivityVisual EndTheme;

		public ActivityVisual RewardTheme;

		public ActivityVisual NextTheme;

		public ActivityVisual HelpTheme;

		public ActivityVisual GetKeyTheme;

		public PopupMiniBoardMulti StartPopup;

		public PopupMiniBoardMulti EndPopup;

		public PopupActivity RewardPopup;

		public UIResAlt BoardResAlt;

		public UIResAlt RewardResAlt;

		public UIResAlt NextRoundResAlt;

		public UIResAlt HelpResAlt;

		public UIResAlt GetKeyResAlt;

		public EventMiniBoardMulti ConfD { get; set; }

		public int GroupId { get; set; }

		public MiniBoardMultiBonusHandler SpawnHandler { get; }

		public bool UIOpenState { get; set; }

		public override ActivityVisual Visual => null;

		public bool BoardEntryVisible => false;

		public BoardActivityOutputType OutputType { get; set; }

		public BoardActivityOutputMethod OutputMethod { get; set; }

		public void Setup(ActivityLite lite_, EventMiniBoardMulti confD_)
		{
		}

		public override void SetupFresh()
		{
		}

		public override void SaveSetup(ActivityInstance data_)
		{
		}

		public override void LoadSetup(ActivityInstance data_)
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__38))]
		public override IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		public override void WhenEnd()
		{
		}

		public override void SetupClear()
		{
		}

		public override void TryPopup(ScreenPopup popup_, PopupType state_)
		{
		}

		public override void Open()
		{
		}

		public void _RefreshPopupInfo()
		{
		}

		public string BoardEntryAsset()
		{
			return null;
		}

		public void RefreshOutputType()
		{
		}

		public void RefreshOutputMethod()
		{
		}

		public bool IsEnergyMethod()
		{
			return false;
		}

		bool IActivityOrderHandler.OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		bool IBoardActivityOutput.IsValidForOrder()
		{
			return false;
		}

		FlyType IBoardActivityOutput.GetFlyType()
		{
			return default(FlyType);
		}

		ReasonString IBoardActivityOutput.GetReasonString()
		{
			return null;
		}

		void IBoardActivityOutput.TrackOrderGetItem(int rewardId, int rewardCount, int payDiff)
		{
		}

		public ActivityVisual _003C_003EiFixBaseProxy_get_Visual()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_SetupFresh()
		{
		}

		public IEnumerable<(string, AssetTag)> _003C_003EiFixBaseProxy_ResEnumerate()
		{
			return null;
		}

		public void _003C_003EiFixBaseProxy_WhenEnd()
		{
		}

		public void _003C_003EiFixBaseProxy_SetupClear()
		{
		}

		public void _003C_003EiFixBaseProxy_TryPopup(ScreenPopup P0, PopupType P1)
		{
		}
	}
}
