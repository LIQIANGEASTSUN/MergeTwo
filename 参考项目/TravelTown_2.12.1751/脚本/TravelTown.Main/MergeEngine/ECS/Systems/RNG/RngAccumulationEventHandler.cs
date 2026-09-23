using System;
using DG.Tweening;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Systems.Board;
using MergeEngine.ECS.Systems.Player;
using Merger.Game.ViewModel.Rng;
using Merger.Game.Views;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using Merger.GenericAccumulationEvent.Data;
using Merger.Rewards.Interfaces.Datas;
using Merger.Services.Analytics.AnalyticsValueObjects;
using UnityEngine;
using Zenject;

namespace MergeEngine.ECS.Systems.RNG
{
	public class RngAccumulationEventHandler
	{
		[NonSerialized]
		public readonly SignalBus _signalBus;

		[NonSerialized]
		public readonly BoardSystem _boardSystem;

		[NonSerialized]
		public readonly RngEventViewModel _rngEventViewModel;

		[NonSerialized]
		public readonly ResourcesSystem _resourcesSystem;

		[NonSerialized]
		public IBoardView _boardView;

		public RngAccumulationEventHandler(SignalBus signalBus, BoardSystem boardSystem, ResourcesSystem resourcesSystem, RngEventViewModel rngEventViewModel)
		{
		}

		public void HandleCollectedReward(Reward collectedReward, AccumulationProgressSourceType source, BoardPosition clientDataPosition)
		{
		}

		public void GrantCollectedResources(Reward collectedReward, BoardCellView tile)
		{
		}

		public void GrantItemsReward(IRewardViewData rewardItemMultiple, Vector2 position, ResourceSource source = ResourceSource.Default, Func<GameObject> getPrefabInstance = null, Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> overrideTween = null)
		{
		}

		public ItemQueuedAnalytics AddAnalytics(ItemMultiple reward, ResourceSource source)
		{
			return null;
		}

		public void GrantResourcesReward(ResourceMultiple resourceReward, ResourceSource source, Vector2 worldPosition)
		{
		}

		public void BoardSwitched()
		{
		}
	}
}
