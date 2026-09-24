namespace Events;

public class IgnatiousEventMergeBoardGenerator : IMergeBoardGenerator
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<BoardSlot, Single> <>9__8_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal float <GetRandomSlot>b__8_0(BoardSlot item) { }

	}

	private class BoardSlot
	{
		public int ItemId; //Field offset: 0x10
		public ItemVisibility ItemVisibility; //Field offset: 0x14
		public int X; //Field offset: 0x18
		public int Y; //Field offset: 0x1C
		public float Probability; //Field offset: 0x20

		public BoardSlot(int itemId, ItemVisibility itemVisibility, int x, int y, float probability) { }

	}

	private const int TreasureCount = 8; //Field offset: 0x0
	private const float MatchMultiplier = 0.5; //Field offset: 0x0
	private const float InitialChance = 1; //Field offset: 0x0

	public IgnatiousEventMergeBoardGenerator() { }

	private static void AddItem(int itemId, ItemVisibility itemVisibility, BoardSlot[2] board2d, RandomPCG random) { }

	public override MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

	public static MergeBoard GetEventBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

	private static BoardSlot GetRandomSlot(List<BoardSlot> boardSlots, RandomPCG random) { }

	private static BoardSlot GetSlotAt(BoardSlot[2] slots, int x, int y) { }

	private static List<ValueTuple`2<ItemDefinition, ItemVisibility>> MakeBoard(RandomPCG random, IMergeMansionGameConfig gameConfig) { }

	private static void UpgradeItem(IList<ValueTuple`2<ItemDefinition, ItemVisibility>> board, int x, int y, IMergeMansionGameConfig gameConfig) { }

}

