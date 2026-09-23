using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config.Types;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Hotspots.Actions
{
	[MetaSerializableDerived(10)]
	public class SellItems : IDirectorAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId MergeBoardId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string Tag { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDuration SellDuration { get; set; }

		[IgnoreDataMember]
		public bool IsVisualAction => false;

		public SellItems()
		{
		}

		public SellItems(MergeBoardId mergeBoardId, string tag, MetaDuration sellDuration)
		{
		}

		public void Run(IPlayer player, IDirectorActionContext directorContext)
		{
		}

		public List<IItemDefinition> GetItemsToSellInInventories(IPlayer player)
		{
			return null;
		}

		public List<MergeBoardAct> CreateSellFromInventoryMergeBoardActs(List<IItemDefinition> itemsInInventory, MetacoreTime sellTime)
		{
			return null;
		}

		public List<ItemDefinition> GetItemsToSellFromPocket(IPlayer player)
		{
			return null;
		}

		public List<MergeBoardAct> CreateSellFromPocketMergeBoardActs(List<ItemDefinition> itemsToSellFromPocket, MetacoreTime sellTime)
		{
			return null;
		}

		public MergeBoardAct EnqueueAutoSellItemsFromInventories(MetacoreTime sellTime, IItemDefinition item)
		{
			return default(MergeBoardAct);
		}

		public MergeBoardAct EnqueueAutoSellItemsFromPocket(MetacoreTime sellTime, ItemDefinition item)
		{
			return default(MergeBoardAct);
		}

		public bool Matches(IMergeItem item, IPlayer player)
		{
			return false;
		}

		public bool DoesDefinitionMatch(IItemDefinition item)
		{
			return false;
		}

		public void SellItemsInMail(IPlayer player)
		{
		}
	}
}
