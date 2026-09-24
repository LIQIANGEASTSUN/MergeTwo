using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Models.Animations;
using UnityEngine;

namespace Merger.Rewards.Services
{
	public interface IBoardItemRewardDequeueStrategy
	{
		bool CanHandle(ItemMultiple itemMultiple);

		bool TrySpawnDirectlyToBoard(ItemMultiple itemMultiple, List<Tuple<Vector3, IRewardViewData>> rewardsPositions, ResourceSource source, List<Tuple<Vector3, IRewardViewData>> flyRewardsToFill, Dictionary<IRewardViewData, RewardAnimationTargetData> overrideTargetDict);
	}
}
