namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(26)]
public class BoardItemDiscoveredRequirement : PlayerRequirement
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	public MergeBoardId BoardId; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public int Item; //Field offset: 0x18

	public BoardItemDiscoveredRequirement() { }

	public BoardItemDiscoveredRequirement(MergeBoardId boardId, int item) { }

	[CompilerGenerated]
	private bool <Matches>b__5_0(MergeBoard board) { }

	public virtual void ForceComplete(IPlayer player) { }

	public virtual bool Matches(IPlayer playerModel) { }

	public virtual string ToString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

