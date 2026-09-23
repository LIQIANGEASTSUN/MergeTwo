using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardQueue.Models;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Models.Animations;
using Merger.Rewards.Services;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardQueue.Services
{
	public class MergeBoardItemRewardDequeueStrategy : IBoardItemRewardDequeueStrategy
	{
		[Inject]
		[NonSerialized]
		public IBoardQueueModel _boardQueueModel;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _mergeBoardLayout;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		public bool CanHandle(ItemMultiple itemMultiple)
		{
			return false;
		}

		public bool TrySpawnDirectlyToBoard(ItemMultiple itemMultiple, List<Tuple<Vector3, IRewardViewData>> rewardsPositions, ResourceSource source, List<Tuple<Vector3, IRewardViewData>> flyRewardsToFill, Dictionary<IRewardViewData, RewardAnimationTargetData> overrideTargetDict)
		{
			return false;
		}

		public bool IsBoardFull()
		{
			return false;
		}
	}
}
