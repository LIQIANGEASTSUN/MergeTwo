using System;
using MergeEngine.Configuration;
using Newtonsoft.Json;

namespace Merger.RemoteMergeItems.Configuration
{
	public class MergeItemConvertor : JsonConverter<IMergeItem>
	{
		public bool LazyMergeItems;

		public override bool CanWrite => false;

		public override void WriteJson(JsonWriter writer, IMergeItem value, JsonSerializer serializer)
		{
		}

		public override IMergeItem ReadJson(JsonReader reader, Type objectType, IMergeItem existingValue, bool hasExistingValue, JsonSerializer serializer)
		{
			return null;
		}
	}
}
