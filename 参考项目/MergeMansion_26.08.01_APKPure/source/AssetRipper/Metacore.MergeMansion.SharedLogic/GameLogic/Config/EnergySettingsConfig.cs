using Code.GameLogic.Config;
using GameLogic.Player;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class EnergySettingsConfig : IGameConfigData<EnergyType>, IGameConfigData, IHasGameConfigKey<EnergyType>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public long MaxRechargeAmount { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDuration? DefaultUnitRestoreDuration { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public EnergyType ConfigKey => default(EnergyType);

		public EnergySettingsConfig()
		{
		}

		public EnergySettingsConfig(EnergyType energyType, long maxRechargeAmount, MetaDuration? defaultUnitRestoreDuration, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}
	}
}
