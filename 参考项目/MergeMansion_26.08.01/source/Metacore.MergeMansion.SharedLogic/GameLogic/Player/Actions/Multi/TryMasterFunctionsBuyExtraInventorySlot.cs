using System.Collections.Generic;
using System.Runtime.Serialization;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10915)]
	public class TryMasterFunctionsBuyExtraInventorySlot : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public int InventoryTypeFlag { get; set; }

		[IgnoreDataMember]
		public List<bool> ReturnList { get; set; }

		public TryMasterFunctionsBuyExtraInventorySlot()
		{
		}

		public TryMasterFunctionsBuyExtraInventorySlot(MergeBoardId boardId, int inventoryTypeFlag, List<bool> returnList)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
