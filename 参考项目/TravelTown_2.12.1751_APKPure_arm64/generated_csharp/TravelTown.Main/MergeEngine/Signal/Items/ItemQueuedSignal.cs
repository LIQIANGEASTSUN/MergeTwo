using System;
using DG.Tweening;
using MergeEngine.Configuration;
using Merger.Game.Views.Components;
using Merger.Game.Views.Data;
using Merger.Rewards.Interfaces.Datas;
using Merger.Services.Analytics.AnalyticsValueObjects;
using UnityEngine;

namespace MergeEngine.Signal.Items
{
	public class ItemQueuedSignal
	{
		public IItem Item { get; }

		public Vector2 Position { get; }

		public bool Animate { get; }

		public ItemQueuedAnalytics AnalyticsObject { get; }

		public IRewardViewData RewardItemMultiple { get; }

		public Func<GameObject> GetPrefabInstance { get; }

		public Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> OverrideTween { get; }

		public bool ActivateQueueAfterAnimation { get; }

		public bool SlideBoardItemToQueue { get; }

		public InstantiateAndSlideIconsAnimationSettings AnimationSettings { get; }

		public ItemQueuedSignal(IItem item, Vector2 position, bool animate, ItemQueuedAnalytics analyticsObject, IRewardViewData rewardItemMultiple, bool slideBoardItemToQueue, Func<GameObject> getPrefabInstance = null, Func<FlyingIconView, InstantiateAndSlideIconsAnimationSettings, Tween> overrideTween = null, bool activateQueueAfterAnimation = false, InstantiateAndSlideIconsAnimationSettings animationSettings = null)
		{
		}
	}
}
