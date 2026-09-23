using System;
using System.Collections.Generic;
using Framework.Core;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.MergeBoard.Data;
using Merger.Metagame.Model;
using Zenject;

namespace Merger.MergeBoard.Logic
{
	public class ToolSpawnHandler : Base, IInitializable, IToolSpawnHandler, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IResourcesConfigurationModel _resourcesConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMetagameModel _metagameModel;

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IGameConfigurationModel _gameConfigurationModel;

		[Inject]
		[NonSerialized]
		public IPlayerModel _playerModel;

		[Inject]
		[NonSerialized]
		public IInventoryModel _inventoryModel;

		public const int MaxToolsChainsInProgress = 2;

		[NonSerialized]
		public readonly ToolsRequiredByBuildingsHelper _requiredToolsHelper;

		[NonSerialized]
		public readonly Dictionary<IMergeGraphItem, PlayerResourceEnum> _graphToResource;

		[NonSerialized]
		public readonly Dictionary<PlayerResourceEnum, IMergeGraphItem> _resourceToGraph;

		public float ToolsRequiredByMetagameBooster => 0f;

		public PlayerResourceEnum GraphToResource(IMergeGraphItem graph)
		{
			return default(PlayerResourceEnum);
		}

		public IMergeGraphItem ResourceToGraph(PlayerResourceEnum resource)
		{
			return null;
		}

		public void Initialize()
		{
		}

		public Dictionary<PlayerResourceEnum, ToolProgressionData> GetToolProgressionData(IEnumerable<string> unlockedItemsOnBoard)
		{
			return null;
		}

		public IMergeItem GetToolToSpawn(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionData, List<WeightedTool> availableToolsToSpawn, List<WeightedToolLevel> toolLevelWeights)
		{
			return null;
		}

		public int CalculateMergeValue(int itemLevel)
		{
			return 0;
		}

		public PlayerResourceEnum SelectRandomWeightedTool(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard)
		{
			return default(PlayerResourceEnum);
		}

		public IMergeItem GenerateRandomToolItemFromWeights(List<WeightedToolLevel> toolLevelWeights, IMergeGraphItem toolGraph)
		{
			return null;
		}

		public List<WeightedToolLevel> FilterToolLevelsByProgressionOnBoard(List<WeightedToolLevel> toolLevelWeights, ToolProgressionData toolProgressionData)
		{
			return null;
		}

		public void ApplyMetagameWeightBoosts(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, int> currentToolAmounts)
		{
		}

		public Dictionary<PlayerResourceEnum, int> CalculateCurrentToolAmounts(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard)
		{
			return null;
		}

		public void BoostRequiredToolWeights(List<WeightedTool> toolWeights, HashSet<PlayerResourceEnum> requiredTools)
		{
		}

		public int SumItemsMergeValue(IMergeGraphItem toolGraph, IEnumerable<string> boardItemIds)
		{
			return 0;
		}

		public int GetMaxItemMergeValue(IMergeGraphItem toolGraph)
		{
			return 0;
		}

		public List<WeightedTool> GetFilteredTools(List<WeightedTool> availableToolsToSpawn, Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard)
		{
			return null;
		}

		public Func<WeightedTool, bool> GetToolSpawnPriorityStrategy(Dictionary<PlayerResourceEnum, ToolProgressionData> toolsProgressionOnBoard)
		{
			return null;
		}
	}
}
