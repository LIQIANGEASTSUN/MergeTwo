using System.Collections.Generic;
using Merger.PendingRewarders.Data;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads
{
	public class PendingRewardHolder
	{
		[JsonProperty("pendingRewards")]
		public List<PendingReward> PendingRewards;
	}
}
