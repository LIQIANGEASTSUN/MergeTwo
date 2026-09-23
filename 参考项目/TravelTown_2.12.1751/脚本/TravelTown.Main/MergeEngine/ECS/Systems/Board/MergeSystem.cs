using System;
using System.Runtime.CompilerServices;
using Framework.Core.Services.Backend.Data.Payload;
using MergeEngine.Configuration;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model;
using MergeEngine.Model.Configuration;
using Merger.Bubbles.ECS.Systems;
using Merger.Meteor.Compatibility;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.NotificationFactory;
using Merger.Services.User;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class MergeSystem : SystemBase, IItemsCombiner
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IRandomNumberModel _randomNumberModel;

		[Inject]
		[NonSerialized]
		public INotificationDataFactory _notificationDataFactory;

		[Inject]
		[NonSerialized]
		public IUserProfileService _userProfileService;

		[Inject]
		[NonSerialized]
		public IMeteorService _meteorService;

		[InjectSystem]
		[NonSerialized]
		public BoardSystem _boardSystem;

		[InjectSystem]
		[NonSerialized]
		public OperationTrackingSystem _operationTrackingSystem;

		[InjectSystem]
		[NonSerialized]
		public StackingSystem _stackingSystem;

		[NonSerialized]
		public ConsumableDropSystem _consumableDropSystem;

		[NonSerialized]
		public BubbledItemSystem _bubbledItemsSystem;

		[NonSerialized]
		public PlayerItemsCollectionSystem _playerItemsCollectionSystem;

		[NonSerialized]
		public CollectionBookSystem _collectionBookSystem;

		public event Action<IMergeItem, BoardItemPosition, IMergeItem, IMergeItem> ItemMerged
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public override void InitializeSystem()
		{
		}

		public bool CanCombineItems(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public bool TryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public bool ShouldVerifyMerge(PositionComponent firstItem, PositionComponent secondItem)
		{
			return false;
		}

		public void VerifyMerge(PositionComponent firstItem, PositionComponent secondItem)
		{
		}

		public void OnVerifyMergeConfirmed(BoardItemPosition firstItemPosition, BoardItemPosition secondItemPosition)
		{
		}

		public bool PerformTryCombineItems(PositionComponent firstItem, PositionComponent secondItem, IItemsCombiner.OnItemsCombined callback)
		{
			return false;
		}

		public void ResetCombine()
		{
		}

		public bool TryMergeItems(MergeComponent firstItem, MergeComponent secondItem, BoardItemPosition newPosition)
		{
			return false;
		}

		public void Merge(MergeComponent firstItem, MergeComponent secondItem, BoardItemPosition newPosition, IMergeItem newItem, bool isSpecificMerge = false)
		{
		}

		public (bool, ItemNotificationData, ItemNotificationData) HandleStackingJokers(MergeComponent firstItem, IMergeItem firstMergeItem, MergeComponent secondItem, IMergeItem secondMergeItem, ref BoardItemPosition boardItemPosition)
		{
			return default((bool, ItemNotificationData, ItemNotificationData));
		}

		public IMergeItem TrySpawnConsumable(PositionComponent mergedItemPosition, out Entity consumableEntity)
		{
			consumableEntity = null;
			return null;
		}

		public void HandleFireMergedFloatingText(BoardItemPosition position)
		{
		}

		public void HandleMergeItemCapacity<TComponent>(Entity firstMerged, Entity secondMerged, Entity newEntity) where TComponent : ComponentBase, ITimeCycleComponent
		{
		}

		public bool CanMergeSame(MergeComponent item1, MergeComponent item2)
		{
			return false;
		}

		public bool CanMerge(MergeComponent item1, MergeComponent item2)
		{
			return false;
		}

		public bool ItemsNotMergeLocked(MergeComponent item1, MergeComponent item2)
		{
			return false;
		}

		public bool ItemsNotMeteorLocked(MergeComponent item1, MergeComponent item2)
		{
			return false;
		}

		public void UpdateItemTimestamps(MergeComponent firstItem, MergeComponent secondItem, Entity mergedItemEntity)
		{
		}

		public IMergeItem GetResultItem(MergeComponent firstMergeItem, MergeComponent secondMergeItem)
		{
			return null;
		}

		public IMergeItem GetAnyItemOnlyResult(MergeComponent firstItem, MergeComponent secondItem)
		{
			return null;
		}

		public IMergeItem GetSameItemResult(MergeComponent firstItem, MergeComponent secondItem)
		{
			return null;
		}

		public IMergeItem GetSpecificItemResult(MergeComponent firstItem, MergeComponent secondItem)
		{
			return null;
		}
	}
}
