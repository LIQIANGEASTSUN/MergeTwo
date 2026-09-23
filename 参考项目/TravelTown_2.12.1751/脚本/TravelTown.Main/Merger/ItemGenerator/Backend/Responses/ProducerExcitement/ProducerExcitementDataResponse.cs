using Merger.Data.Assets;
using Merger.ItemGenerator.Types.ProducerExcitement;
using Newtonsoft.Json;

namespace Merger.ItemGenerator.Backend.Responses.ProducerExcitement
{
	public class ProducerExcitementDataResponse
	{
		[JsonProperty("timestamp")]
		public long Timestamp;

		[JsonProperty("featureEnabled")]
		public bool FeatureEnabled;

		[JsonProperty("excitementVisibility")]
		public ExcitementVisibility ExcitementVisibility;

		[JsonProperty("excitementTable")]
		public ProducerExcitementTableResponse ExcitementTable;

		[JsonProperty("cycleData")]
		public ProducerExcitementCycleDataResponse CycleData;

		[JsonProperty("assets")]
		public ClientAsset[] Assets;
	}
}
