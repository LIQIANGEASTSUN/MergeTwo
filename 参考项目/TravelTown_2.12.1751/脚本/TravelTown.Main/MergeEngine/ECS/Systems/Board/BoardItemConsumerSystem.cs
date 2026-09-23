using System;
using System.Collections.Generic;
using DG.Tweening;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Tasks;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using MergeEngine.Signal.Board;
using MergeEngine.Signal.Tasks;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using UnityEngine;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class BoardItemConsumerSystem : SystemBase
	{
		[NonSerialized]
		public BoardSystem _boardSystem;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _configurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[InjectSystem]
		[NonSerialized]
		public TasksSystem _tasksSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		public override void InitializeSystem()
		{
		}

		public override void DisposeSystem()
		{
		}

		public bool GetTaskConsumeItems(IMergeItem preferredMergeItem, BoardItemPosition? preferredPosition, IEnumerable<ItemMultiple> itemsToConsume, out List<IdComponent> selectedItems)
		{
			selectedItems = null;
			return false;
		}

		public List<IdComponent> LockConsumeItems(IMergeItem preferredMergeItem, BoardItemPosition? preferredBoardPosition, IEnumerable<ItemMultiple> objectiveItems)
		{
			return null;
		}

		public void UnlockConsumedItems(List<IdComponent> items)
		{
		}

		public void LockItemDependencies(LockTaskDependenciesSignal signal)
		{
		}

		public void ConsumeItem(ConsumeBoardItemSignal signal)
		{
		}

		public void ConsumeMultipleItems(ConsumeMultipleBoardItemsSignal signal)
		{
		}

		public void SlideItemOut(PositionComponent positionComponent, IMergeItem item, Vector2 position, float durationMultiplier, TweenCallback completeCallback)
		{
		}
	}
}
