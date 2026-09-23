using System;
using MergeEngine.Service.Cards.Configurations;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.JsonConverters
{
	public class RemoteBoosterItemJsonConverter : JsonConverter
	{
		[NonSerialized]
		public readonly CardsRemoteSpriteConfig _cardsRemoteSpriteConfig;

		public override bool CanWrite => false;

		public override bool CanConvert(Type objectType)
		{
			return false;
		}

		public RemoteBoosterItemJsonConverter(CardsRemoteSpriteConfig cardsRemoteSpriteConfig)
		{
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
		{
			return null;
		}

		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
		{
		}
	}
}
