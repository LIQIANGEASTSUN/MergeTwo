using Analytics;
using Audio;
using Code.GameLogic.GameEvents;
using Dialogue;
using GameLogic.Player;
using Merge;
using Navigation;

namespace UI
{
	public class AutoMergeEventStartMenuState : CoreSupportEventStartMenuState
	{
		public IBoardController BoardController { get; }

		public INavigationController NavigationController { get; }

		public override string MenuTag => null;

		public AutoMergeEventStartMenuState(IMenuController menuController, IAnalyticsCollector analytics, IAudioPlayer audio, PlayerModel playerModel, PlayerClientContext playerContext, IDialogueController dialogueController, CoreSupportEventModel eventModel, CoreSupportEventPrefabs prefabs, IBoardController boardController, INavigationController navigationController)
			: base(null, null, null, null, null, null, null, null)
		{
		}
	}
}
