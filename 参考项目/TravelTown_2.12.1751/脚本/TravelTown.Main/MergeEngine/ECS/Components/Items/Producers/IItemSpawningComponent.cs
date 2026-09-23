using MergeEngine.Util;

namespace MergeEngine.ECS.Components.Items.Producers
{
	public interface IItemSpawningComponent : ITimeCycleComponent, IComponentBase
	{
		int Seed { get; }

		ItemSpawningQueue ItemsQueue { get; }
	}
}
