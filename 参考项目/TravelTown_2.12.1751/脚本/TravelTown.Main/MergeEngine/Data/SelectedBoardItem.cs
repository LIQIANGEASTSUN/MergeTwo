using MergeEngine.Configuration;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;

namespace MergeEngine.Data
{
	public class SelectedBoardItem
	{
		public IMergeItem MergeItem { get; }

		public ITimeLocked TimeLocked { get; }

		public BoardItemPosition BoardItemPosition { get; }

		public ILocked Locked { get; }

		public ICollectable Collectable { get; }

		public IItemSpawning ItemSpawning { get; }

		public IdComponent Id { get; }

		public ExpendableComponent Expendable { get; }

		public VisualComponent VisualComponent { get; }

		public TimeDurationComponent TimeDurationComponent { get; }

		public ProducerComponent ProducerComponent { get; }

		public SpawnerComponent SpawnerComponent { get; }

		public SelectedBoardItem(IMergeItem mergeItem, Entity entity)
		{
		}
	}
}
