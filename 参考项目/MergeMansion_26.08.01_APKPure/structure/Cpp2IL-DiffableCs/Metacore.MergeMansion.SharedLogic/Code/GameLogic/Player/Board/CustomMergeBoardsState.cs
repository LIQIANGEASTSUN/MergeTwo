namespace Code.GameLogic.Player.Board;

[MetaSerializable]
public class CustomMergeBoardsState : ICustomMergeBoardsState, IWritableCustomMergeBoardsState
{
	[CompilerGenerated]
	private SortedDictionary<MergeBoardId, MergeBoard> <MergeBoards>k__BackingField; //Field offset: 0x10

	private override IReadOnlyDictionary<MergeBoardId, MergeBoard> Code.GameLogic.Player.Board.ICustomMergeBoardsState.MergeBoards
	{
		private get { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override SortedDictionary<MergeBoardId, MergeBoard> MergeBoards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public CustomMergeBoardsState() { }

	private override IReadOnlyDictionary<MergeBoardId, MergeBoard> Code.GameLogic.Player.Board.ICustomMergeBoardsState.get_MergeBoards() { }

	[CompilerGenerated]
	public override SortedDictionary<MergeBoardId, MergeBoard> get_MergeBoards() { }

	[CompilerGenerated]
	private void set_MergeBoards(SortedDictionary<MergeBoardId, MergeBoard> value) { }

}

