using System.Collections.Generic;
using Newtonsoft.Json;

namespace Merger.MergeBoard.PowerBoost.Data
{
	public class LocalPlayerPersistentPowerBoostData
	{
		[JsonProperty("currentBoost")]
		public int CurrentBoost;

		[JsonProperty("unlockedBoosts")]
		public List<int> UnlockedBoosts;
	}
}
