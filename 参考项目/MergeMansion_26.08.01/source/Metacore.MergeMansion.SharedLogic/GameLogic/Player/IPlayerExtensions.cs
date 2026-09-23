using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic;
using Code.GameLogic.GameEvents;
using GameLogic.Config.Types;
using GameLogic.Player.Events;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;

namespace GameLogic.Player
{
	public static class IPlayerExtensions
	{
		[CompilerGenerated]
		public sealed class _003CGetActiveExtraInventories_003Ed__4 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IBoardInventory _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerProgressionEventsModel _003CplayerProgressionEvents_003E5__2;

			[NonSerialized]
			public MetacoreTime _003CcurrentTime_003E5__3;

			[NonSerialized]
			public IEnumerator<ProgressionEventId> _003C_003E7__wrap3;

			IBoardInventory IEnumerator<IBoardInventory>.Current
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
			public _003CGetActiveExtraInventories_003Ed__4(int _003C_003E1__state)
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
			IEnumerator<IBoardInventory> IEnumerable<IBoardInventory>.GetEnumerator()
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
		public sealed class _003CGetAllActiveBoardEvents_003Ed__1 : IEnumerable<IBoardEventModel>, IEnumerable, IEnumerator<IBoardEventModel>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IBoardEventModel _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap1;

			[NonSerialized]
			public IEnumerator<LeaderboardEventModel> _003C_003E7__wrap2;

			[NonSerialized]
			public IEnumerator<MysteryMachineEventModel> _003C_003E7__wrap3;

			[NonSerialized]
			public IEnumerator<ShortLeaderboardEventModel> _003C_003E7__wrap4;

			IBoardEventModel IEnumerator<IBoardEventModel>.Current
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
			public _003CGetAllActiveBoardEvents_003Ed__1(int _003C_003E1__state)
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
			IEnumerator<IBoardEventModel> IEnumerable<IBoardEventModel>.GetEnumerator()
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
		public sealed class _003CGetAllActiveEventsWithPoints_003Ed__3 : IEnumerable<IPointsEvent>, IEnumerable, IEnumerator<IPointsEvent>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IPointsEvent _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap1;

			[NonSerialized]
			public IEnumerator<LeaderboardEventModel> _003C_003E7__wrap2;

			[NonSerialized]
			public IEnumerator<BoultonLeagueEventModel> _003C_003E7__wrap3;

			[NonSerialized]
			public IEnumerator<ShortLeaderboardEventModel> _003C_003E7__wrap4;

			IPointsEvent IEnumerator<IPointsEvent>.Current
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
			public _003CGetAllActiveEventsWithPoints_003Ed__3(int _003C_003E1__state)
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
			IEnumerator<IPointsEvent> IEnumerable<IPointsEvent>.GetEnumerator()
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
		public sealed class _003CGetAllEnergyAttachmentEvents_003Ed__2 : IEnumerable<IEnergyAttachmentEvent>, IEnumerable, IEnumerator<IEnergyAttachmentEvent>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IEnergyAttachmentEvent _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<SoloMilestoneEventModel> _003C_003E7__wrap1;

			IEnergyAttachmentEvent IEnumerator<IEnergyAttachmentEvent>.Current
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
			public _003CGetAllEnergyAttachmentEvents_003Ed__2(int _003C_003E1__state)
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
			IEnumerator<IEnergyAttachmentEvent> IEnumerable<IEnergyAttachmentEvent>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static Option<IBoardEventInfo> GetBoardEventById(this IPlayer player, string id)
		{
			return default(Option<IBoardEventInfo>);
		}

		[IteratorStateMachine(typeof(_003CGetAllActiveBoardEvents_003Ed__1))]
		public static IEnumerable<IBoardEventModel> GetAllActiveBoardEvents(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAllEnergyAttachmentEvents_003Ed__2))]
		public static IEnumerable<IEnergyAttachmentEvent> GetAllEnergyAttachmentEvents(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetAllActiveEventsWithPoints_003Ed__3))]
		public static IEnumerable<IPointsEvent> GetAllActiveEventsWithPoints(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetActiveExtraInventories_003Ed__4))]
		public static IEnumerable<IBoardInventory> GetActiveExtraInventories(this IPlayer player)
		{
			return null;
		}

		public static (IBoardInventory, MetaTime?) GetRentableInventories(this IPlayer player)
		{
			return default((IBoardInventory, MetaTime?));
		}

		public static void RemoveEnergyModes(this IPlayer player)
		{
		}

		public static void RemoveEnergyModesForEnergyType(this IPlayer player, EnergyType energyType)
		{
		}

		public static void RemoveEnergyModesByFilter(this IPlayer player, Func<MergeBoardId, bool> boardFilter)
		{
		}

		public static ProgressionEventInfo GetRandomActiveProgressionEvent(this IPlayer player, MetacoreTime currentTime)
		{
			return null;
		}
	}
}
