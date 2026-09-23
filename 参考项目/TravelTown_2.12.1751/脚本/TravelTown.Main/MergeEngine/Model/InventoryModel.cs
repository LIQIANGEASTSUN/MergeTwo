using System;
using Framework.Core.DataBinding.Collections;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.ECS;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.LiveOps.Events.Model;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace MergeEngine.Model
{
	public class InventoryModel : ModelBase, IInventoryModel
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEntityManager entityManager;

		[Inject]
		[NonSerialized]
		public ILiveOpsEventModel _liveOpsEventModel;

		[NonSerialized]
		public InventoryCapability _inventoryConfig;

		public InventoryComponent _inventoryComponent => null;

		public ProducerInventoryComponent _producerInventoryComponent => null;

		public int NextSlotPrice => 0;

		public int MaxSlots => 0;

		public PlayerResourceEnum SlotPriceCurrency => default(PlayerResourceEnum);

		public ObservableList<Entity> Slots => null;

		public int NumSlots => 0;

		public int NumProducerSlots => 0;

		public float GetToolProgressPercentage(PlayerResourceEnum resource)
		{
			return 0f;
		}

		public InventoryCapability GetInventoryConfig()
		{
			return null;
		}

		public override void InitializeModel()
		{
		}

		public void GameConfigLoaded(GameConfig gameConfig)
		{
		}

		public IMergeItem GetItem(int slotIndex, InventorySlotType type)
		{
			return null;
		}

		public string GetItemUUID(int slotIndex, InventorySlotType type)
		{
			return null;
		}

		public AssetReferenceT<Sprite> GetItemAsset(int slotIndex, InventorySlotType type)
		{
			return null;
		}

		public void SetToolProgress(PlayerResourceEnum resource, float progress)
		{
		}

		public void UpdateToolProgress(PlayerResourceEnum toolType, float progressToAdd)
		{
		}
	}
}
