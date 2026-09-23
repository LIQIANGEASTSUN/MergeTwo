using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.GameLogic.Player.Board;

namespace GameLogic.Player.Board
{
	public class ActivationAuxiliarContext
	{
		public ItemDefinition OverrideSpawnActivationItem { get; set; }

		public AuxEnergyAttachmentChance AuxEnergyAttachmentChance { get; set; }

		public bool IsOverridingSpawn { get; set; }

		public ActivationResult RollOverrideSpawn(IPlayer player, MergeBoardId mergeBoardId)
		{
			return default(ActivationResult);
		}

		public bool RollOverrideSpawnChances(IPlayer player, MergeBoardId mergeBoardId, out ItemDefinition rolledItemDefinition)
		{
			rolledItemDefinition = null;
			return false;
		}
	}
}
