namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class FishingRodState
{
	[CompilerGenerated]
	private int <WaterDropletCount>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Item>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private Nullable<WeightCategory> <WeightCategory>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<F32> <Weight>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <TapCount>k__BackingField; //Field offset: 0x28

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int TapCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public int WaterDropletCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public Nullable<F32> Weight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public Nullable<WeightCategory> WeightCategory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private FishingRodState() { }

	public FishingRodState(int waterDropletCount, int item, Nullable<WeightCategory> weightCategory, Nullable<F32> weight) { }

	[CompilerGenerated]
	public int get_Item() { }

	[CompilerGenerated]
	public int get_TapCount() { }

	[CompilerGenerated]
	public int get_WaterDropletCount() { }

	[CompilerGenerated]
	public Nullable<F32> get_Weight() { }

	[CompilerGenerated]
	public Nullable<WeightCategory> get_WeightCategory() { }

	[CompilerGenerated]
	public void set_Item(int value) { }

	[CompilerGenerated]
	public void set_TapCount(int value) { }

	[CompilerGenerated]
	public void set_WaterDropletCount(int value) { }

	[CompilerGenerated]
	public void set_Weight(Nullable<F32> value) { }

	[CompilerGenerated]
	public void set_WeightCategory(Nullable<WeightCategory> value) { }

	public bool ShouldProduceItem() { }

}

