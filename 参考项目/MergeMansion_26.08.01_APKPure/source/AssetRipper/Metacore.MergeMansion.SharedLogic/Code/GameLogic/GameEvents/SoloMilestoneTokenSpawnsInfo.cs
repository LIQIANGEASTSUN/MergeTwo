using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents.SoloMilestone;
using Code.GameLogic.StatsTracking;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class SoloMilestoneTokenSpawnsInfo : IGameConfigData<SoloMilestoneTokenSpawnsId>, IGameConfigData, IHasGameConfigKey<SoloMilestoneTokenSpawnsId>, IComparable<SoloMilestoneTokenSpawnsInfo>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public SoloMilestoneTokenSpawnsId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public SoloMilestoneEventId EventId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Milestone { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public PlayerSegmentId Segment { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public StatsTrackingType TokenSource { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int BaseTokenSpawnChance { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public bool BaseTokenSpawnEnabled { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public F32 BaseTokenSpawnMultiplierMin { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public F32 BaseTokenSpawnMultiplierMax { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<int> Parameters { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public int SegmentPriority { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public SoloMilestoneTokenSpawnsInfo()
		{
		}

		public SoloMilestoneTokenSpawnsInfo(SoloMilestoneTokenSpawnsId configKey, SoloMilestoneEventId eventId, int milestone, PlayerSegmentId segment, int segmentPriority, StatsTrackingType tokenSource, int baseTokenSpawnChance, bool baseTokenSpawnEnabled, F32 baseTokenSpawnMultiplierMin, F32 baseTokenSpawnMultiplierMax, List<int> parameters, int experimentPriority)
		{
		}

		public int CompareTo(SoloMilestoneTokenSpawnsInfo other)
		{
			return 0;
		}
	}
}
