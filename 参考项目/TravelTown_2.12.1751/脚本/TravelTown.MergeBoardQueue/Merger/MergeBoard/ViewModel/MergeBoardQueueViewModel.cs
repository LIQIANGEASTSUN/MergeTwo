using System;
using Framework.Core.DataBinding;
using Merger.Game.Data;
using Merger.Game.Model;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.Models;
using Merger.MergeBoard.View.Layout;
using Merger.MergeBoardQueue.Data;
using Merger.MergeBoardQueue.Models;
using Merger.MergeBoardQueue.Services;
using Merger.Rewards.Models.Animations;
using Merger.Rewards.ViewModels;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardQueueViewModel : RewardAnimationTargetViewModel
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

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardQueueOperationTrackingService _mergeBoardQueueOperationTrackingService;

		[NonSerialized]
		public RectTransform _queueRectTransform;

		public BindableProperty<int> QueueCount => null;

		public BindableProperty<Merger.MergeBoardQueue.Data.QueuedItem> HeadItem => null;

		public override RewardAnimationTarget RewardAnimationTarget => default(RewardAnimationTarget);

		public BindableProperty<GameState> GameState => null;

		public override void RegisterRewardTargets(RectTransform targetRectTransform)
		{
		}

		public void Dequeue()
		{
		}

		public void ShowBoardFullFloatingText()
		{
		}
	}
}
