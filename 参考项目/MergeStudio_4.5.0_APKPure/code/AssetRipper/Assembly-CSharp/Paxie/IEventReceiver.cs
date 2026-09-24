namespace Paxie
{
	public interface IEventReceiver<in T> : IEventReceiverBase where T : IEvent
	{
		void OnEvent(T e);
	}
}
