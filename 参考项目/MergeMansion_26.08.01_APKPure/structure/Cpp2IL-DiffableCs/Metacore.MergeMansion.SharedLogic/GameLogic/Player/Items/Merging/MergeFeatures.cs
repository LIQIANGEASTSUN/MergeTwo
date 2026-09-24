namespace GameLogic.Player.Items.Merging;

[MetaSerializable]
public class MergeFeatures : IMergeFeatures
{
	public static readonly MergeFeatures NoMerge; //Field offset: 0x0
	[CompilerGenerated]
	private IMergeMechanic <Mechanic>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IItemProducer <AdditionalSpawnProducer>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override IItemProducer AdditionalSpawnProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override IMergeMechanic Mechanic
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool Mergeable
	{
		 get { } //Length: 132
	}

	public override bool RequiresXpState
	{
		 get { } //Length: 124
	}

	private static MergeFeatures() { }

	public MergeFeatures() { }

	public MergeFeatures(IItemProducer producer) { }

	public MergeFeatures(MergeCollection collection) { }

	public MergeFeatures(IMergeMechanic mergeMechanic) { }

	public MergeFeatures(IMergeMechanic mergeMechanic, IItemProducer additionalSpawnProducer) { }

	public static MergeFeatures AlwaysInto(int type) { }

	protected bool Equals(MergeFeatures other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public override IItemProducer get_AdditionalSpawnProducer() { }

	[CompilerGenerated]
	public override IMergeMechanic get_Mechanic() { }

	public override bool get_Mergeable() { }

	public override bool get_RequiresXpState() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_AdditionalSpawnProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_Mechanic(IMergeMechanic value) { }

}

