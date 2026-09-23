using Code.GameLogic.Config;
using GameEvents;
using GameLogic;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Activables;
using Navigation;
using UI;
using UnityEngine;

namespace Metacore.MergeMansion
{
	public static class BoardEventCardFactory
	{
		public static Option<IBoardEventCard> CreateEventCard(PlayerModel playerModel, IMenuController menuController, ProgressionEventManager progressionEventManager, BoultonLeagueEventManager boultonLeagueEventManager, IPrioritizedEvent info, Transform parent, BoardViewEventHandler eventHandler, INavigationController navigationController, IActionsExecutor actionsExecutor)
		{
			return default(Option<IBoardEventCard>);
		}

		public static Option<IBoardEventCard> CreateEventCard<T>(PlayerModel playerModel, IMenuController menuController, IPrioritizedEvent info, Option<IBoardEventCardProvider<T>> boardEventCardProviderOption, Option<T> eventModelOption, Transform parent, BoardViewEventHandler eventHandler, INavigationController navigationController, IActionsExecutor actionsExecutor) where T : MetaActivableState
		{
			return default(Option<IBoardEventCard>);
		}
	}
}
