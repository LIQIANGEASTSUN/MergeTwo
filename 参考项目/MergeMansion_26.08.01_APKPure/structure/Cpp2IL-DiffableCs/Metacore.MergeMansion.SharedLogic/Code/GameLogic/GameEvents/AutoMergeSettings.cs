namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class AutoMergeSettings : GameConfigKeyValue<AutoMergeSettings>
{
	[CompilerGenerated]
	private bool <DefaultEnabledState>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private float <AutoMergeInterval>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private float <AutoMergeSpawnCooldown>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public float AutoMergeInterval
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public float AutoMergeSpawnCooldown
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public bool DefaultEnabledState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public AutoMergeSettings() { }

	[CompilerGenerated]
	public float get_AutoMergeInterval() { }

	[CompilerGenerated]
	public float get_AutoMergeSpawnCooldown() { }

	[CompilerGenerated]
	public bool get_DefaultEnabledState() { }

	[CompilerGenerated]
	public void set_AutoMergeInterval(float value) { }

	[CompilerGenerated]
	public void set_AutoMergeSpawnCooldown(float value) { }

	[CompilerGenerated]
	public void set_DefaultEnabledState(bool value) { }

}

