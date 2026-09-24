namespace Events;

public interface IMergeBoardGenerator
{

	public MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime) { }

}

