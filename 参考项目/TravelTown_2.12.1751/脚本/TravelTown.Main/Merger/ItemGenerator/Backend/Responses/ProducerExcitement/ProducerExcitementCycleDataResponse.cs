using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementCycleDataResponse
	{
		[JsonProperty("cycleId")]
		public string CycleId;

		[JsonProperty("cycleEndDate")]
		public long CycleEndDate;

		[JsonProperty("spawnEndDate")]
		public long SpawnEndDate;
	}
}
