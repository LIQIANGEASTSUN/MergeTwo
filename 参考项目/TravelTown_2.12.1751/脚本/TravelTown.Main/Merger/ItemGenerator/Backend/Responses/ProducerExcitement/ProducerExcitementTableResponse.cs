using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementTableResponse
	{
		[JsonProperty("excitementId")]
		public int ExcitementId;

		[JsonProperty("graphEntries")]
		public ProducerExcitementGraphEntryResponse[] GraphEntries;
	}
}
