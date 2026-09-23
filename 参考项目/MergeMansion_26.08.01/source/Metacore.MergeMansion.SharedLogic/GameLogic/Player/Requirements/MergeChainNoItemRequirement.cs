using GameLogic.Config;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(45)]
	public class MergeChainNoItemRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixMergeChainRef")]
		public MergeChainDef MergeChainDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef MinItemDef { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef MaxItemDef { get; set; }

		public IItemDefinition DefaultItem(IPlayer player)
		{
			return null;
		}

		public MergeChainNoItemRequirement()
		{
		}

		public MergeChainNoItemRequirement(MergeChainId mergeChain, int minItemRef, int maxItemRef)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer playerModel)
		{
			return false;
		}

		public override void ForceComplete(IPlayer playerModel)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
