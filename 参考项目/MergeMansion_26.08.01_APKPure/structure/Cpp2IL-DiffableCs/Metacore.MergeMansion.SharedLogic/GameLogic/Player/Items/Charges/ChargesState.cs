namespace GameLogic.Player.Items.Charges;

[MetaSerializable]
public class ChargesState
{
	private static readonly ChargesState empty; //Field offset: 0x0
	[CompilerGenerated]
	private int <Charges>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public int Charges
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static ChargesState() { }

	public ChargesState() { }

	public static ChargesState Combine(ChargesState source, ChargesState target, IChargesFeatures targetFeatures) { }

	[CompilerGenerated]
	public int get_Charges() { }

	[CompilerGenerated]
	public void set_Charges(int value) { }

}

