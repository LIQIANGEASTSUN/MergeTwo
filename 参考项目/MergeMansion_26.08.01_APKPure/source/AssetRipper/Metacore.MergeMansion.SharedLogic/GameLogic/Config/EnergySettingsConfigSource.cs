using Code.GameLogic.Config;
using GameLogic.Player;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Config
{
	public class EnergySettingsConfigSource : IConfigItemSource<EnergySettingsConfig, EnergyType>, IGameConfigSourceItem<EnergyType, EnergySettingsConfig>, IHasGameConfigKey<EnergyType>
	{
		public int ExperimentPriority { get; set; }

		public EnergyType ConfigKey { get; set; }

		public long MaxRechargeAmount { get; set; }

		public MetaDuration? DefaultUnitRestoreDuration { get; set; }

		public EnergySettingsConfig ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
