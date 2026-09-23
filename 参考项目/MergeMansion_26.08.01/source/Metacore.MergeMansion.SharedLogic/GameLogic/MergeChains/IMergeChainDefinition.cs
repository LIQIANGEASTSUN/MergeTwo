using System.Collections.Generic;
using GameLogic.Codex;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;

namespace GameLogic.MergeChains
{
	public interface IMergeChainDefinition
	{
		MergeChainId ConfigKey { get; }

		IReadOnlyList<IMergeChainElement> PrimaryChain { get; }

		IReadOnlyList<IMergeChainElement> FallbackChain { get; }

		string CompletionSfx { get; }

		int? InitialLevel { get; }

		int? UnsellableUntilPlayerLevel { get; }

		int? ShowSellConfirmationUntilPlayerLevel { get; }

		string OverrideMergeChainSfx { get; }

		int Length { get; }

		int FallbackLength { get; }

		CodexCategoryInfo CodexCategory { get; }

		CodexDiscoveryRewardInfo DiscoveryReward { get; }

		IEnumerable<IItemDefinition> DefaultItems(IPlayer player);

		IEnumerable<IItemDefinition> DefaultItems(IMergeMansionGameConfig config);
	}
}
