using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.Model;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model.Board;
using Merger.MergeBoardQueue.Data;
using Merger.MergeBoardQueue.Utils;
using Merger.Rewards.Signals;

namespace Merger.MergeBoardQueue.Models
{
	public class BoardQueueModel : ModelBase, IBoardQueueModel, IBoardQueueSyncModel, IBoardEventQueueModel
	{
		[NonSerialized]
		public LinkedList<QueuedItem> _frontItemsQueue;

		[NonSerialized]
		public LinkedList<QueuedItem> _backItemsQueue;

		[NonSerialized]
		public HashSet<string> _dequeuedItemsUUIDs;

		[NonSerialized]
		public QueuedItemsComparer _queuedItemsComparer;

		[NonSerialized]
		public bool _isFirstLoad;

		[NonSerialized]
		public int _realQueueCount;

		[NonSerialized]
		public QueuedItem _realHeadItem;

		[NonSerialized]
		public readonly MutableBindableProperty<int> _simulatedQueueCount;

		[NonSerialized]
		public readonly MutableBindableProperty<QueuedItem> _simulatedHeadItem;

		[NonSerialized]
		public readonly List<QueuedItem> _pendingEnqueueItems;

		public BindableProperty<int> BoardEventQueueCount => null;

		public BindableProperty<QueuedItem> HeadItem => null;

		public int Count => 0;

		public override void InitializeModel()
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void OnRewardFlyAnimationStarted(RewardsFlyAnimationStartedSignal signal)
		{
		}

		public QueuedItem Peek()
		{
			return null;
		}

		public QueuedItem Dequeue()
		{
			return null;
		}

		public void ExtractItem(QueuedItem item)
		{
		}

		public QueuedItem FindNewestInQueue(string itemId)
		{
			return null;
		}

		public IEnumerable<QueuedItem> GetAllItems()
		{
			return null;
		}

		public void Enqueue(QueuedItem queuedItem)
		{
		}

		public QueuedItem EnqueueItem(IMergeItem mergeItem, string uuidInBoardQueue, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source)
		{
			return null;
		}

		public QueuedItem EnqueueItemPendingSync(IMergeItem mergeItem, string uuidInBoardQueue, long enqueuingTimestamp, BoardQueueOrder boardQueueOrder, ResourceSource source)
		{
			return null;
		}

		public void SyncPendingEnqueuedItem(string uuid)
		{
		}

		public void LoadFromBackendState(List<QueuedItem> backendItems)
		{
		}

		public LinkedListNode<QueuedItem> HeadOfQueue()
		{
			return null;
		}

		public void EnqueueToSpecificQueue(LinkedList<QueuedItem> queue, QueuedItem queuedItem)
		{
		}

		public void UpdateBindableProperties()
		{
		}

		public void SyncWithState()
		{
		}

		public void SetBoardEventQueue(BoardQueueBackendState boardEventQueueState)
		{
		}
	}
}
