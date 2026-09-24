namespace GameLogic.Player.Items.Merging;

public class MergeFeaturesCollectionSource : IItemConfigPart<MergeFeatures>, IItemConfigPart, IHasGameConfigKey<String>, IPrioritizedConfigEntry
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass21_0
	{
		public IProducerFactory producerFactory; //Field offset: 0x10

		public <>c__DisplayClass21_0() { }

		internal ValueTuple<Int32, Int32, IItemProducer> <ToConfigData>b__0(ValueTuple<Int32, Int32, String> tuple) { }

	}

	public string ItemKey; //Field offset: 0x10
	[CompilerGenerated]
	private int <Priority>k__BackingField; //Field offset: 0x18
	public ItemVisibility ResultVisibility; //Field offset: 0x1C
	public StorageActionType StorageAction; //Field offset: 0x20
	public bool ResetTimers; //Field offset: 0x24
	public List<String> First; //Field offset: 0x28
	public List<String> Second; //Field offset: 0x30
	public List<String> Producer; //Field offset: 0x38
	public string AdditionalSpawnProducerType; //Field offset: 0x40
	public string AdditionalSpawnRandomMarker; //Field offset: 0x48
	public InitialSequenceType AdditionalSpawnInitialSequenceType; //Field offset: 0x50
	public string AdditionalSpawnInitialSequence; //Field offset: 0x58
	public List<String> AdditionalSpawnItem; //Field offset: 0x60
	public List<Int32> AdditionalSpawnWeight; //Field offset: 0x68

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public override int Priority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeFeaturesCollectionSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	[CompilerGenerated]
	public override int get_Priority() { }

	[CompilerGenerated]
	public void set_Priority(int value) { }

	public override MergeFeatures ToConfigData(IProducerFactory producerFactory) { }

}

