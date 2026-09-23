using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(65)]
	public sealed class HasEnoughItemTimeRequirement : PlayerRequirement, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration RequiredTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeItemFilterComponent FilterComponent { get; set; }

		public HasEnoughItemTimeRequirement()
		{
		}

		public HasEnoughItemTimeRequirement(string itemDefinitionKeysCsv, string mergeChainDefinitionKeysCsv, MetaDuration requiredTime)
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
	}
}
