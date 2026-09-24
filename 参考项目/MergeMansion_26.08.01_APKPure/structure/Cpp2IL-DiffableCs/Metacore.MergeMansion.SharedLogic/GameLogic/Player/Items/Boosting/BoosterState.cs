namespace GameLogic.Player.Items.Boosting;

[MetaSerializable]
public sealed class BoosterState
{
	[CompilerGenerated]
	private F32 <BoostMultiplier>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaTime <LastCalculationTime>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F32 <SpawnBoostMultiplier>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private F32 BoostMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaTime LastCalculationTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private F32 SpawnBoostMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BoosterState() { }

	public BoosterState(F32 boostMultiplier, F32 spawnBoostMultiplier, MetaTime lastCalculationTime) { }

	[CompilerGenerated]
	public F32 get_BoostMultiplier() { }

	[CompilerGenerated]
	public MetaTime get_LastCalculationTime() { }

	[CompilerGenerated]
	public F32 get_SpawnBoostMultiplier() { }

	[CompilerGenerated]
	private void set_BoostMultiplier(F32 value) { }

	[CompilerGenerated]
	public void set_LastCalculationTime(MetaTime value) { }

	[CompilerGenerated]
	private void set_SpawnBoostMultiplier(F32 value) { }

}

