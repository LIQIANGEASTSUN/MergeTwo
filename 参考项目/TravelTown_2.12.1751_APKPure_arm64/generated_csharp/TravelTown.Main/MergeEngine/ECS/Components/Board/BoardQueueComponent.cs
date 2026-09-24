using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.State;
using Merger.Game.Data;
using Merger.Game.Util;

namespace MergeEngine.ECS.Components.Board
{
	[CacheAs(new Type[] { typeof(IWipeableComponent) })]
	public class BoardQueueComponent : RemoteLoadedComponent<SerializedBoardQueueComponent, List<QueuedItem>>, IWipeableComponent, IComponentBase
	{
		[NonSerialized]
		public LinkedList<QueuedItem> _frontItemsQueue;

		[NonSerialized]
		public LinkedList<QueuedItem> _backItemsQueue;

		[NonSerialized]
		public HashSet<string> _dequeuedItemsUUIDs;

		[NonSerialized]
		public HashSet<string> _previousStateUUIDs;

		[NonSerialized]
		public QueuedItemsComparer _queuedItemsComparer;

		[NonSerialized]
		public bool _isLoaded;

		[NonSerialized]
		public readonly MutableBindableProperty<List<QueuedItem>> _queuedItems;

		public override string ComponentKey => null;

		public int Count => 0;

		public MutableBindableProperty<bool> IsQueueItemLoading { get; }

		public BindableProperty<List<QueuedItem>> QueuedItems => null;

		public bool IsLoaded => false;

		public BoardQueueComponent(Entity entity)
			: base((Entity)null)
		{
		}

		public override void LoadComponent(List<QueuedItem> componentData)
		{
		}

		public void Wipe()
		{
		}

		public void Enqueue(QueuedItem queuedItem)
		{
		}

		public QueuedItem Dequeue()
		{
			return null;
		}

		public bool RemoveElement(QueuedItem itemToRemove)
		{
			return false;
		}

		public QueuedItem Peek()
		{
			return null;
		}

		public List<string> TrackPreviousState(List<QueuedItem> queuedItems)
		{
			return null;
		}

		public void ClearPreviousState()
		{
		}

		public List<QueuedItem> ToList()
		{
			return null;
		}

		public IEnumerable<T> Select<T>(Func<QueuedItem, T> selector)
		{
			return null;
		}

		public bool Any(Func<QueuedItem, bool> predicate)
		{
			return false;
		}

		public bool All(Func<QueuedItem, bool> predicate)
		{
			return false;
		}

		public int CountById(string itemId)
		{
			return 0;
		}

		public LinkedListNode<QueuedItem> HeadOfQueue()
		{
			return null;
		}

		public void NotifyQueueChanged()
		{
		}

		public void InsertSorted(LinkedList<QueuedItem> queue, QueuedItem queuedItem)
		{
		}

		public static HashSet<string> CollectIds(List<QueuedItem> queuedItems)
		{
			return null;
		}
	}
}
