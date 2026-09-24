using GameLogic.Config;
using Merge;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(26)]
	public class BoardItemDiscoveredRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId BoardId;

		[MetaMember(2, MetaMemberFlags.None)]
		public int Item;

		public BoardItemDiscoveredRequirement()
		{
		}

		public BoardItemDiscoveredRequirement(MergeBoardId boardId, int item)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer playerModel)
		{
			return false;
		}

		public override void ForceComplete(IPlayer player)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
