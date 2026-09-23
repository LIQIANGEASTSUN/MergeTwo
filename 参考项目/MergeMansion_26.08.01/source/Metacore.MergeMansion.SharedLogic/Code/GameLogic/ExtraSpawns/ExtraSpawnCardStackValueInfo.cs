using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Hotspots.CardStack;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	public class ExtraSpawnCardStackValueInfo : IGameConfigData<CardStackId>, IGameConfigData, IHasGameConfigKey<CardStackId>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public CardStackId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 Value { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, F32> CustomValuesByCurrency { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDictionary<CoreSupportEventTokenId, F32> CustomValuesByCoreSupportEventTokenId { get; set; }

		public ExtraSpawnCardStackValueInfo()
		{
		}

		public ExtraSpawnCardStackValueInfo(CardStackId configKey, F32 value, MetaDictionary<Currencies, F32> customValuesByCurrency, MetaDictionary<CoreSupportEventTokenId, F32> customValuesByCoreSupportEventTokenId)
		{
		}

		public F32 GetValue<TId>(TId id)
		{
			return default(F32);
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
