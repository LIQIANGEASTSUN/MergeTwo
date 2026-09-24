using Code.GameLogic.Config;
using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(64)]
	public sealed class HasEnoughItemChargesRequirement : PlayerRequirement, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int RequiredCharges { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeItemFilterComponent FilterComponent { get; set; }

		public HasEnoughItemChargesRequirement()
		{
		}

		public HasEnoughItemChargesRequirement(string itemDefinitionKeysCsv, string mergeChainDefKeysCsv, int requiredCharges)
		{
		}

		public override bool Matches(IPlayer playerModel)
		{
			return false;
		}

		public override void ForceComplete(IPlayer playerModel)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
