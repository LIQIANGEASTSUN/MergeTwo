using Newtonsoft.Json;

namespace Merger.Services.Backend.Sync.Data.Payloads.Board
{
	public class BoosterData
	{
		[JsonProperty("uuid")]
		public string UUID;

		public BoosterData()
		{
		}

		public BoosterData(string uuid)
		{
		}
	}
}
