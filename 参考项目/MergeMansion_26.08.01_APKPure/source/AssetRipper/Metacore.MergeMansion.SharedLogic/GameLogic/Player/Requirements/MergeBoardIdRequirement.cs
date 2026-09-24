using System.Collections.Generic;
using GameLogic.Config;
using Merge;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(54)]
	public class MergeBoardIdRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<MergeBoardId> BoardIds { get; set; }

		public MergeBoardIdRequirement()
		{
		}

		public MergeBoardIdRequirement(List<MergeBoardId> boardIds)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer player)
		{
			return false;
		}

		public override void ForceComplete(IPlayer playerModel)
		{
		}
	}
}
