using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;

namespace Utility
{
	public static class AreaUtilities
	{
		[CompilerGenerated]
		public sealed class _003C_003Ec__DisplayClass13_0
		{
			public IPlayer player;

			public IAreaInfo area;

			public HashSet<HotspotId> visited;

			public Func<IHotspotDefinition, bool> _003C_003E9__1;

			public Func<IHotspotDefinition, bool> _003C_003E9__2;

			public bool _003CGetHotspotsInDepthFirstOrder_003Eb__1(IHotspotDefinition parent)
			{
				return false;
			}

			public bool _003CGetHotspotsInDepthFirstOrder_003Eb__2(IHotspotDefinition parent)
			{
				return false;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetHotspotsInDepthFirstOrder_003Ed__13 : IEnumerable<(IHotspotDefinition, int)>, IEnumerable, IEnumerator<(IHotspotDefinition, int)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IHotspotDefinition hotspot, int depth) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IAreaInfo area;

			public IAreaInfo _003C_003E3__area;

			[NonSerialized]
			public _003C_003Ec__DisplayClass13_0 _003C_003E8__1;

			[NonSerialized]
			public List<IHotspotDefinition>.Enumerator _003C_003E7__wrap1;

			[NonSerialized]
			public IHotspotDefinition _003CrootHotspot_003E5__3;

			[NonSerialized]
			public IEnumerator<(IHotspotDefinition, int)> _003C_003E7__wrap3;

			(IHotspotDefinition, int) IEnumerator<(IHotspotDefinition, int)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((IHotspotDefinition, int));
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
			public _003CGetHotspotsInDepthFirstOrder_003Ed__13(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<(IHotspotDefinition, int)> IEnumerable<(IHotspotDefinition, int)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static string GetUnlocksAfterAreaDescription(IAreaInfo unlocksAfterArea)
		{
			return null;
		}

		public static string GetUnlocksAfterGlobalRequirementDescription(string locId, LocationTravelInfo locationTravelInfo)
		{
			return null;
		}

		public static string GetUnlocksAfterItemDiscoveryDescription(IItemDefinition itemToDiscover)
		{
			return null;
		}

		public static string GetUnlocksAfterItemFoundDescription(IItemDefinition itemToFind)
		{
			return null;
		}

		public static string GetUnlocksAfterItemUsedDescription(IItemDefinition itemToFind)
		{
			return null;
		}

		public static string GetUnlocksItemInstructionDescription(IPlayer player, IItemDefinition itemToFind, IMergeChainDefinition mergeChainDefinition)
		{
			return null;
		}

		public static string GetUnlocksItemInAreaInstructionDescription(IPlayer player, IAreaInfo areaToDiscover, IItemDefinition itemToFind, IMergeChainDefinition mergeChainDefinition)
		{
			return null;
		}

		public static bool TryGetFirstUnmatchedUnlockRequirement(PlayerModel player, IAreaInfo area, out PlayerRequirement result)
		{
			result = null;
			return false;
		}

		public static bool IsAreaAvailableForUnlock(PlayerModel player, IAreaInfo area)
		{
			return false;
		}

		public static bool HasUncompletedGlobalRequirement(PlayerModel player, IAreaInfo area)
		{
			return false;
		}

		public static bool TryGetFirstMatchedUnlockRequirement(PlayerModel player, IAreaInfo area, out PlayerRequirement result)
		{
			result = null;
			return false;
		}

		public static bool TryGetFirstItemUnlockRequirement(IAreaInfo area, out PlayerRequirement result)
		{
			result = null;
			return false;
		}

		public static bool HasAllAreaHotspotsBeenCompleted(IPlayer player, IAreaInfo area)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetHotspotsInDepthFirstOrder_003Ed__13))]
		public static IEnumerable<(IHotspotDefinition, int)> GetHotspotsInDepthFirstOrder(IPlayer player, IAreaInfo area)
		{
			return null;
		}

		public static IHotspotDefinition GetFirstVisibleHotspotInArea(IPlayer player, IAreaInfo area, bool allowIllustrationParent = true)
		{
			return null;
		}

		public static IHotspotDefinition GetVisibleHotspotInOrder(IPlayer player, IAreaInfo area)
		{
			return null;
		}

		public static IHotspotDefinition GetFirstVisibleAndUnlockedHotspotInArea(IPlayer player, IAreaInfo area)
		{
			return null;
		}

		public static IHotspotDefinition GetClosestHotspotInArea(HotspotId id, IPlayer player, IAreaInfo area, IHotspotPositionQuery hotspotPositionQuery)
		{
			return null;
		}

		public static bool IsAreaTeased(IPlayer player, IAreaInfo area)
		{
			return false;
		}

		public static bool ShouldDisplayAreaCompletable(PlayerModel player, IAreaInfo area)
		{
			return false;
		}

		public static bool ShouldDisplayAreaCompletable(PlayerModel player, IEnumerable<IAreaInfo> areas)
		{
			return false;
		}

		public static AreaId GetAreaIdForIcon(IAreaInfo areaInfo, IPlayer player)
		{
			return null;
		}

		public static bool IsComingSoonArea(IAreaInfo areaInfo, IPlayer player)
		{
			return false;
		}

		public static bool HasTimeAndHotspotRequirementsFilled(IAreaInfo areaInfo, IPlayer player)
		{
			return false;
		}

		public static AreaInfo GetAreaInfo(IPlayer player, AreaId areaId)
		{
			return null;
		}
	}
}
