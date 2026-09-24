namespace GameLogic.Player;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializable]
public class AuxEnergyState
{
	[CompilerGenerated]
	private long <Amount>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Nullable<MetaTime> <NextRestoreTime>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private long Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private Nullable<MetaTime> NextRestoreTime
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public AuxEnergyState() { }

	public AuxEnergyState(SecondaryEnergyState secondaryEnergyState) { }

	public void AddEnergyAllowAboveMax(IPlayer player, EnergyType energyType, long addAmount) { }

	public void ConsumeEnergy(IPlayer player, EnergyType energyType, long consumeAmount) { }

	[CompilerGenerated]
	public long get_Amount() { }

	[CompilerGenerated]
	public Nullable<MetaTime> get_NextRestoreTime() { }

	public void Refresh(IPlayer player, EnergyType energyType) { }

	[CompilerGenerated]
	private void set_Amount(long value) { }

	[CompilerGenerated]
	private void set_NextRestoreTime(Nullable<MetaTime> value) { }

}

