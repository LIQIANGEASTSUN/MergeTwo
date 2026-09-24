namespace Code.GameLogic.Player.Board;

[Extension]
public static class IWritableCustomMergeBoardsStateExtensions
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass0_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10

		public <>c__DisplayClass0_0() { }

		internal ValueTuple<ItemDefinition, ItemVisibility> <AddMergeBoard>b__0(BoardCell cell) { }

	}


	[Extension]
	public static void AddMergeBoard(IWritableCustomMergeBoardsState state, IPlayer player, MergeBoardId mergeBoardId) { }

	[Extension]
	public static void RemoveMergeBoard(IWritableCustomMergeBoardsState state, MergeBoardId mergeBoardId) { }

}

