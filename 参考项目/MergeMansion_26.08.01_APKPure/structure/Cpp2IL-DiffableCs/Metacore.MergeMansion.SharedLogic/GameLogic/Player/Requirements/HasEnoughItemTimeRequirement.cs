namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(65)]
public sealed class HasEnoughItemTimeRequirement : PlayerRequirement, IValidatable
{
	[CompilerGenerated]
	private MetaDuration <RequiredTime>k__BackingField; //Field offset: 0x10
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
	public private MetaDuration RequiredTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private HasEnoughItemTimeRequirement() { }

	public HasEnoughItemTimeRequirement(string itemDefinitionKeysCsv, string mergeChainDefinitionKeysCsv, MetaDuration requiredTime) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public MergeItemFilterComponent get_FilterComponent() { }

	[CompilerGenerated]
	public MetaDuration get_RequiredTime() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	private void set_FilterComponent(MergeItemFilterComponent value) { }

	[CompilerGenerated]
	private void set_RequiredTime(MetaDuration value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

