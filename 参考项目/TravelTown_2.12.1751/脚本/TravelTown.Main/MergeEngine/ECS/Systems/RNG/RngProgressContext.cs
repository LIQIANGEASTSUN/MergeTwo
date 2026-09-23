namespace MergeEngine.ECS.Systems.RNG
{
	public class RngProgressContext
	{
		public readonly string EventId;

		public readonly RngAccumulationEventHandler EventHandler;

		public RngProgressContext(string eventId, RngAccumulationEventHandler eventHandler)
		{
		}
	}
}
