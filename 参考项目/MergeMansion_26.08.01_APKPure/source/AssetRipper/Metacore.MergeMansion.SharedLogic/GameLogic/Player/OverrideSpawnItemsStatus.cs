using System.Collections.Generic;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	public sealed class OverrideSpawnItemsStatus
	{
		[MetaSerializable]
		public class SpawnHistory
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public long AllTimeTotal { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public List<MetaTime> RecentRecords { get; set; }
		}

		public const int SpawnHistoryLength = 30;

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDictionary<int, SpawnHistory> RecordedSpawns { get; set; }

		public long TrackedItemSpawnAllTimeTotal(int itemId)
		{
			return 0L;
		}

		public IEnumerable<MetaTime> TrackedItemSpawns(int itemId)
		{
			return null;
		}

		public void TrackedItemRecordSpawn(int itemId, MetacoreTime timestamp)
		{
		}

		public void TrackedItemUndoLastRecordSpawn(int itemId)
		{
		}

		public void TrackedItemRecordSpawn(SpawnHistory record, MetaTime timestamp)
		{
		}

		public void TrackedItemEraseSpawns(int itemId)
		{
		}

		public IEnumerable<MetaTime> SpawnHistoryFor(int itemId)
		{
			return null;
		}
	}
}
