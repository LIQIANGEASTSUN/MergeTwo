using System;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[Serializable]
	public class BoardStateResponse : BackendStates
	{
		[JsonProperty("event", DefaultValueHandling = DefaultValueHandling.Ignore)]
		public EventData EventData;
	}
}
