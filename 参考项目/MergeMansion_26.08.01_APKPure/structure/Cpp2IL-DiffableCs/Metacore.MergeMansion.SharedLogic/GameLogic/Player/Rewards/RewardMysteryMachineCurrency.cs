namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(30)]
public class RewardMysteryMachineCurrency : PlayerReward, ICurrencyReward
{
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <PoolTag>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <SkinName>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <DisplayAmount>k__BackingField; //Field offset: 0x30

	[MetaFormFieldCustomValidator(typeof(GameLogic.Player.Rewards.RewardAmountValidator`1<System.Int32>))]
	[MetaMember(2, MetaMemberFlags::None (0))]
	public override int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public override Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int DisplayAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public string PoolTag
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public string SkinName
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public RewardMysteryMachineCurrency(Currencies currency, int amount, string poolTag, string skinName, CurrencySource source, int displayAmount) { }

	public RewardMysteryMachineCurrency() { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public override int get_Amount() { }

	[CompilerGenerated]
	public override Currencies get_Currency() { }

	[CompilerGenerated]
	public int get_DisplayAmount() { }

	[CompilerGenerated]
	public string get_PoolTag() { }

	[CompilerGenerated]
	public string get_SkinName() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	public void set_Amount(int value) { }

	[CompilerGenerated]
	public void set_Currency(Currencies value) { }

	[CompilerGenerated]
	public void set_DisplayAmount(int value) { }

	[CompilerGenerated]
	public void set_PoolTag(string value) { }

	[CompilerGenerated]
	public void set_SkinName(string value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

