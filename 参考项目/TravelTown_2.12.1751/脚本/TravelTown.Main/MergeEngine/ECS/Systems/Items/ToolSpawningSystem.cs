using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.Metagame.ECS;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class ToolSpawningSystem : BaseToolAnalysisSystem<ToolSpawningComponent>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public new IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public new MetagameSystem _metagameSystem;

		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		public override void ProcessComponent(ToolSpawningComponent toolSpawningComponent)
		{
		}

		public void SpawnTool(ToolSpawningComponent toolSpawningComponent)
		{
		}

		public Dictionary<PlayerResourceEnum, int> CalculateCurrentToolAmounts(Dictionary<PlayerResourceEnum, int> collectableTools)
		{
			return null;
		}

		public void CreateTool(IMergeGraphItem toolGraph, ToolSpawningComponent origin, bool isUnfinishedChain, int currentLevelSum)
		{
		}
	}
}
