namespace GameLogic.Config;

[MetaSerializable]
public class SpeedUpCostBehavior
{
	[CompilerGenerated]
	private F64 <SecondsPerGem>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F64 <FirstDiscount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F64 <FirstDiscountTime>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private F64 <SecondDiscount>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private F64 <SecondDiscountTime>k__BackingField; //Field offset: 0x30

	[MetaMember(2, MetaMemberFlags::None (0))]
	public F64 FirstDiscount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public F64 FirstDiscountTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public F64 SecondDiscount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public F64 SecondDiscountTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public F64 SecondsPerGem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public SpeedUpCostBehavior() { }

	public SpeedUpCostBehavior(F64 secondsPerGem, F64 firstDiscount, F64 firstDiscountTime, F64 secondDiscount, F64 secondDiscountTime) { }

	[CompilerGenerated]
	public F64 get_FirstDiscount() { }

	[CompilerGenerated]
	public F64 get_FirstDiscountTime() { }

	[CompilerGenerated]
	public F64 get_SecondDiscount() { }

	[CompilerGenerated]
	public F64 get_SecondDiscountTime() { }

	[CompilerGenerated]
	public F64 get_SecondsPerGem() { }

	[CompilerGenerated]
	public void set_FirstDiscount(F64 value) { }

	[CompilerGenerated]
	public void set_FirstDiscountTime(F64 value) { }

	[CompilerGenerated]
	public void set_SecondDiscount(F64 value) { }

	[CompilerGenerated]
	public void set_SecondDiscountTime(F64 value) { }

	[CompilerGenerated]
	public void set_SecondsPerGem(F64 value) { }

}

