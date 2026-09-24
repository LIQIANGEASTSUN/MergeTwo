using JetBrains.Annotations;
using MergeEngine.Configuration;
using MergeEngine.Data;
using Merger.Audio.Attributes;
using Merger.Audio.Data;

namespace Merger.Game.Signal
{
	[SoundBoundSignal("Items Merged")]
	public class ItemsMergedSignal : ISpecificSound
	{
		public IMergeItem Item { get; }

		public IMergeItem SecondItem { get; }

		public IMergeItem CreatedItem { get; }

		[CanBeNull]
		public IMergeItem SpawnedResource { get; }

		public bool WasBubbleCreated { get; }

		public bool AnyItemLocked { get; }

		public int Level { get; }

		public int FreeTiles { get; }

		public string ActionId { get; }

		public BoardItemPosition CreatedItemPosition { get; }

		public ItemsMergedSignal(IMergeItem item, IMergeItem secondMergeItem, IMergeItem createdItem, IMergeItem spawnedResource, bool wasBubbleCreated, bool anyItemLocked, int level, int freeTiles, string actionId, BoardItemPosition createdItemPosition)
		{
		}

		public SoundArguments GetSoundArguments()
		{
			return default(SoundArguments);
		}
	}
}
