using System.Collections.Generic;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Configuration.Capabilities;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Data.TickInputActions;
using Merger.MergeBoard.View;

namespace Merger.MergeBoard.Systems
{
	public class TimeLockSystem : ISystem
	{
		public void Tick(TickContext context)
		{
		}

		public void HandleTapAction(TickContext context, TapAction tapAction)
		{
		}

		public void ProcessIntervalTick(TickContext context, IntervalTick intervalTick)
		{
		}

		public void ProcessInteractionLockGroup(TickContext context, Entity entity, ref TimeLockComponent timeLock, IdComponent id, HashSet<TimeLockGroup> groupsBeingUnlocked)
		{
		}

		public void UpdateCanBeUnlockedFlag(ref TimeLockComponent timeLock, HashSet<TimeLockGroup> groupsBeingUnlocked)
		{
		}

		public void ProcessTime(ref TimeLockComponent timeLock, float deltaTime)
		{
		}

		public void UpdateTimeLockBlockComponent(Entity entity, in TimeLockComponent timeLock)
		{
		}

		public void ApplyGroupLockBlock(TickContext context)
		{
		}

		public bool ShouldStartUnlockOnInteraction(TimeLockComponent timeLock, IdComponent id)
		{
			return false;
		}

		public bool CanStartUnlocking(TimeLockComponent timeLock)
		{
			return false;
		}

		public bool HasOtherUnlockInProgress(TickContext context, Entity currentEntity, TimeLockGroup lockGroup)
		{
			return false;
		}

		public void StartUnlocking(TickContext context, Entity entity, ref TimeLockComponent timeLock)
		{
		}

		public void BlockMergeComponentIfUsed(Entity entity, ref TimeLockComponent modifiedTimeLock)
		{
		}
	}
}
