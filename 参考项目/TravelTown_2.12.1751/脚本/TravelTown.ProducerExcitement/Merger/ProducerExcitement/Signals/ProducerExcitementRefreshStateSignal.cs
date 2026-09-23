using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;

namespace Merger.ProducerExcitement.Signals
{
	public class ProducerExcitementRefreshStateSignal
	{
		public ProducerExcitementCycleDataResponse CycleData { get; }

		public ProducerExcitementRefreshStateSignal()
		{
		}

		public ProducerExcitementRefreshStateSignal(ProducerExcitementCycleDataResponse cycleData)
		{
		}
	}
}
