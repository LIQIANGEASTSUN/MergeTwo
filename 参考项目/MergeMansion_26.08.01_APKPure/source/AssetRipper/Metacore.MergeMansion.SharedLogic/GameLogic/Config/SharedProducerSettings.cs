using System.Collections.Generic;
using GameLogic.Player;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class SharedProducerSettings : IGameConfigData<SharedProducerSettingsId>, IGameConfigData, IHasGameConfigKey<SharedProducerSettingsId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public SharedProducerSettingsId SettingsId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<(PlayerSegmentId segment, int value)> Overrides { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public SharedProducerSettingsId ConfigKey => null;

		public bool GetSegmentedMinValue(IPlayer player, out int segmentValue)
		{
			segmentValue = default(int);
			return false;
		}

		public SharedProducerSettings()
		{
		}

		public SharedProducerSettings(SharedProducerSettingsId settingsId, List<(PlayerSegmentId segment, int value)> overrides, int experimentPriority)
		{
		}
	}
}
