namespace GameLogic.Player.Items.Charges;

[MetaSerializable]
public class ChargesFeatures : IChargesFeatures
{
	public static readonly ChargesFeatures NoCharges; //Field offset: 0x0
	[CompilerGenerated]
	private bool <SupportsCharges>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <DefaultInitialCharges>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private ChargeMergeBehavior <MergeBehavior>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int DefaultInitialCharges
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override ChargeMergeBehavior MergeBehavior
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool SupportsCharges
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static ChargesFeatures() { }

	public ChargesFeatures() { }

	public ChargesFeatures(bool supportsCharges, int defaultInitialCharges, ChargeMergeBehavior mergeBehavior) { }

	protected bool Equals(ChargesFeatures other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public override int get_DefaultInitialCharges() { }

	[CompilerGenerated]
	public override ChargeMergeBehavior get_MergeBehavior() { }

	[CompilerGenerated]
	public override bool get_SupportsCharges() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_DefaultInitialCharges(int value) { }

	[CompilerGenerated]
	private void set_MergeBehavior(ChargeMergeBehavior value) { }

	[CompilerGenerated]
	private void set_SupportsCharges(bool value) { }

	public static ChargesFeatures WithCharges(int number, ChargeMergeBehavior mergeBehavior) { }

}

