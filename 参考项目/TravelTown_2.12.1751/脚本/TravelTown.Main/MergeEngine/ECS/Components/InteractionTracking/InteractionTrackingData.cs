using System.Collections.Generic;

namespace MergeEngine.ECS.Components.InteractionTracking
{
	public class InteractionTrackingData
	{
		public ItemSpawningTrackingData ItemSpawningTrackingData;

		public RemoteItemSpawningTrackingData RemoteItemSpawningTrackingData;

		public ExpendableTrackingData ExpendableTrackingData;

		public ChargableTrackingData ChargableTrackingData;

		public ToolSpawningTrackingData ToolSpawningTrackingData;

		public CreatedItemTrackingData CreatedItemTrackingData;

		public bool IsComboProducer;

		public bool IsProducer;

		public bool IsSpawner;

		public string MergeItemType;

		public string SpawnedItemId;

		public bool InteractionResourceEnabled;

		public bool InteractionItemsEnabled;

		public string InteractionResource;

		public int? InteractionResourceAmount;

		public string ItemsToConsumeFormatted;

		public IEnumerable<int> EnergyCostOptions;

		public bool IsDraggedInteraction;

		public int Duration;

		public int ItemAmount;
	}
}
