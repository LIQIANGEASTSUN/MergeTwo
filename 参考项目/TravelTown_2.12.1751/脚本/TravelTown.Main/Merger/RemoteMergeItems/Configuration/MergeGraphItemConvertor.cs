using System;
using MergeEngine.Configuration;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	public class MergeGraphItemConvertor : JsonConverter<IMergeGraphItem>
	{
		public bool LazyMergeGraphItems;

		public override bool CanWrite => false;

		public override void WriteJson(JsonWriter writer, IMergeGraphItem value, JsonSerializer serializer)
		{
		}

		public override IMergeGraphItem ReadJson(JsonReader reader, Type objectType, IMergeGraphItem existingValue, bool hasExistingValue, JsonSerializer serializer)
		{
			return null;
		}
	}
}
