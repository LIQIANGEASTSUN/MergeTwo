using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30040)]
	public class TryMasterFunctionsUnlockProducerInventorySlot : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public ProducerInventorySlotConfig ProducerInventorySlot { get; set; }

		[IgnoreDataMember]
		public List<bool> ReturnList { get; set; }

		public TryMasterFunctionsUnlockProducerInventorySlot()
		{
		}

		public TryMasterFunctionsUnlockProducerInventorySlot(MergeBoardId boardId, ProducerInventorySlotConfig producerInventorySlot, List<bool> returnList)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
