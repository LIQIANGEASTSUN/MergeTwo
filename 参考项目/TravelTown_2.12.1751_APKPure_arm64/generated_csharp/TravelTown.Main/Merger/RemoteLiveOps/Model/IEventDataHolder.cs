using Framework.Core.DataBinding;

namespace Merger.RemoteLiveOps.Model
{
	public interface IEventDataHolder<in TEventData>
	{
		void SetStartEventData(string eventId, TEventData eventData, MutableBindableProperty<double> timeLeft);

		void UpdateEventData(TEventData eventData);

		void EndEvent();
	}
}
