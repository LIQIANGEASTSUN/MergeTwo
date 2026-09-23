namespace MergeEngine.ECS.Components.Items
{
	public interface ILocked
	{
		bool Locked { get; }

		bool Boxed { get; }

		int LevelLock { get; }

		bool LockedByLevel { get; }

		bool AnyLock { get; }

		bool LockedByTutorial { get; }

		bool DragLocked { get; }

		bool InteractionLocked { get; }

		bool Bubbled { get; }

		double BubbleTimeLeft { get; set; }

		bool Meteor { get; }

		bool LockedByNetworkOperation { get; set; }

		int BlasterableTier { get; set; }
	}
}
