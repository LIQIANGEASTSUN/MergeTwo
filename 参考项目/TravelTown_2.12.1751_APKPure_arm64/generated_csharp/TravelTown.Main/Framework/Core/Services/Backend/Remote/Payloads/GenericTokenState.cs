using System.Collections.Generic;
using GameCore.States.Attributes;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads
{
	[StateName("genericTokens")]
	public class GenericTokenState : BackendState
	{
		[JsonProperty("tokens")]
		public List<GenericToken> Tokens;
	}
}
