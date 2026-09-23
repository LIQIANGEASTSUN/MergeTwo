using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Player.Requirements;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 10, 11, 12, 13, 15, 16 })]
	[MetaActivableConfigData("GarageCleanupEvent", false, true)]
	public class GarageCleanupEventInfo : IMetaActivableConfigData<GarageCleanupEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<GarageCleanupEventId>, IHasGameConfigKey<GarageCleanupEventId>, IMetaActivableInfo<GarageCleanupEventId>, IValidatable, IEventSharedInfo, IHasRequirement, IPrioritizedEvent
	{
		public readonly struct BoardSizeInfo
		{
			public readonly int Width;

			public readonly int Height;

			public int Size => 0;

			public BoardSizeInfo(int width, int height)
			{
				Width = 0;
				Height = 0;
			}
		}

		public static readonly BoardSizeInfo BoardSize;

		[MetaMember(1, MetaMemberFlags.None)]
		public GarageCleanupEventId GarageCleanupEventId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<GarageCleanupBoardInfo> Boards { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<MetaRef<GarageCleanupPatternSetInfo>> PatternSets { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<int> SpawnerItems { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<int> BoardCosts { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<MetaRef<GarageCleanupRewardInfo>> SlotFillRewards { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MergeBoardId MergeBoardId { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public string PrefabsOverride { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public bool AlwaysShowPatternsAndRewards { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public EventGroupId GroupId { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public bool ForceLocationTravel { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public int StaticPriority { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public int DynamicPriorityTriggerThreshold { get; set; }

		[MetaMember(998, MetaMemberFlags.None)]
		[ServerOnly]
		public MetaActivableTimelineSettings Timeline { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		public GarageCleanupEventId ActivableId => null;

		public GarageCleanupEventId ConfigKey => null;

		public string DisplayShortInfo => null;

		[IgnoreDataMember]
		public bool HasSpawnerItems => false;

		PlayerRequirement IHasRequirement.Requirement => null;

		public GarageCleanupEventInfo()
		{
		}

		public GarageCleanupEventInfo(GarageCleanupEventId garageCleanupEventId, string displayName, string description, MetaActivableParams activableParams, List<GarageCleanupBoardInfo> boards, List<MetaRef<GarageCleanupPatternSetInfo>> patternSets, List<int> spawnerItems, List<int> boardCosts, List<MetaRef<GarageCleanupRewardInfo>> slotFillRewards, MergeBoardId mergeBoardId, PlayerRequirement unlockRequirement, string prefabsOverride, bool alwaysShowPatternsAndRewards, EventGroupId groupId, int priority, EventCategoryInfo categoryInfo, bool forceLocationTravel, int staticPriority, int dynamicPriorityTriggerThreshold, MetaActivableTimelineSettings timeline, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public string GetEventPrefabsId()
		{
			return null;
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
