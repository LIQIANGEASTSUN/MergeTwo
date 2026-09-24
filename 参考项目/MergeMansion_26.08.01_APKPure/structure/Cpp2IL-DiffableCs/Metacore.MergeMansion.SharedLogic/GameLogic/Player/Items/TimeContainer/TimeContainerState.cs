namespace GameLogic.Player.Items.TimeContainer;

[MetaSerializable]
public class TimeContainerState : IWritableTimeContainerState, ITimeContainerState
{
	[CompilerGenerated]
	private MetaDuration <Remaining>k__BackingField; //Field offset: 0x10

	private override MetacoreDuration GameLogic.Player.Items.TimeContainer.ITimeContainerState.Remaining
	{
		private get { } //Length: 12
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaDuration Remaining
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public TimeContainerState() { }

	private override MetacoreDuration GameLogic.Player.Items.TimeContainer.ITimeContainerState.get_Remaining() { }

	[CompilerGenerated]
	public MetaDuration get_Remaining() { }

	[CompilerGenerated]
	public void set_Remaining(MetaDuration value) { }

	public override void SetRemaining(MetacoreDuration remaining) { }

}

