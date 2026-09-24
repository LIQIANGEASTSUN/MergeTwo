namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public struct GarageCleanupBoardRowId : IEquatable<GarageCleanupBoardRowId>
{
	[CompilerGenerated]
	private GarageCleanupBoardId <BoardId>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private int <Row>k__BackingField; //Field offset: 0x8

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private GarageCleanupBoardId BoardId
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Row
	{
		[CompilerGenerated]
		[IsReadOnly]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupBoardRowId(GarageCleanupBoardId boardId, int row) { }

	public override bool Equals(GarageCleanupBoardRowId other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	[IsReadOnly]
	public GarageCleanupBoardId get_BoardId() { }

	[CompilerGenerated]
	[IsReadOnly]
	public int get_Row() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_BoardId(GarageCleanupBoardId value) { }

	[CompilerGenerated]
	private void set_Row(int value) { }

	public virtual string ToString() { }

}

