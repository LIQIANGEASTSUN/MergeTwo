namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(39)]
public class ActiveTasksCanBeCompletedRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private int <RequiredAmount>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private int RequiredAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ActiveTasksCanBeCompletedRequirement() { }

	public ActiveTasksCanBeCompletedRequirement(int amount) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	private int get_RequiredAmount() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_RequiredAmount(int value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

