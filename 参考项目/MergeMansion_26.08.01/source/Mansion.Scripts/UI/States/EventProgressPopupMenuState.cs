using Analytics;
using Audio;
using GameLogic;
using GameLogic.Player;
using Merge;
using TimedMergeBoards;

namespace UI.States
{
	public class EventProgressPopupMenuState : IMenuState
	{
		public readonly bool HasEventEnded;

		public readonly TimedMergeBoard EventInfo;

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IPlayer Player { get; }

		public IActionsExecutor Executor { get; }

		public EventProgressPopupMenuState(MergeBoardId mergeBoardId, TimedMergeBoard eventInfo, bool hasEventEnded, IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, IPlayer player, IActionsExecutor executor)
		{
		}

		public static EventProgressPopupMenuState OnGoing(MergeBoardId mergeBoardId, TimedMergeBoard eventInfo, IMenuController menuController, IAnalyticsCollector collector, IAudioPlayer audioPlayer, IPlayer player, IActionsExecutor executor)
		{
			return null;
		}

		public static EventProgressPopupMenuState Ended(MergeBoardId mergeBoardId, TimedMergeBoard eventInfo, IMenuController menuController, IAnalyticsCollector collector, IAudioPlayer audioPlayer, IPlayer player, IActionsExecutor executor)
		{
			return null;
		}
	}
}
