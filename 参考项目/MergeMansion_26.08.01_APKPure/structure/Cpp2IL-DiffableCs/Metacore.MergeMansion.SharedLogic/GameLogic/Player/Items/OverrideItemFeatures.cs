namespace GameLogic.Player.Items;

[MetaSerializable]
public class OverrideItemFeatures
{
	[CompilerGenerated]
	private Nullable<MetaDuration> <TimeContainerInitialTime>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Nullable<Int32> <ChargesInitialCharges>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public Nullable<Int32> ChargesInitialCharges
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public Nullable<MetaDuration> TimeContainerInitialTime
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public OverrideItemFeatures() { }

	public OverrideItemFeatures(Nullable<MetaDuration> timeContainerInitialTime, Nullable<Int32> chargesInitialCharges) { }

	public static OverrideItemFeatures FromString(string str) { }

	[CompilerGenerated]
	public Nullable<Int32> get_ChargesInitialCharges() { }

	[CompilerGenerated]
	public Nullable<MetaDuration> get_TimeContainerInitialTime() { }

	private static int ParseCharges(string value) { }

	private static MetaDuration ParseTimeContainerTime(string value) { }

	[CompilerGenerated]
	public void set_ChargesInitialCharges(Nullable<Int32> value) { }

	[CompilerGenerated]
	public void set_TimeContainerInitialTime(Nullable<MetaDuration> value) { }

}

