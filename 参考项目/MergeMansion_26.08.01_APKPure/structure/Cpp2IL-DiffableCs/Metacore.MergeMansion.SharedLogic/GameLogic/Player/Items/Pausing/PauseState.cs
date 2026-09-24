namespace GameLogic.Player.Items.Pausing;

[MetaSerializable]
public class PauseState
{
	[CompilerGenerated]
	private bool <DecayPaused>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <ActivationPaused>k__BackingField; //Field offset: 0x11

	[MetaMember(2, MetaMemberFlags::None (0))]
	public bool ActivationPaused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public bool DecayPaused
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public PauseState() { }

	[CompilerGenerated]
	public bool get_ActivationPaused() { }

	[CompilerGenerated]
	public bool get_DecayPaused() { }

	[CompilerGenerated]
	public void set_ActivationPaused(bool value) { }

	[CompilerGenerated]
	public void set_DecayPaused(bool value) { }

}

