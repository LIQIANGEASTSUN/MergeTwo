using GameLogic.Config;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(43)]
	public class MergeChainItemRequirement : PlayerRequirement
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

		public IMergeChainDefinition MergeChain(IPlayer player)
		{
			return null;
		}

		public IItemDefinition DefaultItem(IPlayer player)
		{
			return null;
		}

		public MergeChainItemRequirement()
		{
		}

		public MergeChainItemRequirement(MergeChainId mergeChain, int minItem, int maxItem)
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
