namespace Game.Logic;

[AnalyticsEvent(13, "Gained energy", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"energy"})]
public class PlayerEventGainedEnergy : PlayerEventGainedCurrency
{
	[CompilerGenerated]
	private EnergyType <EnergyType>k__BackingField; //Field offset: 0x30

	[MetaMember(100, MetaMemberFlags::None (0))]
	public private EnergyType EnergyType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public virtual string EventDescription
	{
		 get { } //Length: 624
	}

	private PlayerEventGainedEnergy() { }

	public PlayerEventGainedEnergy(EnergyType type, long amount, CurrencySource currencySource, long total, AnalyticsContext context) { }

	[CompilerGenerated]
	public EnergyType get_EnergyType() { }

	public virtual string get_EventDescription() { }

	[CompilerGenerated]
	private void set_EnergyType(EnergyType value) { }

}

