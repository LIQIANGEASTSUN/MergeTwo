using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementGraphEntryResponse
	{
		[JsonProperty("graphId")]
		public string GraphId;

		[JsonProperty("powerBoosts")]
		public ProducerExcitementPowerBoostResponse[] PowerBoosts;
	}
}
