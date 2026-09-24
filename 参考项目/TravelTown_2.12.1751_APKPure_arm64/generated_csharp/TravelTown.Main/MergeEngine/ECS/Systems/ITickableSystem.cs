namespace MergeEngine.ECS.Systems
{
	public interface ITickableSystem
	{
		SystemPriorities Priority { get; }

		void Tick();
	}
}
