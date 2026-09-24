namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(25)]
public class BoardMergeCountRequirement : PlayerRequirement
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public MergeBoardId BoardId; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public int MergeCount; //Field offset: 0x18

	public BoardMergeCountRequirement() { }

	public BoardMergeCountRequirement(MergeBoardId boardId, int mergeCount) { }

	[CompilerGenerated]
	private bool <Matches>b__5_0(MergeBoard board) { }

	public virtual void ForceComplete(IPlayer player) { }

	public virtual bool Matches(IPlayer playerModel) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

