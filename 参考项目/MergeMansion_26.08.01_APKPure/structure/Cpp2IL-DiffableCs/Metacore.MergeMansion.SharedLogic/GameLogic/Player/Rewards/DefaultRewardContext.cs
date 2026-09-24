namespace GameLogic.Player.Rewards;

public class DefaultRewardContext : IRewardContext
{
	[CompilerGenerated]
	private readonly CurrencySource <FallbackCurrencySource>k__BackingField; //Field offset: 0x10

	public override CurrencySource FallbackCurrencySource
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public DefaultRewardContext(CurrencySource fallbackCurrencySource) { }

	[CompilerGenerated]
	public override CurrencySource get_FallbackCurrencySource() { }

}

