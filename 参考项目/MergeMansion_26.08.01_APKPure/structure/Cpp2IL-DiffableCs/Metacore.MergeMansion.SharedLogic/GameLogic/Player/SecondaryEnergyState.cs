namespace GameLogic.Player;

[MetaSerializable]
[Obsolete("Replaced by AuxEnergyState. Required for migration.")]
public class SecondaryEnergyState
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

	public SecondaryEnergyState() { }

	public void AddEnergyAllowAboveMax(IPlayer player, long addAmount) { }

	public void ConsumeEnergy(IPlayer player, long consumeAmount) { }

	[CompilerGenerated]
	public long get_Amount() { }

	[CompilerGenerated]
	public Nullable<MetaTime> get_NextRestoreTime() { }

	public void Refresh(IPlayer player) { }

	private void Refresh(MetacoreTime currentTime, Nullable<MetacoreDuration> unitRestoreDurationMaybe, long maxAmount) { }

	[CompilerGenerated]
	private void set_Amount(long value) { }

	[CompilerGenerated]
	private void set_NextRestoreTime(Nullable<MetaTime> value) { }

}

