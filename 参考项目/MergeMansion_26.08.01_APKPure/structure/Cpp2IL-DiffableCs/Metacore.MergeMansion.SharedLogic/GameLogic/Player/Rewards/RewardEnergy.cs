namespace GameLogic.Player.Rewards;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2})]
[MetaSerializableDerived(5)]
public class RewardEnergy : PlayerReward, ICurrencyReward
{
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[JsonIgnore]
	public override Currencies Currency
	{
		 get { } //Length: 92
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private EnergyType EnergyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual bool ShouldShowInfoButton
	{
		 get { } //Length: 24
	}

	public RewardEnergy() { }

	public RewardEnergy(EnergyType energyType, int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public override int get_Amount() { }

	public override Currencies get_Currency() { }

	[CompilerGenerated]
	public EnergyType get_EnergyType() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EnergyType(EnergyType value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

