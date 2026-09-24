using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(32)]
	public class AtLeastNInventorySlotsRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int SlotCount { get; set; }

		public AtLeastNInventorySlotsRequirement()
		{
		}

		public AtLeastNInventorySlotsRequirement(int slotCount)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer player)
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
