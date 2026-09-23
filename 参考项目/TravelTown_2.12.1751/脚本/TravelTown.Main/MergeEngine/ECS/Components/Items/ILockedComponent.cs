namespace MergeEngine.ECS.Components.Items
{
	public interface ILockedComponent
	{
		bool Locked { get; }

		bool Bubbled { get; }

		bool Boxed { get; }

		bool LockedByLevel { get; }

		int LevelLock { get; }

		double BubbleTimeLeft { get; }

		bool LockedByInteraction { set; }

		bool LockedByFlyingAnimation { get; set; }

		bool AnyLock { get; }

		bool OnlyLock { get; }

		bool DragLocked { get; }

		bool Meteor { get; }

		long MeteorEndTime { get; set; }

		long MeteorDuration { get; set; }

		string MeteorCycleId { get; set; }

		int MeteorLocationItemIndex { get; set; }
	}
}
