namespace GameLogic.Player.Board;

[MetaSerializable]
public class BoardBubbleState
{
	[CompilerGenerated]
	private MetaTime <LastBubbleAppearance>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaTime <GraceChanceTimestamp>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F32 <GraceChance>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaTime <BehaviourChanceTimestamp>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private F32 <BehaviourChance>k__BackingField; //Field offset: 0x30

	[MetaMember(5, MetaMemberFlags::None (0))]
	public F32 BehaviourChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public MetaTime BehaviourChanceTimestamp
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public F32 GraceChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaTime GraceChanceTimestamp
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MetaTime LastBubbleAppearance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BoardBubbleState() { }

	[CompilerGenerated]
	public F32 get_BehaviourChance() { }

	[CompilerGenerated]
	public MetaTime get_BehaviourChanceTimestamp() { }

	[CompilerGenerated]
	public F32 get_GraceChance() { }

	[CompilerGenerated]
	public MetaTime get_GraceChanceTimestamp() { }

	[CompilerGenerated]
	public MetaTime get_LastBubbleAppearance() { }

	[CompilerGenerated]
	public void set_BehaviourChance(F32 value) { }

	[CompilerGenerated]
	public void set_BehaviourChanceTimestamp(MetaTime value) { }

	[CompilerGenerated]
	public void set_GraceChance(F32 value) { }

	[CompilerGenerated]
	public void set_GraceChanceTimestamp(MetaTime value) { }

	[CompilerGenerated]
	public void set_LastBubbleAppearance(MetaTime value) { }

}

