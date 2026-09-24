using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.Player.Requirements
{
	[MetaSerializableDerived(67)]
	public class CanCompleteHotspotFromMergeBoardRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public HotspotId HotspotId { get; set; }

		public CanCompleteHotspotFromMergeBoardRequirement()
		{
		}

		public CanCompleteHotspotFromMergeBoardRequirement(HotspotId hotspotId)
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
