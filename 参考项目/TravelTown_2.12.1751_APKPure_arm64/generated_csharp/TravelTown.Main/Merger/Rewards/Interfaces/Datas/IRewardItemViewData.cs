using System;
using MergeEngine.Configuration;
using Merger.Game.Views.Components.Orders.Rewards;

namespace Merger.Rewards.Interfaces.Datas
{
	public interface IRewardItemViewData : IRewardViewData, IRewardTextRepresented, IRewardTooltipData, IEquatable<IRewardViewData>, IRewardViewPresentable, IRewardData, IPrioritizedOrderReward
	{
		IItem Item { get; }
	}
}
