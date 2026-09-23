using System;
using System.Collections.ObjectModel;
using Framework.Core.Services.ServerTime;
using MergeEngine.ECS.Components;
using Zenject;

namespace MergeEngine.ECS.Systems.Timing
{
	public class TimeSystem : TickableSystem<TimeComponent>
	{
		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[NonSerialized]
		public TimeComponent _boardTimeComponent;

		public TimeComponent BoardTimeComponent => null;

		public DateTime ServerDateTime => default(DateTime);

		public double TotalSecondsNow => 0.0;

		public DateTime CurrentDateTime => default(DateTime);

		public double DeltaTime => 0.0;

		public static double TimeMultiplier { get; }

		public override SystemPriorities Priority => default(SystemPriorities);

		public double DeltaTimeToProcess => 0.0;

		public override void ProcessComponents(ReadOnlyCollection<TimeComponent> components)
		{
		}
	}
}
