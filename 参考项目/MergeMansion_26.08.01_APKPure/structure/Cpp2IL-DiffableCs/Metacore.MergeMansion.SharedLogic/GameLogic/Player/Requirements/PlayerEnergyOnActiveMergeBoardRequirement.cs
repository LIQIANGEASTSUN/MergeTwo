namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(59)]
public class PlayerEnergyOnActiveMergeBoardRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private long <MinAmount>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private long MinAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public PlayerEnergyOnActiveMergeBoardRequirement() { }

	public PlayerEnergyOnActiveMergeBoardRequirement(long minAmount) { }

	public virtual void ForceComplete(IPlayer player) { }

	[CompilerGenerated]
	private long get_MinAmount() { }

	private EnergyType GetEnergyType(IPlayer player) { }

	public virtual bool Matches(IPlayer player) { }

	[CompilerGenerated]
	private void set_MinAmount(long value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

