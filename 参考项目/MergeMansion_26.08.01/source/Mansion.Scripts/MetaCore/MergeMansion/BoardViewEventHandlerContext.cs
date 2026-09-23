using GameEvents;
using Metacore.MergeMansion.GameEvents;

namespace Metacore.MergeMansion
{
	public class BoardViewEventHandlerContext
	{
		public CoreSupportEventManager CoreSupportEventManager { get; }

		public ProgressionEventManager ProgressionEventManager { get; }

		public CollectibleBoardEventManager CollectibleBoardEventManager { get; }

		public MysteryMachineEventManager MysteryMachineEventManager { get; }

		public CoreSupportingEventsEventManager CoreSupportingEventsEventManager { get; }

		public LeaderboardEventManager LeaderboardEventManager { get; }

		public ShortLeaderboardEventManager ShortLeaderboardEventManager { get; }

		public BoultonLeagueEventManager BoultonLeagueEventManager { get; }

		public GarageCleanupEventManager GarageCleanupEventManager { get; }

		public BoardViewEventHandlerContext(CoreSupportEventManager coreSupportEventManager, ProgressionEventManager progressionEventManager, CollectibleBoardEventManager collectibleBoardEventManager, MysteryMachineEventManager mysteryMachineEventManager, CoreSupportingEventsEventManager coreSupportingEventsEventManager, LeaderboardEventManager leaderboardEventManager, ShortLeaderboardEventManager shortLeaderboardEventManager, BoultonLeagueEventManager boultonLeagueEventManager, GarageCleanupEventManager garageCleanupEventManager)
		{
		}
	}
}
