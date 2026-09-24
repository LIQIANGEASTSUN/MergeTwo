using System;
using System.Collections.Generic;
using Paxie.MergeStudio.Features.MiniBoard;

namespace Paxie.MergeStudio.Features.RecurringEvents.MiniBoardProgression
{
	[Serializable]
	public class MiniBoardProgressionMergedRewards
	{
		public MiniBoardItemEntity ItemEntity;

		public Queue<MiniBoardRewardEntity> MergedRewards;

		public MiniBoardProgressionMergedRewards(MiniBoardItemEntity itemEntity)
		{
		}
	}
}
