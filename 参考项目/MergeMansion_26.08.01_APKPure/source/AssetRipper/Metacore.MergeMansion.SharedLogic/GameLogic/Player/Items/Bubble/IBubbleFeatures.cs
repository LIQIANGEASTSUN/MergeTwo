using System.Collections.Generic;
using GameLogic.Config.Types;

namespace GameLogic.Player.Items.Bubble
{
	public interface IBubbleFeatures
	{
		MetacoreDuration BubbleDuration { get; }

		Currencies OpenCurrency { get; }

		int OpenQuantity { get; }

		int SpawnOdds { get; }

		(Currencies, int) OpenCost { get; }

		List<BubbleVariationId> BubbleVariants { get; }

		bool TryGetRelevantBubbleVariant(IPlayer player, out BubbleVariantsDefinition variationDefinition);

		MetacoreDuration GetBubbleDuration(IPlayer player, BubbleVariationId variationId);

		int GetSpawnOdds(IPlayer player);

		(Currencies, int) GetOpenCost(IPlayer player, BubbleVariationId variationId);

		IItemDefinition GetReplacementItem(IPlayer player, BubbleVariationId variationId);
	}
}
