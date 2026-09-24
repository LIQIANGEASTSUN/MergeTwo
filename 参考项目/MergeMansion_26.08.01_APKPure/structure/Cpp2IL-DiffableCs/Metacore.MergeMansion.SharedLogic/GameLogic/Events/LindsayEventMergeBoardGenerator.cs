namespace GameLogic.Events;

public class LindsayEventMergeBoardGenerator : IMergeBoardGenerator
{
	private static readonly List<ValueTuple`2<List`1<Coordinate>, List`1<Int32>>> groups; //Field offset: 0x0

	private static LindsayEventMergeBoardGenerator() { }

	public LindsayEventMergeBoardGenerator() { }

	public static MergeBoard CreateEventBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

	public override MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

}

