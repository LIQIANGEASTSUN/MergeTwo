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
	public class ExtraSpawnItemValueInfo : IGameConfigData<int>, IGameConfigData, IHasGameConfigKey<int>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 Value { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[NoChecksum]
		public string ItemName { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDictionary<Currencies, F32> CustomValuesByCurrency { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaDictionary<CoreSupportEventTokenId, F32> CustomValuesByCoreSupportEventTokenId { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ExtraSpawnItemValueInfo()
		{
		}

		public ExtraSpawnItemValueInfo(string configKey, F32 value, MetaDictionary<Currencies, F32> customValuesByCurrency, MetaDictionary<CoreSupportEventTokenId, F32> customValuesByCoreSupportEventTokenId, int experimentPriority)
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
