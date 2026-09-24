namespace GameLogic.Player.Requirements;

[MetaSerializableDerived(22)]
public class PlayerCurrencyRequirement : PlayerRequirement
{
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Nullable<Int64> <Min>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<Int64> <Max>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public Nullable<Int64> Max
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public Nullable<Int64> Min
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public PlayerCurrencyRequirement() { }

	public PlayerCurrencyRequirement(Currencies currency, Nullable<Int64> min, Nullable<Int64> max) { }

	public virtual void ForceComplete(IPlayer playerModel) { }

	[CompilerGenerated]
	public Currencies get_Currency() { }

	[CompilerGenerated]
	public Nullable<Int64> get_Max() { }

	[CompilerGenerated]
	public Nullable<Int64> get_Min() { }

	public virtual bool Matches(IPlayer playerModel) { }

	[CompilerGenerated]
	public void set_Currency(Currencies value) { }

	[CompilerGenerated]
	public void set_Max(Nullable<Int64> value) { }

	[CompilerGenerated]
	public void set_Min(Nullable<Int64> value) { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

