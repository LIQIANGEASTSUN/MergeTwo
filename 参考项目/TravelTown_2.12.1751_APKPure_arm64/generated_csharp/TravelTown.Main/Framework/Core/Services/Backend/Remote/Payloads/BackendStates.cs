using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace Framework.Core.Services.Backend.Remote.Payloads
{
	[Serializable]
	public class BackendStates : PendingRewardHolder
	{
		[JsonProperty("states")]
		public Dictionary<string, JToken> States;
	}
}
