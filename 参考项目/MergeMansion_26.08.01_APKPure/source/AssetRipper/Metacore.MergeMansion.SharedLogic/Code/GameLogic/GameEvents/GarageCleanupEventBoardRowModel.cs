using System.Collections.Generic;
using GameLogic.Player;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class GarageCleanupEventBoardRowModel
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public List<GarageCleanupEventBoardSlotModel> Slots;

		public GarageCleanupEventBoardRowModel()
		{
		}

		public GarageCleanupEventBoardRowModel(PlayerModel player, GarageCleanupBoardRowInfo rowInfo)
		{
		}
	}
}
