namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(54)]
public class MergeBoardIdRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private List<MergeBoardId> <BoardIds>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<MergeBoardId> BoardIds
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MergeBoardIdRequirement() { }

	public MergeBoardIdRequirement(List<MergeBoardId> boardIds) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	private List<MergeBoardId> get_BoardIds() { }

	public virtual bool Matches(IPlayer player) { }

	[CompilerGenerated]
	private void set_BoardIds(List<MergeBoardId> value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

