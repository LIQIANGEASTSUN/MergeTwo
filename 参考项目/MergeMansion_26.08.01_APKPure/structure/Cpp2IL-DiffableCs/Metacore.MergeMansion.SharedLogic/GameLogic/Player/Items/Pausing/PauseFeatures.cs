namespace GameLogic.Player.Items.Pausing;

[MetaSerializable]
public class PauseFeatures
{
	public static readonly PauseFeatures NoPause; //Field offset: 0x0
	public static readonly PauseFeatures OnlyDecayCanBePaused; //Field offset: 0x8
	public static readonly PauseFeatures OnlyActivationCanBePaused; //Field offset: 0x10
	public static readonly PauseFeatures BoosterWithPause; //Field offset: 0x18
	[CompilerGenerated]
	private bool <SupportsPause>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <DecayCanBePaused>k__BackingField; //Field offset: 0x11
	[CompilerGenerated]
	private bool <ActivationCanBePaused>k__BackingField; //Field offset: 0x12
	[CompilerGenerated]
	private bool <BoostingCanBePaused>k__BackingField; //Field offset: 0x13

	[MetaMember(3, MetaMemberFlags::None (0))]
	public bool ActivationCanBePaused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public bool BoostingCanBePaused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public bool DecayCanBePaused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public bool SupportsPause
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static PauseFeatures() { }

	public PauseFeatures() { }

	[CompilerGenerated]
	public bool get_ActivationCanBePaused() { }

	[CompilerGenerated]
	public bool get_BoostingCanBePaused() { }

	[CompilerGenerated]
	public bool get_DecayCanBePaused() { }

	[CompilerGenerated]
	public bool get_SupportsPause() { }

	[CompilerGenerated]
	public void set_ActivationCanBePaused(bool value) { }

	[CompilerGenerated]
	public void set_BoostingCanBePaused(bool value) { }

	[CompilerGenerated]
	public void set_DecayCanBePaused(bool value) { }

	[CompilerGenerated]
	public void set_SupportsPause(bool value) { }

}

