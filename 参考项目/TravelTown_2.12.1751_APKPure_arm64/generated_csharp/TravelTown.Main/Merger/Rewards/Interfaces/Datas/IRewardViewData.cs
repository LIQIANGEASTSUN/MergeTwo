using System;
using JetBrains.Annotations;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Components.Orders.Rewards;
using Merger.Rewards.Enums;

namespace Merger.Rewards.Interfaces.Datas
{
	public interface IRewardViewData : IRewardTextRepresented, IRewardTooltipData, IEquatable<IRewardViewData>, IRewardViewPresentable, IRewardData, IPrioritizedOrderReward
	{
		bool IsFeatured { get; }

		bool ShouldBeHidden { get; }

		bool HasCollectScreen { get; }

		RewardDestination Destination { get; }

		[CanBeNull]
		RewardSource RewardSource { get; set; }

		IRewardViewData Clone();

		string GetLogDebug();
	}
}
