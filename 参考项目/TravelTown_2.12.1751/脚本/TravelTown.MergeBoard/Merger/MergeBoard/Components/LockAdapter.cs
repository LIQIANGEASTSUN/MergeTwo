using System;
using ContextualizedECS;
using MergeEngine.ECS.Components.Items;

namespace Merger.MergeBoard.Components
{
	public class LockAdapter : ILockedComponent
	{
		[NonSerialized]
		public Entity _entity;

		public bool AnyLock => false;

		public bool OnlyLock => false;

		public bool DragLocked => false;

		public bool Locked => false;

		public bool Boxed => false;

		public LockComponent LockComponent => default(LockComponent);

		public BoxComponent BoxComponent => default(BoxComponent);

		public bool Bubbled { get; set; }

		public bool Meteor => false;

		public long MeteorEndTime { get; set; }

		public long MeteorDuration { get; set; }

		public string MeteorCycleId { get; set; }

		public int MeteorLocationItemIndex { get; set; }

		public bool LockedByLevel { get; set; }

		public int LevelLock { get; set; }

		public double BubbleTimeLeft { get; set; }

		public bool LockedByInteraction { get; set; }

		public bool LockedByFlyingAnimation { get; set; }

		public LockAdapter(Entity entity)
		{
		}
	}
}
