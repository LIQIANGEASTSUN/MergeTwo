using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(12)]
	public class MergeChainItemNeededRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixMergeChainRef")]
		public MergeChainDef MergeChainDef { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int? MinLevel { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int? MaxLevel { get; set; }

		public IMergeChainDefinition MergeChain(IPlayer player)
		{
			return null;
		}

		public MergeChainItemNeededRequirement()
		{
		}

		public MergeChainItemNeededRequirement(MergeChainId mergeChain, int? minLevel, int? maxLevel)
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

		public bool MatchesChain(IPlayer player, IEnumerable<IItemDefinition> itemDefinitions)
		{
			return false;
		}

		public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
