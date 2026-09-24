using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.State;
using MergeEngine.Model;

namespace MergeEngine.ECS.Components.Items
{
	public class LockedComponent : RemoteLoadedComponent<LockedCapability, SerializedLockedComponent, SerializedLockedComponent>, ILocked, ILockedComponent
	{
		public const string Key = "locked";

		public bool BubbleExpiringBlocked;

		public override string ComponentKey => null;

		public bool Locked { get; set; }

		public bool Bubbled { get; set; }

		public bool Meteor { get; set; }

		public bool Boxed { get; set; }

		public UnboxingType UnboxingType { get; set; }

		public int InteractionAmount { get; set; }

		public int TotalInteractionAmount { get; set; }

		public PlayerResourceEnum InteractionResource { get; set; }

		public bool LockedByLevel => false;

		public int LevelLock { get; set; }

		public double BubbleTimeLeft { get; set; }

		public long MeteorEndTime { get; set; }

		public long MeteorDuration { get; set; }

		public string MeteorCycleId { get; set; }

		public int MeteorLocationItemIndex { get; set; }

		public bool BubbleModifiedByStateLoad { get; set; }

		public int BlasterableTier { get; set; }

		public bool IsBlasterable => false;

		public bool LockedByTutorial { get; set; }

		public bool DragLockedByTutorial { get; set; }

		public bool InteractionLockedByTutorial { get; set; }

		public bool LockedByInteraction { get; set; }

		public bool LockedByNetworkOperation { get; set; }

		public bool LockedByFlyingAnimation { get; set; }

		public bool AnyLock => false;

		public bool OnlyLock => false;

		public bool AnyMergePreventingLock => false;

		public bool BoxedLockedOrLockedByTutorial => false;

		public bool InteractionLocked => false;

		public bool DragLocked => false;

		public bool StartDraggingLocked => false;

		public bool BubbleExpirationBlocked => false;

		public LockedComponent(LockedCapability locked, Entity entity)
			: base((LockedCapability)default(_00210), (Entity)null)
		{
		}

		public override void LoadComponent(SerializedLockedComponent componentData)
		{
		}

		public override void OnBeforeSerialize()
		{
		}
	}
}
