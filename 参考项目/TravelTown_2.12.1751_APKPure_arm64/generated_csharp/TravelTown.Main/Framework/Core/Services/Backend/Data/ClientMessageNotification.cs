using System.Collections.Generic;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Data
{
	public class ClientMessageNotification
	{
		[JsonProperty("topic", NullValueHandling = NullValueHandling.Ignore)]
		public string Topic;

		[JsonProperty("action", NullValueHandling = NullValueHandling.Ignore)]
		public string Action;

		[JsonProperty("payload", NullValueHandling = NullValueHandling.Ignore)]
		public object Payload;

		[JsonProperty("metadata", NullValueHandling = NullValueHandling.Ignore)]
		public Dictionary<string, string> MetaData;

		public string GenerateUuid()
		{
			return null;
		}

		public ClientMessageNotification Clone()
		{
			return null;
		}

		public void AddMetaData(string key, string value)
		{
		}

		public bool GetMetaData(string key, out string value)
		{
			value = null;
			return false;
		}
	}
}
