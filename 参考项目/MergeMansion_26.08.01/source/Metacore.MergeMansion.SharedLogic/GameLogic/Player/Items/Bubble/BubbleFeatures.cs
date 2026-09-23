using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializable]
	public class BubbleFeatures : IBubbleFeatures
	{
		public static readonly MetaDuration defaultBubbleDuration;

		[NonSerialized]
		public List<BubbleVariantsDefinition> bubbleVariantsDefinitions;

		public static readonly BubbleFeatures Placeholder;

		[IgnoreDataMember]
		MetacoreDuration IBubbleFeatures.BubbleDuration => default(MetacoreDuration);

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration BubbleDuration { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public Currencies OpenCurrency { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int OpenQuantity { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ReplacementItem { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int SpawnOdds { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<BubbleVariationId> BubbleVariants { get; set; }

		[IgnoreDataMember]
		public (Currencies, int) OpenCost => default((Currencies, int));

		[IgnoreDataMember]
		public ItemDef ReplacementItemDef => null;

		public BubbleFeatures()
		{
		}

		public BubbleFeatures(MetaDuration bubbleDuration, Currencies openCurrency, int openQuantity, int replacementItem, int spawnOdds, List<BubbleVariationId> bubbleVariants)
		{
		}

		public IItemDefinition GetReplacementItem(IPlayer player, BubbleVariationId variationId)
		{
			return null;
		}

		public MetacoreDuration GetBubbleDuration(IPlayer player, BubbleVariationId variationId)
		{
			return default(MetacoreDuration);
		}

		public (Currencies, int) GetOpenCost(IPlayer player, BubbleVariationId variationId)
		{
			return default((Currencies, int));
		}

		public int GetSpawnOdds(IPlayer player)
		{
			return 0;
		}

		public BubbleVariantsDefinition GetVariantDefinition(IPlayer player, BubbleVariationId variationId)
		{
			return null;
		}

		public bool TryGetRelevantBubbleVariant(IPlayer player, out BubbleVariantsDefinition variationDefinition)
		{
			variationDefinition = null;
			return false;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
