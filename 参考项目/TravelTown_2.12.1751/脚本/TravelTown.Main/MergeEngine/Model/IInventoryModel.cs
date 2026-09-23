using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Model
{
	public interface IInventoryModel
	{
		PlayerResourceEnum SlotPriceCurrency { get; }

		int NumSlots { get; }

		int NumProducerSlots { get; }

		int NextSlotPrice { get; }

		int MaxSlots { get; }

		float GetToolProgressPercentage(PlayerResourceEnum resource);

		IMergeItem GetItem(int slotIndex, InventorySlotType type);

		string GetItemUUID(int slotIndex, InventorySlotType type);

		AssetReferenceT<Sprite> GetItemAsset(int slotIndex, InventorySlotType type);

		void SetToolProgress(PlayerResourceEnum resource, float progress);

		void UpdateToolProgress(PlayerResourceEnum toolType, float progressToAdd);
	}
}
