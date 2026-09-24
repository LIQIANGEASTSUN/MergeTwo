using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(39)]
	public class ActiveTasksCanBeCompletedRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int RequiredAmount { get; set; }

		public ActiveTasksCanBeCompletedRequirement()
		{
		}

		public ActiveTasksCanBeCompletedRequirement(int amount)
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
