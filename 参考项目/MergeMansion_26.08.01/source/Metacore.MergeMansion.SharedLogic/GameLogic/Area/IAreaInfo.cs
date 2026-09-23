using System.Collections.Generic;
using Game.Cloud.Config;
using GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Area
{
	[MetaSerializable]
	[MetaDeserializationConvertFromConcreteDerivedType(typeof(AreaInfo))]
	public interface IAreaInfo
	{
		AreaId ConfigKey { get; }

		AreaId AreaId { get; }

		string TitleLocalizationId { get; }

		string CategoryLocalizationId { get; }

		List<PlayerRequirement> TeaseRequirements { get; }

		List<PlayerRequirement> UnlockRequirements { get; }

		List<PlayerReward> Rewards { get; }

		List<HotspotDef> HotspotsRefs { get; }

		string LockedDescriptionLocalizationId { get; }

		string UnlockedDescriptionLocalizationId { get; }

		string ShortDescriptionLocalizationId { get; }

		List<MetaRef<MapSpotInfo>> MapSpotRefs { get; }

		LocationId LocationId { get; }

		MergeChainId UnlockInstructionMergeChainId { get; }

		bool ForceTravelOnNotify { get; }

		int RowIndex { get; }

		AreaCompleteRewardStyle CompleteRewardStyle { get; }

		IEnumerable<MapSpotInfo> MapSpots { get; }

		AreaInfo UnlockInstructionAreaInfo { get; }

		AreaInfo NextAreaToUnlock { get; }

		bool IsStoryEventArea { get; }

		bool IsSeenItemRequiredArea { get; }

		IEnumerable<IHotspotDefinition> Hotspots(IMergeMansionGameConfig config);

		IEnumerable<IHotspotDefinition> Hotspots(IPlayer player);

		IHotspotDefinition UnlockingHotspot(IMergeMansionGameConfig config);

		IHotspotDefinition UnlockingHotspot(IPlayer player);

		int GetAreaTaskHotspotCount(IPlayer player);

		Option<PlayerRequirement> GetFirstUnmatchedUnlockRequirement(IPlayer player, bool checkGlobal = true);

		Option<AreasGlobalUnlockRequirementInfo> GetActiveGlobalUnlockRequirement(IPlayer player, bool checkGlobal = true);

		bool NotifyPlayerOnStart(IPlayer player, LocationId currentLocation);
	}
}
