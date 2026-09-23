using System;
using Analytics;
using Audio;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;

namespace UI.States
{
	public class InventorySinkConfirmationDialogState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IBoardController BoardController { get; }

		public IMergeMansionGameConfig Config => null;

		public PlayerModel Player => null;

		public string TitleLocalizationId { get; }

		public string QuestionLocalizationId { get; }

		public string ConfirmationButtonTextLocalizationId { get; }

		public string CancellationButtonTextLocalizationId { get; }

		public Action<IHotspotDefinition> ActionToConfirm { get; }

		public Action ActionToCancel { get; }

		public (IItemDefinition Item, int Requirement)[] SinkItems { get; }

		public IHotspotDefinition Hotspot { get; }

		public InventorySinkConfirmationDialogState(IMenuController menuController, IBoardController boardController, IAnalyticsCollector analytics, string titleLocalizationId, string questionLocalizationId, string confirmationButtonTextLocalizationId, string cancellationButtonTextLocalizationId, Action<IHotspotDefinition> actionToConfirm, Action actionToCancel, IHotspotDefinition hotspot, (IItemDefinition Item, int Requirement)[] sinkItems, IAudioPlayer audio)
		{
		}
	}
}
