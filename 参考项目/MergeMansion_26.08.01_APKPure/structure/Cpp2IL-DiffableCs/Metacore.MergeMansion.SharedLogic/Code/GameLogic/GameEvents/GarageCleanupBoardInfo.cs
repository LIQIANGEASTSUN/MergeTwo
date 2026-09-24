namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class GarageCleanupBoardInfo
{
	[CompilerGenerated]
	private GarageCleanupBoardId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<GarageCleanupBoardRowId> <Rows>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private GarageCleanupBoardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private List<GarageCleanupBoardRowId> Rows
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public GarageCleanupBoardInfo() { }

	public GarageCleanupBoardInfo(GarageCleanupBoardId boardId, List<GarageCleanupBoardRowId> rows) { }

	[CompilerGenerated]
	public GarageCleanupBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public List<GarageCleanupBoardRowId> get_Rows() { }

	[CompilerGenerated]
	private void set_ConfigKey(GarageCleanupBoardId value) { }

	[CompilerGenerated]
	private void set_Rows(List<GarageCleanupBoardRowId> value) { }

}

