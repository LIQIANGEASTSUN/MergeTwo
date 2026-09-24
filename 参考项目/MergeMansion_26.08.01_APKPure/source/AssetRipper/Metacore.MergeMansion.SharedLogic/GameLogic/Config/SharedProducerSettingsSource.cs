using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	public class SharedProducerSettingsSource : IConfigItemSource<SharedProducerSettings, SharedProducerSettingsId>, IGameConfigSourceItem<SharedProducerSettingsId, SharedProducerSettings>, IHasGameConfigKey<SharedProducerSettingsId>
	{
		public int ExperimentPriority { get; set; }

		public SharedProducerSettingsId ConfigKey { get; set; }

		public List<PlayerSegmentId> Segment { get; set; }

		public List<int> Value { get; set; }

		public SharedProducerSettings ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
