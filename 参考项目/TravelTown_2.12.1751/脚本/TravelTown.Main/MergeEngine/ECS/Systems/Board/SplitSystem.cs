using System;
using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Tasks;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class SplitSystem : SystemBase, IItemsCombiner
	{
		public class SplitContext
		{
			public SplitComponent SplitItem { get; set; }

			public PositionComponent SplitTarget { get; set; }

			public BoardItemPosition From { get; set; }

			public BoardItemPosition To { get; set; }

			public BoardItemPosition SplitterPosition { get; set; }

			public IMergeItem TargetItem { get; set; }

			public IMergeItem PreviousItem { get; set; }

			public IMergeItem SplitterMergeItem { get; set; }

			public StackingComponent SplitterStacking { get; set; }

			public bool IsBoardFull { get; set; }

			public bool IntoSplitter { get; set; }
		}

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public TaskRequirementsSystem _taskRequirementsSystem;

		[InjectSystem]
		[NonSerialized]
		public StackingSystem _stackingSystem;

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public bool ShouldVerifySplit(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public void VerifyMerge(PositionComponent firstItem, PositionComponent secondItem)
		{
		}

		public void OnVerifySplitConfirmed(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition)
		{
		}

		public bool PerformTryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public void ResetCombine()
		{
		}

		public bool GetSplitterAndTarget(PositionComponent firstItem, PositionComponent secondItem, out SplitComponent splitItem, out PositionComponent splitTarget, out BoardItemPosition splitterPosition)
		{
			splitItem = null;
			splitTarget = null;
			splitterPosition = default(BoardItemPosition);
			return false;
		}

		public bool IsLocked(PositionComponent firstItem)
		{
			return false;
		}

		public bool TrySplitItem(SplitComponent splitItem, PositionComponent splitTarget, BoardItemPosition from, BoardItemPosition to, BoardItemPosition splitterPosition)
		{
			return false;
		}

		public bool CanBeSplit(PositionComponent splitTarget)
		{
			return false;
		}

		public bool Split(SplitComponent splitItem, PositionComponent splitTarget, BoardItemPosition from, BoardItemPosition to, BoardItemPosition splitterPosition)
		{
			return false;
		}

		public void Split(SplitComponent splitItem, PositionComponent splitTarget, BoardItemPosition from, BoardItemPosition to)
		{
		}

		public SplitContext CreateSplitContext(SplitComponent splitItem, PositionComponent splitTarget, BoardItemPosition from, BoardItemPosition to, BoardItemPosition splitterPosition)
		{
			return null;
		}

		public bool SplitStackingWithBoardFull(SplitContext context)
		{
			return false;
		}

		public bool SplitStackingWithAvailableSpace(SplitContext context)
		{
			return false;
		}

		public PositionComponent CreateEntityAt(BoardItemPosition position, IMergeItem item)
		{
			return null;
		}

		public void UpdateItemQueueAddedTimestamp(PositionComponent positionComponent, PositionComponent sourcePositionComponent)
		{
		}

		public List<ItemNotificationData> BuildAvailableSpaceNotifications(SplitContext context, PositionComponent movingItem, PositionComponent sentinelItem)
		{
			return null;
		}

		public List<ItemNotificationData> BuildBoardFullNotifications(SplitContext context, PositionComponent firstSplitItem)
		{
			return null;
		}

		public IMergeItem GetResultItem(PositionComponent firstItem, PositionComponent secondItem)
		{
			return null;
		}
	}
}
