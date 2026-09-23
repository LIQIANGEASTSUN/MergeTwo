using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Analytics;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using Merge;
using Metaplay.Core;

namespace GameLogic.Hotspots
{
	public static class HotspotUtilities
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass16_0
		{
			public int discoveredItem;

			public IPlayer player;

			public Func<PlayerRequirement, bool> _003C_003E9__0;

			public Func<PlayerRequirement, bool> _003C_003E9__1;

			public bool _003CGetHotspotsToOpenAfterItemDiscovery_003Eb__0(PlayerRequirement requirement)
			{
				return false;
			}

			public bool _003CGetHotspotsToOpenAfterItemDiscovery_003Eb__1(PlayerRequirement requirement)
			{
				return false;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetHotspotsToOpenAfterItemDiscovery_003Ed__16 : IEnumerable<HotspotId>, IEnumerable, IEnumerator<HotspotId>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public HotspotId _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public int discoveredItem;

			public int _003C_003E3__discoveredItem;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public _003C_003Ec__DisplayClass16_0 _003C_003E8__1;

			[NonSerialized]
			public OrderedSet<HotspotId> _003CvisibleHotspots_003E5__2;

			[NonSerialized]
			public OrderedSet<HotspotId> _003CcompletedHotspots_003E5__3;

			[NonSerialized]
			public IEnumerator<AreaInfo> _003C_003E7__wrap3;

			HotspotId IEnumerator<HotspotId>.Current
			{
				[DebuggerHidden]
				get
				{
					return default(HotspotId);
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
			public _003CGetHotspotsToOpenAfterItemDiscovery_003Ed__16(int _003C_003E1__state)
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
			IEnumerator<HotspotId> IEnumerable<HotspotId>.GetEnumerator()
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
		public sealed class _003CGetNewTeasedAreaUnlockingHotspots_003Ed__15 : IEnumerable<IHotspotDefinition>, IEnumerable, IEnumerator<IHotspotDefinition>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IHotspotDefinition _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public HotspotsToOpenAfterCompletionFlags flags;

			public HotspotsToOpenAfterCompletionFlags _003C_003E3__flags;

			[NonSerialized]
			public ICollection<HotspotId> completedHotspots;

			public ICollection<HotspotId> _003C_003E3__completedHotspots;

			[NonSerialized]
			public ICollection<HotspotId> visibleHotspots;

			public ICollection<HotspotId> _003C_003E3__visibleHotspots;

			[NonSerialized]
			public IEnumerator<AreaInfo> _003C_003E7__wrap1;

			IHotspotDefinition IEnumerator<IHotspotDefinition>.Current
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
			public _003CGetNewTeasedAreaUnlockingHotspots_003Ed__15(int _003C_003E1__state)
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
			IEnumerator<IHotspotDefinition> IEnumerable<IHotspotDefinition>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static readonly IReadOnlyCollection<HotspotId> InitialHotspots;

		public static readonly IReadOnlyDictionary<MergeBoardId, HotspotId> EventHotspotIdsByMergeBoardId;

		public static (IEnumerable<IItemDefinition>[], int[]) DefinitionsRequirementPair(this IHotspotDefinition hotspotDefinition, IMergeMansionGameConfig gameConfig)
		{
			return default((IEnumerable<IItemDefinition>[], int[]));
		}

		public static (IEnumerable<int>[], int[]) RequirementPair(this IHotspotDefinition hotspotDefinition)
		{
			return default((IEnumerable<int>[], int[]));
		}

		public static int GetItemRequirementPairs(List<PlayerRequirement> requirements, Span<IEnumerable<int>> resultItems, Span<int> resultAmounts)
		{
			return 0;
		}

		public static bool IsPlaceholderHotspotId(HotspotId hotspotId)
		{
			return false;
		}

		public static IEnumerable<IHotspotDefinition> GetHotspotsToOpenAfterCompletion(IPlayer player, IHotspotDefinition completedHotspot, HotspotsToOpenAfterCompletionFlags flags = HotspotsToOpenAfterCompletionFlags.None)
		{
			return null;
		}

		public static IEnumerable<IHotspotDefinition> GetHotspotsToOpenAfterCompletion(IPlayer player, IHotspotDefinition completedHotspot, HashSet<HotspotId> completedHotspots, HashSet<HotspotId> visibleHotspots, HotspotsToOpenAfterCompletionFlags flags = HotspotsToOpenAfterCompletionFlags.None)
		{
			return null;
		}

		public static IEnumerable<IHotspotDefinition> GetHotspotsToOpenAfterCompletion(IPlayer player, IHotspotDefinition completedHotspot, OrderedSet<HotspotId> completedHotspots, OrderedSet<HotspotId> visibleHotspots, HotspotsToOpenAfterCompletionFlags flags = HotspotsToOpenAfterCompletionFlags.None)
		{
			return null;
		}

		public static bool IsHotspotInLocation(IPlayer player, IHotspotDefinition completedHotspot, HotspotId hotspotId)
		{
			return false;
		}

		public static bool IsIllustrationHotspotAvailable(IPlayer player, HotspotId hotspotId)
		{
			return false;
		}

		public static bool IsIllustrationHotspotAvailable(IPlayer player, IHotspotDefinition hotspot)
		{
			return false;
		}

		public static IEnumerable<IHotspotDefinition> GetIllustrationChildTasks(IPlayer player, IEnumerable<IHotspotDefinition> visibleHotspots)
		{
			return null;
		}

		public static bool TryGetIllustrationRequirement(IHotspotDefinition illustrationTask, out CompleteIllustrationRequirement IllustrationRequirement)
		{
			IllustrationRequirement = null;
			return false;
		}

		public static bool AreIllustrationChildrenTasksCompletableAtCurrentTime(IPlayer player, IHotspotDefinition illustrationParentHotspot)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetNewTeasedAreaUnlockingHotspots_003Ed__15))]
		public static IEnumerable<IHotspotDefinition> GetNewTeasedAreaUnlockingHotspots(IPlayer player, ICollection<HotspotId> completedHotspots, ICollection<HotspotId> visibleHotspots, HotspotsToOpenAfterCompletionFlags flags)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetHotspotsToOpenAfterItemDiscovery_003Ed__16))]
		public static IEnumerable<HotspotId> GetHotspotsToOpenAfterItemDiscovery(IPlayer player, int discoveredItem)
		{
			return null;
		}

		public static bool TryGetMergeBoardForHotspot(HotspotId hotspot, out MergeBoardId mergeBoard)
		{
			mergeBoard = null;
			return false;
		}

		public static bool CanRewardBoultonLeaguePoints(this IHotspotDefinition hotspot)
		{
			return false;
		}

		public static bool TryGetBoultonLeaguePointRewardAmount(this IHotspotDefinition hotspot, IPlayer player, out int outAmount)
		{
			outAmount = default(int);
			return false;
		}

		public static bool TryGetVisibleHotspotOfInterestForBoultonLeagueEvent(IPlayer player, out IHotspotDefinition highestPriorityHotspot)
		{
			highestPriorityHotspot = null;
			return false;
		}

		public static IHotspotDefinition GetHighestPriorityHotspotForBoultonLeague(IHotspotDefinition highestPriorityHotspot, IHotspotDefinition newHotspot, IPlayer player)
		{
			return null;
		}

		public static bool HasVisibleHotspotOfInterestForBoultonLeagueEvent(IPlayer player)
		{
			return false;
		}

		public static bool IsHotSpotOfInterestForBoultonLeagueEvent(IPlayer player, HotspotId hotspotId, out HotspotDefinition outHotspot)
		{
			outHotspot = null;
			return false;
		}

		public static string GetAreaNameParameterForAnalytics(IHotspotDefinition hotspot, IPlayer player)
		{
			return null;
		}

		public static string GetMapSpotNameParameterForAnalytics(IHotspotDefinition hotspot)
		{
			return null;
		}

		public static string GetMultistepGroupNameParameterForAnalytics(IHotspotDefinition hotspot)
		{
			return null;
		}

		public static AnalyticsPlayerBonusReward[] GetBonusRewardForAnalytics(IHotspotDefinition hotspot, IPlayer player)
		{
			return null;
		}

		public static string GetCharacterIdParameterForAnalytics(IHotspotDefinition hotspot)
		{
			return null;
		}

		public static string GetCompletionOriginParameterForAnalytics(OriginScreen originScreen)
		{
			return null;
		}

		public static bool PassesRequirements(IPlayer player, List<PlayerRequirement> requirements, HotspotsToOpenAfterCompletionFlags flags)
		{
			return false;
		}

		public static bool CanBeMadeVisible(this IHotspotDefinition hotspotDefinition, IPlayer player, bool logUnlockRequirementNotMet = true)
		{
			return false;
		}

		public static bool IsHotspotUnlockedAndAvailable(this IHotspotDefinition hotspotDefinition, IPlayer player)
		{
			return false;
		}

		public static PlayerCurrentTimeRequirement GetNotMetTimeRequirement(IHotspotDefinition hotspot, IPlayer player)
		{
			return null;
		}

		public static List<IItemDefinition> GetAvailableCardStackItems(IHotspotDefinition hotspot, IPlayer player)
		{
			return null;
		}

		public static bool CanBeCompleted(HotspotCompletionAttempt attempt)
		{
			return false;
		}

		public static List<HotspotDefinition> GetHotspotsWithUnlockRequirements(IPlayer player, Type filterRequirement = null)
		{
			return null;
		}

		public static bool IncludesTriggerCutsceneAction(this IHotspotDefinition hotspotDefinition, List<IDirectorAction> actions)
		{
			return false;
		}
	}
}
