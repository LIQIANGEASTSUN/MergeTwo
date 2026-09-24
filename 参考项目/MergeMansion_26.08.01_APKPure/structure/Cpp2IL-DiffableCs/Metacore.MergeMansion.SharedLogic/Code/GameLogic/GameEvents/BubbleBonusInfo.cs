namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class BubbleBonusInfo
{
	[CompilerGenerated]
	private EnergyType <DivisorEnergyType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <DivisorOverride>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private bool <DivisorEnabled>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool DivisorEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private EnergyType DivisorEnergyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private F32 DivisorOverride
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubbleBonusInfo() { }

	public BubbleBonusInfo(EnergyType divisorEnergyType, F32 divisorOverride, bool divisorEnabled) { }

	[CompilerGenerated]
	public bool get_DivisorEnabled() { }

	[CompilerGenerated]
	public EnergyType get_DivisorEnergyType() { }

	[CompilerGenerated]
	public F32 get_DivisorOverride() { }

	[CompilerGenerated]
	private void set_DivisorEnabled(bool value) { }

	[CompilerGenerated]
	private void set_DivisorEnergyType(EnergyType value) { }

	[CompilerGenerated]
	private void set_DivisorOverride(F32 value) { }

}

