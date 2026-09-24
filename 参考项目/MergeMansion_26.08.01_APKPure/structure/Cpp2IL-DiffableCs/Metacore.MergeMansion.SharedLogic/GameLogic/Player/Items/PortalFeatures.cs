namespace GameLogic.Player.Items;

[MetaSerializable]
public class PortalFeatures : IPortalFeatures
{
	public static readonly PortalFeatures NoPortal; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsPortal>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <TargetBoardId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private PortalType <Type>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsPortal
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private MergeBoardId TargetBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override Option<MergeBoardId> TargetBoardIdOption
	{
		 get { } //Length: 92
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public override PortalType Type
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private static PortalFeatures() { }

	public PortalFeatures(PortalType type, MergeBoardId targetBoardId) { }

	private PortalFeatures() { }

	protected bool Equals(PortalFeatures other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public override bool get_IsPortal() { }

	[CompilerGenerated]
	private MergeBoardId get_TargetBoardId() { }

	public override Option<MergeBoardId> get_TargetBoardIdOption() { }

	[CompilerGenerated]
	public override PortalType get_Type() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_IsPortal(bool value) { }

	[CompilerGenerated]
	private void set_TargetBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	public void set_Type(PortalType value) { }

}

