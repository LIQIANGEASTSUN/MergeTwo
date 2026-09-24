using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using GameLogic.Area;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Hotspots;
using GameLogic.Hotspots.CardStack;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.MergeTasks
{
	public static class MergeTaskExtensions
	{
		public class HotspotTaskComparer : IComparer<HotspotTask>
		{
			public static readonly IComparer<HotspotTask> Instance;

			public int Compare(HotspotTask x, HotspotTask y)
			{
				return 0;
			}
		}

		[CompilerGenerated]
		public sealed class _003CAutoMergeFeatureTasks_003Ed__1 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CAutoMergeFeatureTasks_003Ed__1(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CBoultonLeagueEventTasks_003Ed__5 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public IEnumerator<BoultonLeagueEventModel> _003C_003E7__wrap2;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CBoultonLeagueEventTasks_003Ed__5(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CCollectibleBoardEventProgressTasks_003Ed__2 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public IEnumerator<CollectibleBoardEventModel> _003C_003E7__wrap2;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CCollectibleBoardEventProgressTasks_003Ed__2(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CComingSoonTasks_003Ed__18 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CComingSoonTasks_003Ed__18(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CCoreSupportEventProgressTasks_003Ed__0 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public IEnumerator<CoreSupportEventModel> _003C_003E7__wrap2;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CCoreSupportEventProgressTasks_003Ed__0(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CEnergyModeEventProgressTasks_003Ed__6 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public PlayerEnergyModeEventsModel _003CenergyModeEventsModel_003E5__3;

			[NonSerialized]
			public IEnumerator<EnergyModeEventInfo> _003C_003E7__wrap3;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CEnergyModeEventProgressTasks_003Ed__6(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CGarageCleanupTasks_003Ed__8 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<GarageCleanupEventModel> _003C_003E7__wrap1;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CGarageCleanupTasks_003Ed__8(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CLeaderboardEventProgressTasks_003Ed__3 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public PlayerLeaderboardEventsModel _003CleaderboardEventsModel_003E5__3;

			[NonSerialized]
			public IEnumerator<LeaderboardEventInfo> _003C_003E7__wrap3;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CLeaderboardEventProgressTasks_003Ed__3(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CMergeTasksConditionalNotInPriorityOrder_003Ed__10 : IEnumerable<HotspotMergeTask>, IEnumerable, IEnumerator<HotspotMergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public HotspotMergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public Func<HotspotDefinition, bool> checkCondition;

			public Func<HotspotDefinition, bool> _003C_003E3__checkCondition;

			[NonSerialized]
			public IReadOnlyDictionary<HotspotId, HotspotDefinition> _003ChotspotDefinitions_003E5__2;

			[NonSerialized]
			public OrderedSet<HotspotId>.Enumerator _003C_003E7__wrap2;

			HotspotMergeTask IEnumerator<HotspotMergeTask>.Current
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
			public _003CMergeTasksConditionalNotInPriorityOrder_003Ed__10(int _003C_003E1__state)
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
			IEnumerator<HotspotMergeTask> IEnumerable<HotspotMergeTask>.GetEnumerator()
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
		public sealed class _003CMysteryMachineEventProgressTasks_003Ed__4 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public PlayerMysteryMachineEventsModel _003CmysteryMachineEventsModel_003E5__3;

			[NonSerialized]
			public IEnumerator<MysteryMachineEventInfo> _003C_003E7__wrap3;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CMysteryMachineEventProgressTasks_003Ed__4(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CPlayerVisibleTasks_003Ed__20 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<MergeTask> _003C_003E7__wrap1;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CPlayerVisibleTasks_003Ed__20(int _003C_003E1__state)
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

			public void _003C_003Em__Finally8()
			{
			}

			public void _003C_003Em__Finally9()
			{
			}

			public void _003C_003Em__Finally10()
			{
			}

			public void _003C_003Em__Finally11()
			{
			}

			public void _003C_003Em__Finally12()
			{
			}

			public void _003C_003Em__Finally13()
			{
			}

			public void _003C_003Em__Finally14()
			{
			}

			public void _003C_003Em__Finally15()
			{
			}

			public void _003C_003Em__Finally16()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CProgressionEventTasks_003Ed__9 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IEnumerator<ProgressionEventModel> _003C_003E7__wrap1;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CProgressionEventTasks_003Ed__9(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CShortLeaderboardEventProgressTasks_003Ed__7 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public PlayerModel _003CplayerModel_003E5__2;

			[NonSerialized]
			public PlayerShortLeaderboardEventsModel _003CshortLeaderboardEventsModel_003E5__3;

			[NonSerialized]
			public IEnumerator<ShortLeaderboardEventInfo> _003C_003E7__wrap3;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CShortLeaderboardEventProgressTasks_003Ed__7(int _003C_003E1__state)
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
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CUndiscoveredAreasTasks_003Ed__16 : IEnumerable<MergeTask>, IEnumerable, IEnumerator<MergeTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public MergeTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			MergeTask IEnumerator<MergeTask>.Current
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
			public _003CUndiscoveredAreasTasks_003Ed__16(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<MergeTask> IEnumerable<MergeTask>.GetEnumerator()
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
		public sealed class _003CUnlockAreaTasksNotInPriorityOrder_003Ed__14 : IEnumerable<UnlockAreaTask>, IEnumerable, IEnumerator<UnlockAreaTask>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public UnlockAreaTask _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IReadOnlyDictionary<HotspotId, HotspotDefinition> _003ChotspotDefinitions_003E5__2;

			[NonSerialized]
			public OrderedSet<HotspotId>.Enumerator _003C_003E7__wrap2;

			UnlockAreaTask IEnumerator<UnlockAreaTask>.Current
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
			public _003CUnlockAreaTasksNotInPriorityOrder_003Ed__14(int _003C_003E1__state)
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
			IEnumerator<UnlockAreaTask> IEnumerable<UnlockAreaTask>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[IteratorStateMachine(typeof(_003CCoreSupportEventProgressTasks_003Ed__0))]
		public static IEnumerable<MergeTask> CoreSupportEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CAutoMergeFeatureTasks_003Ed__1))]
		public static IEnumerable<MergeTask> AutoMergeFeatureTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CCollectibleBoardEventProgressTasks_003Ed__2))]
		public static IEnumerable<MergeTask> CollectibleBoardEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CLeaderboardEventProgressTasks_003Ed__3))]
		public static IEnumerable<MergeTask> LeaderboardEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CMysteryMachineEventProgressTasks_003Ed__4))]
		public static IEnumerable<MergeTask> MysteryMachineEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CBoultonLeagueEventTasks_003Ed__5))]
		public static IEnumerable<MergeTask> BoultonLeagueEventTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CEnergyModeEventProgressTasks_003Ed__6))]
		public static IEnumerable<MergeTask> EnergyModeEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CShortLeaderboardEventProgressTasks_003Ed__7))]
		public static IEnumerable<MergeTask> ShortLeaderboardEventProgressTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGarageCleanupTasks_003Ed__8))]
		public static IEnumerable<MergeTask> GarageCleanupTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CProgressionEventTasks_003Ed__9))]
		public static IEnumerable<MergeTask> ProgressionEventTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CMergeTasksConditionalNotInPriorityOrder_003Ed__10))]
		public static IEnumerable<HotspotMergeTask> MergeTasksConditionalNotInPriorityOrder(this IPlayer player, Func<HotspotDefinition, bool> checkCondition)
		{
			return null;
		}

		public static IEnumerable<MergeTask> MergeTasksConditional(this IPlayer player, Func<HotspotDefinition, bool> checkCondition)
		{
			return null;
		}

		public static IEnumerable<MergeTask> NonStoryEventMergeTasks(this IPlayer player)
		{
			return null;
		}

		public static IEnumerable<MergeTask> StoryEventMergeTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CUnlockAreaTasksNotInPriorityOrder_003Ed__14))]
		public static IEnumerable<UnlockAreaTask> UnlockAreaTasksNotInPriorityOrder(this IPlayer player)
		{
			return null;
		}

		public static IEnumerable<MergeTask> UnlockAreaTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CUndiscoveredAreasTasks_003Ed__16))]
		public static IEnumerable<MergeTask> UndiscoveredAreasTasks(this IPlayer player)
		{
			return null;
		}

		public static bool ShouldDisplayComingSoonTask(IPlayer player)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CComingSoonTasks_003Ed__18))]
		public static IEnumerable<MergeTask> ComingSoonTasks(this IPlayer player)
		{
			return null;
		}

		public static IEnumerable<MergeTask> RepeatableTasks(this IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CPlayerVisibleTasks_003Ed__20))]
		public static IEnumerable<MergeTask> PlayerVisibleTasks(this IPlayer player)
		{
			return null;
		}

		public static HotspotMergeTask GetStackMiniGameTask(this IPlayer player, CardStackId stackId)
		{
			return null;
		}

		public static bool RequiresItem(this MergeTask task, ItemDefinition itemDefinition)
		{
			return false;
		}

		public static bool RequiresAnyItem(this MergeTask task, IEnumerable<IItemDefinition> mergeChainItems, IPlayer player)
		{
			return false;
		}

		public static IEnumerable<IEnumerable<IItemDefinition>> RequiresItems(this MergeTask task, IPlayer player)
		{
			return null;
		}

		public static bool ContentsAreVisible(this MergeTask task)
		{
			return false;
		}

		public static F64 GemValue(this MergeTask task, IPlayer player)
		{
			return default(F64);
		}

		public static HotspotMergeTask GetLastCompletedMergeGoalTaskForArea(this IPlayer player, AreaInfo areaInfo)
		{
			return null;
		}

		public static bool IsItemRequired(ItemDefinition item, IEnumerable<PlayerItemRequirement> requirements)
		{
			return false;
		}

		public static bool IsItemRequired(int item, IEnumerable<PlayerItemRequirement> requirements)
		{
			return false;
		}

		public static HotspotDefinition GetLastCompletedMergeGoalHotspotForArea(this IPlayer player, AreaInfo areaInfo)
		{
			return null;
		}

		public static IOrderedEnumerable<T> InPriorityOrder<T>(this IEnumerable<T> tasks) where T : HotspotTask
		{
			return null;
		}
	}
}
