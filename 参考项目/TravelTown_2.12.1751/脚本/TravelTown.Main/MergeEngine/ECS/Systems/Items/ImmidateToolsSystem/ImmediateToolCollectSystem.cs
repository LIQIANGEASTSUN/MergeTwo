using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Items.ImmidateToolsSystem
{
	public class ImmediateToolCollectSystem : BaseToolAnalysisSystem<ImmediateToolComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public InventorySystem _inventorySystem;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[NonSerialized]
		public InventoryComponent _inventoryComponent;

		public override void InitializeSystem()
		{
		}

		public override void ProcessComponent(ImmediateToolComponent immediateToolComponent)
		{
		}

		public void HandleToolboxCollection(ImmediateToolComponent toolboxComponent)
		{
		}

		public void HandleSingleToolCollection(ImmediateToolComponent singleToolComponent)
		{
		}

		public List<IMergeItem> CalculateToolsToSpawn(ImmediateToolComponent toolboxComponent, int numberOfTools)
		{
			return null;
		}

		public void AnalyzeToolsInInventory(List<PlayerResourceEnum> unfinishedChains, Dictionary<PlayerResourceEnum, int> unfinishedItemLevelSumPerChain, Dictionary<PlayerResourceEnum, int> collectableTools)
		{
		}

		public (IMergeItem, int) GenerateSingleTool(List<WeightedTool> toolsWeights, List<WeightedToolLevel> toolLevelWeights, List<PlayerResourceEnum> unfinishedChains, Dictionary<PlayerResourceEnum, int> itemsLevelSumPerChain, Dictionary<PlayerResourceEnum, int> collectableTools)
		{
			return default((IMergeItem, int));
		}

		public void UpdateChainsAfterToolGeneration(IMergeItem toolItem, int toolLevel, ref List<PlayerResourceEnum> unfinishedChains, ref Dictionary<PlayerResourceEnum, int> itemsLevelSumPerChain, ref Dictionary<PlayerResourceEnum, int> collectableTools)
		{
		}

		public void StartToolCollectionSequence(ImmediateToolComponent toolboxComponent, List<IMergeItem> toolsToSpawn)
		{
		}

		public void AnimateToolsToInventorySequence(ImmediateToolComponent toolClicked, List<(IMergeItem tool, ResourceMultiple resourceGained)> toolsWithAnimationData)
		{
		}

		public List<(IMergeItem, ResourceMultiple)> UpdateInventoryAndResources(List<IMergeItem> toolsToSpawn)
		{
			return null;
		}

		public void SendToolboxCollectNotification(ImmediateToolComponent toolboxComponent, List<string> toolboxContent)
		{
		}

		public void StartSingleToolCollectionSequence(ImmediateToolComponent singleToolComponent, List<IMergeItem> toolsToSpawn)
		{
		}

		public void SendSingleToolCollectNotification(ImmediateToolComponent singleToolComponent)
		{
		}
	}
}
