using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents.CardCollectionSupportingEvent;
using Code.GameLogic.GameEvents.DailyScoop;
using Code.GameLogic.GameEvents.SoloMilestone;
using GameLogic.Config;
using GameLogic.Config.DecorationShop;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.MiniEvents;
using GameLogic.MixABooster;
using GameLogic.Player;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.ProgressivePacks;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public static class GameEventExtensions
	{
		[CompilerGenerated]
		public sealed class _003CGetOfferPlacementSupportingCoreSupportingEvents_003Ed__9 : IEnumerable<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)>, IEnumerable, IEnumerator<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public IEnumerator<ICoreSupportingEventInfo> _003C_003E7__wrap2;

			(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting) IEnumerator<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting));
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
			public _003CGetOfferPlacementSupportingCoreSupportingEvents_003Ed__9(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)> IEnumerable<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetProgressionEventItems_003Ed__66 : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public int _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public ProgressionEventInfo eventInfo;

			public ProgressionEventInfo _003C_003E3__eventInfo;

			[NonSerialized]
			public IMergeMansionGameConfig gameConfig;

			public IMergeMansionGameConfig _003C_003E3__gameConfig;

			[NonSerialized]
			public int _003CbaseEventItem_003E5__2;

			[NonSerialized]
			public ItemDefinition _003CeventItemDefinition_003E5__3;

			[NonSerialized]
			public IEnumerator<IItemDefinition> _003C_003E7__wrap3;

			int IEnumerator<int>.Current
			{
				[DebuggerHidden]
				get
				{
					return 0;
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
			public _003CGetProgressionEventItems_003Ed__66(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<int> IEnumerable<int>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetProgressionEventsRelatedToCollectedItem_003Ed__68 : IEnumerable<ProgressionEventModel>, IEnumerable, IEnumerator<ProgressionEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ProgressionEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IItemDefinition collectedItem;

			public IItemDefinition _003C_003E3__collectedItem;

			[NonSerialized]
			public IEnumerator<ProgressionEventInfo> _003C_003E7__wrap1;

			ProgressionEventModel IEnumerator<ProgressionEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetProgressionEventsRelatedToCollectedItem_003Ed__68(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ProgressionEventModel> IEnumerable<ProgressionEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetRelatedCollectibleBoardEventsBasedOnBoardId_003Ed__70 : IEnumerable<CollectibleBoardEventModel>, IEnumerable, IEnumerator<CollectibleBoardEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public CollectibleBoardEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public MergeBoardId boardId;

			public MergeBoardId _003C_003E3__boardId;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap1;

			CollectibleBoardEventModel IEnumerator<CollectibleBoardEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetRelatedCollectibleBoardEventsBasedOnBoardId_003Ed__70(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<CollectibleBoardEventModel> IEnumerable<CollectibleBoardEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetRelatedMysteryMachineEventsBasedOnBoardId_003Ed__73 : IEnumerable<MysteryMachineEventModel>, IEnumerable, IEnumerator<MysteryMachineEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MysteryMachineEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public MergeBoardId boardId;

			public MergeBoardId _003C_003E3__boardId;

			[NonSerialized]
			public IEnumerator<MysteryMachineEventModel> _003C_003E7__wrap1;

			MysteryMachineEventModel IEnumerator<MysteryMachineEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetRelatedMysteryMachineEventsBasedOnBoardId_003Ed__73(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MysteryMachineEventModel> IEnumerable<MysteryMachineEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetRelatedShortLeaderboardEventsBasedOnBoardId_003Ed__71 : IEnumerable<ShortLeaderboardEventModel>, IEnumerable, IEnumerator<ShortLeaderboardEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ShortLeaderboardEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public MergeBoardId boardId;

			public MergeBoardId _003C_003E3__boardId;

			[NonSerialized]
			public IEnumerator<ShortLeaderboardEventModel> _003C_003E7__wrap1;

			ShortLeaderboardEventModel IEnumerator<ShortLeaderboardEventModel>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetRelatedShortLeaderboardEventsBasedOnBoardId_003Ed__71(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ShortLeaderboardEventModel> IEnumerable<ShortLeaderboardEventModel>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleCardCollectionSupportEvents_003Ed__32 : IEnumerable<CardCollectionSupportingEventInfo>, IEnumerable, IEnumerator<CardCollectionSupportingEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public CardCollectionSupportingEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<CardCollectionSupportingEventModel> _003C_003E7__wrap1;

			CardCollectionSupportingEventInfo IEnumerator<CardCollectionSupportingEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleCardCollectionSupportEvents_003Ed__32(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<CardCollectionSupportingEventInfo> IEnumerable<CardCollectionSupportingEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleCoreSupportEvents_003Ed__34 : IEnumerable<CoreSupportEventInfo>, IEnumerable, IEnumerator<CoreSupportEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public CoreSupportEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<CoreSupportEventInfo> _003C_003E7__wrap1;

			CoreSupportEventInfo IEnumerator<CoreSupportEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleCoreSupportEvents_003Ed__34(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<CoreSupportEventInfo> IEnumerable<CoreSupportEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleCoreSupportingEvents_003Ed__11 : IEnumerable<ICoreSupportingEventInfo>, IEnumerable, IEnumerator<ICoreSupportingEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ICoreSupportingEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<SoloMilestoneEventInfo> _003C_003E7__wrap1;

			[NonSerialized]
			public IEnumerator<DailyScoopEventInfo> _003C_003E7__wrap2;

			[NonSerialized]
			public IEnumerator<ProgressionPackEventInfo> _003C_003E7__wrap3;

			[NonSerialized]
			public IEnumerator<MixABoosterEventInfo> _003C_003E7__wrap4;

			ICoreSupportingEventInfo IEnumerator<ICoreSupportingEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleCoreSupportingEvents_003Ed__11(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ICoreSupportingEventInfo> IEnumerable<ICoreSupportingEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleDecorationShops_003Ed__4 : IEnumerable<DecorationShopInfo>, IEnumerable, IEnumerator<DecorationShopInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public DecorationShopInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<DecorationShopInfo> _003C_003E7__wrap1;

			DecorationShopInfo IEnumerator<DecorationShopInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleDecorationShops_003Ed__4(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<DecorationShopInfo> IEnumerable<DecorationShopInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleEnergyModeEvents_003Ed__26 : IEnumerable<EnergyModeEventInfo>, IEnumerable, IEnumerator<EnergyModeEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public EnergyModeEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<EnergyModeEventInfo> _003C_003E7__wrap1;

			EnergyModeEventInfo IEnumerator<EnergyModeEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleEnergyModeEvents_003Ed__26(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<EnergyModeEventInfo> IEnumerable<EnergyModeEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleLeaderboardEvents_003Ed__3 : IEnumerable<LeaderboardEventInfo>, IEnumerable, IEnumerator<LeaderboardEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public LeaderboardEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public PlayerLeaderboardEventsModel _003CleaderboardEventStates_003E5__2;

			[NonSerialized]
			public MetaDictionary<LeaderboardEventId, LeaderboardEventModel>.ValueCollection.ValueEnumerator _003C_003E7__wrap2;

			LeaderboardEventInfo IEnumerator<LeaderboardEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleLeaderboardEvents_003Ed__3(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<LeaderboardEventInfo> IEnumerable<LeaderboardEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleMiniEvents_003Ed__24 : IEnumerable<MiniEventInfo>, IEnumerable, IEnumerator<MiniEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MiniEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<MiniEventInfo> _003C_003E7__wrap1;

			MiniEventInfo IEnumerator<MiniEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleMiniEvents_003Ed__24(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MiniEventInfo> IEnumerable<MiniEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleMysteryMachineEvents_003Ed__6 : IEnumerable<MysteryMachineEventInfo>, IEnumerable, IEnumerator<MysteryMachineEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MysteryMachineEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<MysteryMachineEventInfo> _003C_003E7__wrap1;

			MysteryMachineEventInfo IEnumerator<MysteryMachineEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleMysteryMachineEvents_003Ed__6(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MysteryMachineEventInfo> IEnumerable<MysteryMachineEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleProgressionEvents_003Ed__2 : IEnumerable<ProgressionEventInfo>, IEnumerable, IEnumerator<ProgressionEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ProgressionEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public MetaDictionary<ProgressionEventId, ProgressionEventModel>.ValueCollection.ValueEnumerator _003C_003E7__wrap1;

			ProgressionEventInfo IEnumerator<ProgressionEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleProgressionEvents_003Ed__2(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ProgressionEventInfo> IEnumerable<ProgressionEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleShortLeaderboardEvents_003Ed__31 : IEnumerable<ShortLeaderboardEventInfo>, IEnumerable, IEnumerator<ShortLeaderboardEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ShortLeaderboardEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public MetaDictionary<ShortLeaderboardEventId, ShortLeaderboardEventModel>.ValueCollection.ValueEnumerator _003C_003E7__wrap1;

			ShortLeaderboardEventInfo IEnumerator<ShortLeaderboardEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleShortLeaderboardEvents_003Ed__31(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ShortLeaderboardEventInfo> IEnumerable<ShortLeaderboardEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetVisibleSoloMilestoneEvents_003Ed__7 : IEnumerable<SoloMilestoneEventInfo>, IEnumerable, IEnumerator<SoloMilestoneEventInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public SoloMilestoneEventInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public PlayerModel playerModel;

			public PlayerModel _003C_003E3__playerModel;

			[NonSerialized]
			public IEnumerator<SoloMilestoneEventInfo> _003C_003E7__wrap1;

			SoloMilestoneEventInfo IEnumerator<SoloMilestoneEventInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
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
			public _003CGetVisibleSoloMilestoneEvents_003Ed__7(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<SoloMilestoneEventInfo> IEnumerable<SoloMilestoneEventInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static bool IsEventVisible<TId, TInfo, TModel>(this PlayerModel playerModel, IMetaActivableSet<TId, TInfo, TModel> metaActivableSet, TInfo eventInfo) where TInfo : class, IMetaActivableInfo<TId>, IGameConfigData<TId>, IVisibilityStrategy<TId, TInfo, TModel> where TModel : MetaActivableState<TId, TInfo>
		{
			return false;
		}

		public static bool IsEventVisibleFromModel<TId, TInfo, TModel>(this PlayerModel playerModel, IMetaActivableSet<TId, TInfo, TModel> metaActivableSet, TModel eventModel) where TInfo : class, IMetaActivableInfo<TId>, IGameConfigData<TId>, IVisibilityStrategy<TId, TInfo, TModel> where TModel : MetaActivableState<TId, TInfo>
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleProgressionEvents_003Ed__2))]
		public static IEnumerable<ProgressionEventInfo> GetVisibleProgressionEvents(this PlayerModel playerModel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleLeaderboardEvents_003Ed__3))]
		public static IEnumerable<LeaderboardEventInfo> GetVisibleLeaderboardEvents(this PlayerModel playerModel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleDecorationShops_003Ed__4))]
		public static IEnumerable<DecorationShopInfo> GetVisibleDecorationShops(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsDecorationShopVisible(this PlayerModel playerModel, DecorationShopInfo decorationShop)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleMysteryMachineEvents_003Ed__6))]
		public static IEnumerable<MysteryMachineEventInfo> GetVisibleMysteryMachineEvents(this PlayerModel playerModel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleSoloMilestoneEvents_003Ed__7))]
		[Obsolete]
		public static IEnumerable<SoloMilestoneEventInfo> GetVisibleSoloMilestoneEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsSoloMilestoneEventVisible(this PlayerModel playerModel, SoloMilestoneEventInfo eventInfo)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetOfferPlacementSupportingCoreSupportingEvents_003Ed__9))]
		public static IEnumerable<(ICoreSupportingEventModel, ICoreSupportingEventInfo, IOfferPlacementSupporting)> GetOfferPlacementSupportingCoreSupportingEvents(this IPlayer player)
		{
			return null;
		}

		public static ICoreSupportingEventModel GetCoreSupportEventModel(this PlayerModel player, ICoreSupportingEventInfo cseInfo)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleCoreSupportingEvents_003Ed__11))]
		public static IEnumerable<ICoreSupportingEventInfo> GetVisibleCoreSupportingEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this SoloMilestoneEventInfo soloMilestoneEvent, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this ProgressionPackEventInfo progressionPackEvent, PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsInReview(this ProgressionPackEventInfo progressionPackEvent, PlayerModel playerModel)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this DailyScoopEventInfo dailyScoopEvent, PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsEndingSoon(this MixABoosterEventInfo mixABoosterEventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this MixABoosterEventInfo mixABoosterEventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static void GetVisibleBoultonLeagueEvents(this PlayerModel playerModel, List<BoultonLeagueEventId> outEventIds)
		{
		}

		public static void GetVisibleBoultonLeagueEvents(this PlayerModel playerModel, ref List<BoultonLeagueEventInfo> outEventInfos)
		{
		}

		public static bool IsBoultonLeagueEventVisible(this PlayerModel playerModel, BoultonLeagueEventInfo eventInfo, out BoultonLeagueEventModel outEventModel, out MetaActivableVisibleStatus outVisibleStatus)
		{
			outEventModel = null;
			outVisibleStatus = null;
			return false;
		}

		public static bool IsBoultonLeagueEventVisibleNonAlloc(this PlayerModel playerModel, BoultonLeagueEventModel eventModel)
		{
			return false;
		}

		public static bool TryGetState(this BoultonLeagueEventInfo eventInfo, PlayerModel playerModel, out BoultonLeagueEventModel outEventModel)
		{
			outEventModel = null;
			return false;
		}

		public static bool TryGetVisibleStatus(this BoultonLeagueEventInfo eventInfo, PlayerModel playerModel, out MetaActivableVisibleStatus outVisibleStatus)
		{
			outVisibleStatus = null;
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleMiniEvents_003Ed__24))]
		public static IEnumerable<MiniEventInfo> GetVisibleMiniEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsMiniEventVisible(this PlayerModel playerModel, MiniEventInfo eventInfo)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleEnergyModeEvents_003Ed__26))]
		public static IEnumerable<EnergyModeEventInfo> GetVisibleEnergyModeEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsEnergyModeEventVisible(this PlayerModel playerModel, EnergyModeEventInfo energyModeEvent)
		{
			return false;
		}

		public static Option<TemporaryCardCollectionEventModel> GetVisibleTemporaryCardCollectionEvent(this IPlayer playerModel)
		{
			return default(Option<TemporaryCardCollectionEventModel>);
		}

		public static Option<TemporaryCardCollectionEventModel> GetVisibleTemporaryCardCollectionEvent(this PlayerModel playerModel)
		{
			return default(Option<TemporaryCardCollectionEventModel>);
		}

		public static Option<TemporaryCardCollectionEventModel> GetVisibleTemporaryCardCollectionEvent(this PlayerModel player, TemporaryCardCollectionEventId eventId)
		{
			return default(Option<TemporaryCardCollectionEventModel>);
		}

		[IteratorStateMachine(typeof(_003CGetVisibleShortLeaderboardEvents_003Ed__31))]
		public static IEnumerable<ShortLeaderboardEventInfo> GetVisibleShortLeaderboardEvents(this PlayerModel playerModel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleCardCollectionSupportEvents_003Ed__32))]
		public static IEnumerable<CardCollectionSupportingEventInfo> GetVisibleCardCollectionSupportEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool TryGetActiveCardCollectionSupportingEvent(this IPlayer playerModel, out CardCollectionSupportingEventModel activeCardCollectionSupportingEvent)
		{
			activeCardCollectionSupportingEvent = null;
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetVisibleCoreSupportEvents_003Ed__34))]
		public static IEnumerable<CoreSupportEventInfo> GetVisibleCoreSupportEvents(this PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsCoreSupportEventVisible(this PlayerModel playerModel, CoreSupportEventInfo eventInfo)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this GarageCleanupEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this ProgressionEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this CollectibleBoardEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this LeaderboardEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this DecorationShopInfo decorationShop, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this MysteryMachineEventInfo mysteryMachine, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this MiniEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this EnergyModeEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(this ShortLeaderboardEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static bool TryGetActivationStartOrEnd(this BoultonLeagueEventInfo eventInfo, PlayerModel playerModel, out MetaTime outTime)
		{
			outTime = default(MetaTime);
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd<TId, TInfo, TModel>(MetaActivableSet<TId, TInfo, TModel> set, TInfo info, PlayerModel playerModel) where TInfo : IMetaActivableInfo<TId> where TModel : MetaActivableState
		{
			return null;
		}

		public static MetaTime? GetActivationStartOrEnd(MetaActivableVisibleStatus visibleStatus)
		{
			return null;
		}

		public static bool IsEndingSoon(this GarageCleanupEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInPreview(this GarageCleanupEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this ProgressionEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInReview(this ProgressionEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInPreview(this CollectibleBoardEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this CollectibleBoardEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this LeaderboardEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this MysteryMachineEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this MiniEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this DecorationShopInfo decorationShop, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this BoultonLeagueEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this EnergyModeEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this ShortLeaderboardEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInPreview<TId, TInfo, TActivableState>(this MetaActivableSet<TId, TInfo, TActivableState> set, TInfo info, PlayerModel playerModel) where TInfo : IMetaActivableInfo<TId> where TActivableState : MetaActivableState
		{
			return false;
		}

		public static bool IsEndingSoon<TId, TInfo, TActivableState>(this MetaActivableSet<TId, TInfo, TActivableState> set, TInfo info, PlayerModel playerModel) where TInfo : IMetaActivableInfo<TId> where TActivableState : MetaActivableState
		{
			return false;
		}

		public static bool IsInReview<TId, TInfo, TActivableState>(this MetaActivableSet<TId, TInfo, TActivableState> set, TInfo info, PlayerModel playerModel) where TInfo : IMetaActivableInfo<TId> where TActivableState : MetaActivableState
		{
			return false;
		}

		public static bool IsInVisibleStatus<TId, TInfo, TActivableState, TVisibleStatus>(this MetaActivableSet<TId, TInfo, TActivableState> set, TInfo info, PlayerModel playerModel) where TInfo : IMetaActivableInfo<TId> where TActivableState : MetaActivableState
		{
			return false;
		}

		public static IEnumerable<int> GetProgressionEventItems(this ProgressionEventInfo eventInfo, IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetProgressionEventItems_003Ed__66))]
		public static IEnumerable<int> GetProgressionEventItems(this ProgressionEventInfo eventInfo, IMergeMansionGameConfig gameConfig)
		{
			return null;
		}

		public static IItemDefinition GetProgressionEventItem(this IPlayer player, ProgressionEventModel eventModel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetProgressionEventsRelatedToCollectedItem_003Ed__68))]
		public static IEnumerable<ProgressionEventModel> GetProgressionEventsRelatedToCollectedItem(this IPlayer player, IItemDefinition collectedItem)
		{
			return null;
		}

		public static bool IsItemPartOfEventItemChain(IItemDefinition collectedItem, ProgressionEventInfo progressionEventInfo, IPlayer player)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetRelatedCollectibleBoardEventsBasedOnBoardId_003Ed__70))]
		public static IEnumerable<CollectibleBoardEventModel> GetRelatedCollectibleBoardEventsBasedOnBoardId(this IPlayer player, MergeBoardId boardId)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetRelatedShortLeaderboardEventsBasedOnBoardId_003Ed__71))]
		public static IEnumerable<ShortLeaderboardEventModel> GetRelatedShortLeaderboardEventsBasedOnBoardId(this IPlayer player, MergeBoardId boardId)
		{
			return null;
		}

		public static bool CanStartActivationBasedOnGroup<T, U>(this IEventSharedInfo groupedEvent, PlayerModel player, MetaDictionary<T, U>.ValueCollection activableStates) where T : IStringId where U : IGroupIdGetter
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetRelatedMysteryMachineEventsBasedOnBoardId_003Ed__73))]
		public static IEnumerable<MysteryMachineEventModel> GetRelatedMysteryMachineEventsBasedOnBoardId(this IPlayer player, MergeBoardId boardId)
		{
			return null;
		}

		public static bool PreventsStartActivation(MetaActivableState metaActivableState, PlayerModel player, bool isMatchingGroup)
		{
			return false;
		}

		public static bool IsEndingSoon(this TemporaryCardCollectionEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsInPreview(this TemporaryCardCollectionEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this TemporaryCardCollectionEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsEndingSoon(this CardCollectionSupportingEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this CardCollectionSupportingEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}

		public static bool IsInPreview(this CoreSupportEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static bool IsEndingSoon(this CoreSupportEventInfo eventInfo, PlayerModel playerModel)
		{
			return false;
		}

		public static MetaTime? GetActivationStartOrEnd(this CoreSupportEventInfo eventInfo, PlayerModel playerModel)
		{
			return null;
		}
	}
}
