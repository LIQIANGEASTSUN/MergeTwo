using GameLogic.Config;
using Merge;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(25)]
	public class BoardMergeCountRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId BoardId;

		[MetaMember(2, MetaMemberFlags.None)]
		public int MergeCount;

		public BoardMergeCountRequirement()
		{
		}

		public BoardMergeCountRequirement(MergeBoardId boardId, int mergeCount)
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
