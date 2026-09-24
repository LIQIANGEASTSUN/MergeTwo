namespace GameLogic.Player.Items.Decay;

[MetaSerializable]
public sealed class DecayState
{
	[CompilerGenerated]
	private MetaTime <EstimatedTime>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaTime <StartTime>k__BackingField; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDuration relativeTimeSpendOnDecay; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	private MetaTime lastTimeAddTime; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaTime EstimatedTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaTime StartTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public DecayState() { }

	public DecayState(DecayState existingState) { }

	public DecayState(MetaTime startTimeInMilliseconds) { }

	public void AddAbsoluteTimeSpendOnDecay(MetaTime timestamp) { }

	public void AddRelativeTimeSpendOnDecay(MetaDuration toAdd, MetaTime timestamp) { }

	public void CalculateNextEstimatedDecayEndTime(MetacoreDuration lifetime, F32 boostFactor, MetaTime currentTime) { }

	[CompilerGenerated]
	public MetaTime get_EstimatedTime() { }

	[CompilerGenerated]
	public MetaTime get_StartTime() { }

	public MetaDuration RemainingDuration(MetaTime timestamp) { }

	public MetaDuration RemainingDuration() { }

	[CompilerGenerated]
	public void set_EstimatedTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_StartTime(MetaTime value) { }

	public void SkipGameTime(MetacoreDuration numMillisecond) { }

}

