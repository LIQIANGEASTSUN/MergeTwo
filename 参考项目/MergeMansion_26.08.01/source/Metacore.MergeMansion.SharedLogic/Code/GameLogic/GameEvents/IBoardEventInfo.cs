using System.Collections.Generic;
using Code.GameLogic.IAP;
using GameLogic.Decorations;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Activables;

namespace Code.GameLogic.GameEvents
{
	public interface IBoardEventInfo : IHasRequirement
	{
		IStringId BoardEventId { get; }

		PlayerRequirement UnlockRequirement { get; }

		DecorationInfo ActiveDecoration { get; }

		MergeBoardId MergeBoardId { get; }

		ExtendableEventParams ExtendableEventParams { get; }

		MetaRef<InAppProductInfo> ExtensionInAppProduct { get; }

		MetaDuration ExtensionPurchaseSafetyMargin { get; }

		MetaActivableParams ActivableParams { get; }

		string Description { get; }

		List<IPlayerReward> GetExtensionRewards(IPlayer player);

		bool CanExtendLatestActivation(PlayerModel player);

		bool IsEndingSoon(PlayerModel player);

		bool TryGetVisibleStatus(PlayerModel player, out MetaActivableVisibleStatus visibleStatus);

		bool UsesLeaderboard()
		{
			return false;
		}
	}
}
