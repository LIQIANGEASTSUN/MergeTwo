using System;
using MergeEngine.Model;
using Merger.Audio.ViewModels;
using Merger.Game.Model;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.ViewModels
{
	public class SellItemAnimationsViewModel : AudioViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IRewardAnimationTargetsModel _rewardAnimationTargetsModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _mergeBoardLayout;

		public Vector2 TileSize => default(Vector2);

		public Vector2 GetResourceTargetPosition(PlayerResourceEnum resource)
		{
			return default(Vector2);
		}
	}
}
