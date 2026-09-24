namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class WeightState
{
	[CompilerGenerated]
	private F32 <Weight>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private WeightCategory <WeightCategory>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <RodUsed>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	public int RodUsed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public F32 Weight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public WeightCategory WeightCategory
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private WeightState() { }

	public WeightState(F32 weight, WeightCategory weightCategory, int rodUsed) { }

	[CompilerGenerated]
	public int get_RodUsed() { }

	[CompilerGenerated]
	public F32 get_Weight() { }

	[CompilerGenerated]
	public WeightCategory get_WeightCategory() { }

	[CompilerGenerated]
	public void set_RodUsed(int value) { }

	[CompilerGenerated]
	public void set_Weight(F32 value) { }

	[CompilerGenerated]
	public void set_WeightCategory(WeightCategory value) { }

}

