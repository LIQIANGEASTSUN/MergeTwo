namespace GameLogic.Player;

[MetaSerializable]
public sealed class OverrideSpawnItemsStatus
{
	[MetaSerializable]
	internal class SpawnHistory
	{
		[CompilerGenerated]
		private long <AllTimeTotal>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private List<MetaTime> <RecentRecords>k__BackingField; //Field offset: 0x18

		[MetaMember(1, MetaMemberFlags::None (0))]
		public long AllTimeTotal
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		[MetaMember(2, MetaMemberFlags::None (0))]
		public List<MetaTime> RecentRecords
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			 set { } //Length: 8
		}

		public SpawnHistory() { }

		[CompilerGenerated]
		public long get_AllTimeTotal() { }

		[CompilerGenerated]
		public List<MetaTime> get_RecentRecords() { }

		[CompilerGenerated]
		public void set_AllTimeTotal(long value) { }

		[CompilerGenerated]
		public void set_RecentRecords(List<MetaTime> value) { }

	}

	private const int SpawnHistoryLength = 30; //Field offset: 0x0
	[CompilerGenerated]
	private MetaDictionary<Int32, SpawnHistory> <RecordedSpawns>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, SpawnHistory> RecordedSpawns
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public OverrideSpawnItemsStatus() { }

	[CompilerGenerated]
	private MetaDictionary<Int32, SpawnHistory> get_RecordedSpawns() { }

	[CompilerGenerated]
	private void set_RecordedSpawns(MetaDictionary<Int32, SpawnHistory> value) { }

	public IEnumerable<MetaTime> SpawnHistoryFor(int itemId) { }

	public void TrackedItemEraseSpawns(int itemId) { }

	public void TrackedItemRecordSpawn(int itemId, MetacoreTime timestamp) { }

	private void TrackedItemRecordSpawn(SpawnHistory record, MetaTime timestamp) { }

	public long TrackedItemSpawnAllTimeTotal(int itemId) { }

	public IEnumerable<MetaTime> TrackedItemSpawns(int itemId) { }

	public void TrackedItemUndoLastRecordSpawn(int itemId) { }

}

