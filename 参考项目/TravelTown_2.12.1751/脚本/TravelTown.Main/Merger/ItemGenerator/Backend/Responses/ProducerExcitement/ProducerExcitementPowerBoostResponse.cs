using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementPowerBoostResponse
	{
		[JsonProperty("powerBoost")]
		public int PowerBoost;

		[JsonProperty("item")]
		public ProducerExcitementItemResponse Item;
	}
}
