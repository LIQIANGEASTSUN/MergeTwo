namespace GameLogic.Player.Rewards;

public class EventRewardContext : IRewardContext
{
	[CompilerGenerated]
	private CurrencySource <FallbackCurrencySource>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IStringId <EventId>k__BackingField; //Field offset: 0x18

	public private IStringId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override CurrencySource FallbackCurrencySource
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public EventRewardContext(IStringId eventId, CurrencySource fallbackCurrencySource) { }

	public static IRewardContext ForEvent(IStringId eventId, CurrencySource fallbackCurrencySource) { }

	[CompilerGenerated]
	public IStringId get_EventId() { }

	[CompilerGenerated]
	public override CurrencySource get_FallbackCurrencySource() { }

	[CompilerGenerated]
	private void set_EventId(IStringId value) { }

	[CompilerGenerated]
	private void set_FallbackCurrencySource(CurrencySource value) { }

}

