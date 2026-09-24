namespace GameLogic.Events;

public class CaseyAndSkatieMergeBoardGenerator : IMergeBoardGenerator
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemDefinition", "visibility"})]
		public static Predicate<ValueTuple`2<ItemDefinition, ItemVisibility>> <>9__1_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemDefinition", "visibility"})]
		public static Predicate<ValueTuple`2<ItemDefinition, ItemVisibility>> <>9__1_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal bool <GetEventBoard>b__1_0(ValueTuple<ItemDefinition, ItemVisibility> tuple) { }

		internal bool <GetEventBoard>b__1_1(ValueTuple<ItemDefinition, ItemVisibility> tuple) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemDefinition", "visibility"})]
		public List<ValueTuple`2<ItemDefinition, ItemVisibility>> items; //Field offset: 0x10
		public int colsCount; //Field offset: 0x18

		public <>c__DisplayClass1_0() { }

		internal bool <GetEventBoard>b__2(Coordinate c) { }

		internal bool <GetEventBoard>b__3(Coordinate c) { }

	}

	private static readonly List<ValueTuple`2<List`1<Coordinate>, List`1<Int32>>> groups; //Field offset: 0x0

	private static CaseyAndSkatieMergeBoardGenerator() { }

	public CaseyAndSkatieMergeBoardGenerator() { }

	public override MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

	public static MergeBoard GetEventBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

}

