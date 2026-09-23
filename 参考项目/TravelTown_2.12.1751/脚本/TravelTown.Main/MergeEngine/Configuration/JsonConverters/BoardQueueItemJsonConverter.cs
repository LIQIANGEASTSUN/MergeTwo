using System;
using MergeEngine.Model.Configuration;
using MergeEngine.Service.Cards.Models;
using Merger.Boosters.Declarations.Models;
using Merger.DynamicMergeItems;
using Merger.ItemSelectionBox.Models;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace MergeEngine.Configuration.JsonConverters
{
	public class BoardQueueItemJsonConverter : JsonConverter
	{
		public const string LogSource = "[BoardQueueItemJsonConverter]";

		public const string IdKey = "id";

		public const string UUIDInBoardQueueKey = "uuidInRewardQueue";

		public const string EnqueueTimestampKey = "queueAddedLatestTimestamp";

		public const string ItemDataKey = "itemData";

		public const string BoosterDataKey = "boosterData";

		public const string DynamicConfigurationKey = "dynamicConfig";

		public const string PackDataKey = "packData";

		public const string AnalyticsKey = "analytics";

		public const string ReasonKey = "reason";

		public const string BoardQueueOrderKey = "sortDirection";

		public const string CardsBoomModifierKey = "CardsBoom";

		[NonSerialized]
		public readonly IMergingConfigurationModel _mergingConfigurationModel;

		[NonSerialized]
		public readonly IBoosterModel _boosterModel;

		[NonSerialized]
		public readonly CardsPackConfigurationModel _cardsPackConfigurationModel;

		[NonSerialized]
		public readonly ItemSelectionBoxConfigurationModel _itemSelectionBoxConfigurationModel;

		public override bool CanWrite => false;

		public BoardQueueItemJsonConverter(IMergingConfigurationModel mergingConfigurationModel, IBoosterModel boosterModel, CardsPackConfigurationModel cardsPackConfigurationModel, ItemSelectionBoxConfigurationModel itemSelectionBoxConfigurationModel)
		{
		}

		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
		{
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
		{
			return null;
		}

		public DynamicMergeItemConfig GetDynamicMergeItemConfig(string id, JToken dynamicConfig)
		{
			return null;
		}

		public override bool CanConvert(Type objectType)
		{
			return false;
		}
	}
}
