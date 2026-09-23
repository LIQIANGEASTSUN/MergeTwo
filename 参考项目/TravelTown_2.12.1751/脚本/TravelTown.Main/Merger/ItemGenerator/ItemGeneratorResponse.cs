using Merger.ItemGenerator.Backend.Responses.Meteor;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Newtonsoft.Json;

namespace Merger.ItemGenerator
{
	public class ItemGeneratorResponse
	{
		[JsonProperty("meteors")]
		public MeteorStateResponse[] Meteors;

		[JsonProperty("producerExcitement")]
		public ProducerExcitementDataResponse ProducerExcitement;
	}
}
