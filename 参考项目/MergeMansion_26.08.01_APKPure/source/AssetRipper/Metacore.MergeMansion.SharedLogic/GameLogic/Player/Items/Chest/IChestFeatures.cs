using GameLogic.Config.Types;
using GameLogic.Fallbacks;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Items.Chest
{
	public interface IChestFeatures
	{
		bool IsChest { get; }

		MetacoreDuration OpenDuration { get; }

		int HowManyToRoll { get; }

		IItemProducer LootProducer { get; }

		string HintLocId { get; }

		Option<FallbackPlayerRewardId> FallbackChestIdOption { get; }

		Option<IPlayerReward> GetFallbackReward(IPlayer player);

		bool IsInstantlyOpenedChest();
	}
}
