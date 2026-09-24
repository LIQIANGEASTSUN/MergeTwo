namespace Merger.Rewards.Interfaces.Datas
{
	public interface IRewardTooltipData
	{
		bool AutoOpenTooltip { get; set; }

		bool ShouldHideIButton { get; }

		bool ShowInfoButtonAfterContentLoad { get; }
	}
}
