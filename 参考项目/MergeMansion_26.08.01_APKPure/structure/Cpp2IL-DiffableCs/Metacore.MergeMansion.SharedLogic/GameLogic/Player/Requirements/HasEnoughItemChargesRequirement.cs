namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(64)]
public sealed class HasEnoughItemChargesRequirement : PlayerRequirement, IValidatable
{
	[CompilerGenerated]
	private int <RequiredCharges>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeItemFilterComponent <FilterComponent>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MergeItemFilterComponent FilterComponent
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int RequiredCharges
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private HasEnoughItemChargesRequirement() { }

	public HasEnoughItemChargesRequirement(string itemDefinitionKeysCsv, string mergeChainDefKeysCsv, int requiredCharges) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public MergeItemFilterComponent get_FilterComponent() { }

	[CompilerGenerated]
	public int get_RequiredCharges() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_FilterComponent(MergeItemFilterComponent value) { }

	[CompilerGenerated]
	private void set_RequiredCharges(int value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

