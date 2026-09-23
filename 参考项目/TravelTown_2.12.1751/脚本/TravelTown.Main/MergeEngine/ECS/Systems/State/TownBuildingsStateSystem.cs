using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Tasks;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using Merger.LevelAndMeta.Responses;
using Merger.Metagame.Data;
using Merger.Metagame.ECS;
using Merger.Metagame.Model;
using Merger.Metagame.Services;
using Zenject;

namespace MergeEngine.ECS.Systems.State
{
	public class TownBuildingsStateSystem : StateSystemBase<BuildingsResponse>
	{
		[InjectSystem]
		[NonSerialized]
		public MetagameSystem _metagameSystem;

		[InjectSystem]
		[NonSerialized]
		public PlayerLevelSystem _playerLevelSystem;

		[Inject]
		[NonSerialized]
		public IMetagameConfigurationModel _metagameConfigurationModel;

		[Inject]
		[NonSerialized]
		public MetaConfigurationService _metaConfigurationService;

		public static string SectionNamePrefix;

		[NonSerialized]
		public List<IMergeTask> _activeTasks;

		[NonSerialized]
		public List<IMergeTask> _completedTasks;

		public const int BuildingStageNotFoundIndex = -1;

		public List<IMergeTask> CompletedTasks => null;

		public List<IMergeTask> ActiveTasks => null;

		public override void LoadState(BuildingsResponse newState)
		{
		}

		public int GetBuildingProgressionCurrentStageIndex(BuildingInstanceProgression buildingInstanceProgression)
		{
			return 0;
		}

		public void UpdateBuildingTasks(BuildingsResponse newState)
		{
		}

		public List<IMergeTask> GetFullyCompletedBuildingsTasks()
		{
			return null;
		}

		public static string GetSectionIdWithPrefix(int i)
		{
			return null;
		}

		public static string GetSectionName(int i)
		{
			return null;
		}

		public List<IMergeTask> GetBuildingCompletedTasks(IBuildingInstanceDefinition buildingInstanceDefinition, IBuildingStage unlockedStage)
		{
			return null;
		}
	}
}
