using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Game.Cloud.Config;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Area
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 20, 21, 24 })]
	public class AreaInfo : IGameConfigData<AreaId>, IGameConfigData, IHasGameConfigKey<AreaId>, IAreaInfo
	{
		[IgnoreDataMember]
		[NonSerialized]
		public bool? isStoryEventArea;

		[MetaMember(1, MetaMemberFlags.None)]
		public AreaId AreaId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string TitleLocalizationId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string CategoryLocalizationId { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> TeaseRequirements { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> UnlockRequirements { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> Rewards { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<HotspotDef> HotspotsRefs { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public HotspotDef UnlockingHotspotRef { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string LockedDescriptionLocalizationId { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public string UnlockedDescriptionLocalizationId { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public string ShortDescriptionLocalizationId { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public List<MetaRef<MapSpotInfo>> MapSpotRefs { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public LocationId LocationId { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MergeChainId UnlockInstructionMergeChainId { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public MetaRef<AreaInfo> UnlockInstructionAreaInfoRefs { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public MetaRef<AreaInfo> NextAreaToUnlockRefs { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public bool NotifyOnStart { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public bool ForceTravelOnNotify { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public int RowIndex { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public AreaCompleteRewardStyle CompleteRewardStyle { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		[IgnoreDataMember]
		public IEnumerable<MapSpotInfo> MapSpots => null;

		[IgnoreDataMember]
		public AreaInfo UnlockInstructionAreaInfo => null;

		[IgnoreDataMember]
		public AreaInfo NextAreaToUnlock => null;

		[IgnoreDataMember]
		public bool IsStoryEventArea => false;

		[IgnoreDataMember]
		public bool IsSeenItemRequiredArea => false;

		public AreaId ConfigKey => null;

		public IEnumerable<IHotspotDefinition> Hotspots(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IHotspotDefinition> Hotspots(IPlayer player)
		{
			return null;
		}

		public IHotspotDefinition UnlockingHotspot(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IHotspotDefinition UnlockingHotspot(IPlayer player)
		{
			return null;
		}

		public AreaInfo()
		{
		}

		public AreaInfo(AreaId configKey, LocationId locationId, string titleLocalizationId, string categoryLocalizationId, List<PlayerRequirement> teaseRequirements, List<PlayerRequirement> unlockRequirements, List<PlayerReward> rewards, string lockedDescriptionLocalizationId, string unlockedDescriptionLocalizationId, string shortDescriptionLocalizationId, List<MetaRef<HotspotDefinition>> hotspots, List<MetaRef<MapSpotInfo>> mapSpots, HotspotId unlockedBy, MergeChainId unlockInstructionMergeChain, MetaRef<AreaInfo> unlockInstructionArea, MetaRef<AreaInfo> nextAreaToUnlock, bool notifyOnStart, bool forceTravelOnNotify, int rowIndex, AreaCompleteRewardStyle completeRewardStyle, int experimentPriority)
		{
		}

		public int GetAreaTaskHotspotCount(IPlayer player)
		{
			return 0;
		}

		public Option<PlayerRequirement> GetFirstUnmatchedUnlockRequirement(IPlayer player, bool checkGlobal = true)
		{
			return default(Option<PlayerRequirement>);
		}

		public static Option<PlayerRequirement> GetFirstUnmatchedRequirement(IPlayer player, List<PlayerRequirement> requirements)
		{
			return default(Option<PlayerRequirement>);
		}

		public void AddUnmatchedUnlockRequirements(IPlayer player, List<PlayerRequirement> outputRequirements)
		{
		}

		public Option<AreasGlobalUnlockRequirementInfo> GetActiveGlobalUnlockRequirement(IPlayer player, bool checkGlobal = true)
		{
			return default(Option<AreasGlobalUnlockRequirementInfo>);
		}

		public bool NotifyPlayerOnStart(IPlayer player, LocationId currentLocation)
		{
			return false;
		}

		public bool IsAreaEnabled(IPlayer player)
		{
			return false;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
