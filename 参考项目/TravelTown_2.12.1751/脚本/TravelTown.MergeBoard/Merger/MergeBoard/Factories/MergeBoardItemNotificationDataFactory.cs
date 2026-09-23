using System;
using ContextualizedECS;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Model.Collection;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Analytics.Models;
using Merger.MergeBoard.Data.Payload;
using Zenject;

namespace Merger.MergeBoard.Factories
{
	public class MergeBoardItemNotificationDataFactory : IMergeBoardItemNotificationDataFactory
	{
		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeItemStateChangedModel _mergeItemStateChangedModel;

		[Inject]
		[NonSerialized]
		public IItemAnalyticsDataModel _itemAnalyticsDataModel;

		public T CreateFullItemNotification<T>(Entity entity, string action, string destination = null) where T : MergeBoardItemNotificationData, new()
		{
			return null;
		}

		public void TryAddLockedData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddTimeLimitedData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddChargeableData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddExpendableData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddCollectionState<T>(IMergeItem item, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddTimeCycleData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddTimeLockData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddFeedingCombinationData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}

		public void TryAddDynamicItemConfigData<T>(Entity entity, T data) where T : MergeBoardItemNotificationData, new()
		{
		}
	}
}
