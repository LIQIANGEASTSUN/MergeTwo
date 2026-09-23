using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;

namespace Merger.ProducerExcitement.Signals
{
	public class ProducerExcitementReceivedSignal
	{
		public ProducerExcitementDataResponse Response { get; }

		public ProducerExcitementReceivedSignal()
		{
		}

		public ProducerExcitementReceivedSignal(ProducerExcitementDataResponse response)
		{
		}
	}
}
