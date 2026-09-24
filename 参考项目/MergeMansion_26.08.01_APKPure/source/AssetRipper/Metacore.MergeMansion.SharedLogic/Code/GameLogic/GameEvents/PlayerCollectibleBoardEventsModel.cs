using System;
using System.Collections.Generic;
using Code.GameLogic.Utility;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(8)]
	[MetaActivableSet("CollectibleBoardEvent", false)]
	public class PlayerCollectibleBoardEventsModel : ExtendableEventSet<CollectibleBoardEventId, CollectibleBoardEventInfo, CollectibleBoardEventModel>
	{
		public static readonly CollectibleBoardEventId GREAT_ESCAPE_EVENT_ID;

		public static readonly OfferPlacementId[] GREAT_ESCAPE_OFFER_IDS;

		[MetaMember(1, MetaMemberFlags.None)]
		public List<StaleCollectibleBoardEventExtensionPurchaseInfo> StaleExtensionPurchaseInfos;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime _nextEventStartTime;

		public override CollectibleBoardEventModel CreateActivableState(CollectibleBoardEventInfo info, IPlayerModelBase player)
		{
			return null;
		}

		public void RefreshState(PlayerModel player, PlayerEventsModelRefreshAction action)
		{
		}

		public void EnsureCorrectInactiveStates(IEnumerable<CollectibleBoardEventInfo> collectibleBoardEvents, PlayerModel player)
		{
		}

		public void EnsureCorrectInactiveState(CollectibleBoardEventId eventId, PlayerModel player)
		{
		}

		public bool TryGetCurrentFishingEvent(PlayerModel player, LuckyType luckyType, out CollectibleBoardEventId eventId)
		{
			eventId = null;
			return false;
		}

		public bool TryGetCurrentGemMiningEvent(PlayerModel player, out CollectibleBoardEventId eventId)
		{
			eventId = null;
			return false;
		}

		public Option<CollectibleBoardEventModel> GetCurrentDigEvent(PlayerModel player)
		{
			return default(Option<CollectibleBoardEventModel>);
		}

		public void TryDeleteGreatEscapeModel(PlayerModel player)
		{
		}
	}
}
