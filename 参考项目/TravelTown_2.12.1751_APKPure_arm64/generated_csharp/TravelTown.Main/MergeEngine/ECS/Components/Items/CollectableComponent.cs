using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Data.Assets;

namespace MergeEngine.ECS.Components.Items
{
	public class CollectableComponent : ComponentBase<CollectableItemCapability>, ICollectable, ICollectableComponent
	{
		public bool DroppedOnInventory;

		public bool Collected { get; set; }

		public PlayerResourceEnum Resource { get; }

		public int Amount { get; set; }

		public bool CollectWhenDroppedOnInventory { get; }

		public ClientAsset[] Assets { get; }

		public AfterCollectAnimation AfterCollectAnimation { get; }

		public bool IsATool => false;

		public bool RequiresDoubleTap => false;

		public bool IsCollectableItem => false;

		public bool IsCollectableItemWithResource => false;

		public bool ShouldCollectableItemFly => false;

		public Reward CollectableReward => null;

		public bool IsImmediateReward => false;

		public bool IsPlaygroundPoints => false;

		public bool ShouldRemoveFromBoard { get; set; }

		public CollectableComponent(CollectableItemCapability capability, Entity entity)
			: base((CollectableItemCapability)default(_00210), (Entity)null)
		{
		}
	}
}
