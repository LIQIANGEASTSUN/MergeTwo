using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.Configuration;
using MergeEngine.ECS.Systems;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Zenject;

namespace Merger.Game.ViewModel
{
	public class InventoryProducerViewModel : GameBaseViewModel
	{
		[Inject]
		[NonSerialized]
		public IInventoryModel _inventoryModel;

		[Inject]
		[NonSerialized]
		public IProducerInventoryConfigurationModel _producerInventoryConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[NonSerialized]
		public InventorySystem _inventorySystem;

		public List<ProducerInventorySlotViewData> UnlocksAtItems => null;

		public ReadOnlyCollection<IMergeItem> UnlockedProducerSlotItems => null;

		public ReadOnlyCollection<string> NewProducerSlotItemIds => null;

		public InventorySystem InventorySystem => null;

		public void TryRemoveItem(int slotIndex)
		{
		}

		public IMergeItem GetItem(int slotIndex)
		{
			return null;
		}
	}
}
