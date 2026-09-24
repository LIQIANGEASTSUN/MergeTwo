using System;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Timing;
using MergeEngine.ECS.Util;

namespace MergeEngine.ECS.Systems
{
	public class TimeDurationSystem : TickableSystem<TimeDurationComponent>
	{
		public const string KillComponentSource = "timeDurationExpired";

		[InjectSystem]
		[NonSerialized]
		public TimeSystem _timeSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override void ProcessComponents(ReadOnlyCollection<TimeDurationComponent> components)
		{
		}

		public void AddKillComponentIfNoTimeLeft(TimeDurationComponent timeDurationComponent)
		{
		}

		public bool IsLocked(ComponentBase component)
		{
			return false;
		}
	}
}
