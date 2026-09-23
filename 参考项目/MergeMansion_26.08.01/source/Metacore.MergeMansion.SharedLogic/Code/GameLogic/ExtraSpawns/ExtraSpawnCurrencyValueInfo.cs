using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	public class ExtraSpawnCurrencyValueInfo : IGameConfigData<Currencies>, IGameConfigData, IHasGameConfigKey<Currencies>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 Value { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, F32> CustomValuesByCurrency { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDictionary<CoreSupportEventTokenId, F32> CustomValuesByCoreSupportEventTokenId { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ExtraSpawnCurrencyValueInfo()
		{
		}

		public ExtraSpawnCurrencyValueInfo(Currencies configKey, F32 value, MetaDictionary<Currencies, F32> customValuesByCurrency, MetaDictionary<CoreSupportEventTokenId, F32> customValuesByCoreSupportEventTokenId, int experimentPriority)
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
