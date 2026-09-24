namespace GameLogic.Player.Items.TimeContainer;

[MetaSerializable]
public class TimeContainerFeatures : ITimeContainerFeatures
{
	public static readonly TimeContainerFeatures NoContainer; //Field offset: 0x0
	[CompilerGenerated]
	private bool <StoresTime>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <DefaultInitialTime>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private TimeContainerMergeBehavior <MergeBehavior>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaDuration DefaultInitialTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private override MetacoreDuration GameLogic.Player.Items.TimeContainer.ITimeContainerFeatures.DefaultInitialTime
	{
		private get { } //Length: 12
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override TimeContainerMergeBehavior MergeBehavior
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public override bool StoresTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static TimeContainerFeatures() { }

	public TimeContainerFeatures() { }

	private override MetacoreDuration GameLogic.Player.Items.TimeContainer.ITimeContainerFeatures.get_DefaultInitialTime() { }

	[CompilerGenerated]
	public MetaDuration get_DefaultInitialTime() { }

	[CompilerGenerated]
	public override TimeContainerMergeBehavior get_MergeBehavior() { }

	[CompilerGenerated]
	public override bool get_StoresTime() { }

	[CompilerGenerated]
	public void set_DefaultInitialTime(MetaDuration value) { }

	[CompilerGenerated]
	public override void set_MergeBehavior(TimeContainerMergeBehavior value) { }

	[CompilerGenerated]
	public void set_StoresTime(bool value) { }

}

