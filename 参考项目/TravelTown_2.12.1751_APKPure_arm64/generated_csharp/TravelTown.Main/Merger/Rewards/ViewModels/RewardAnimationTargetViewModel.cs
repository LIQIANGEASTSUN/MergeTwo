using System;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Audio.ViewModels;
using Merger.Game.Model;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Models.Animations;
using UnityEngine;
using Zenject;

namespace Merger.Rewards.ViewModels
{
	public class RewardAnimationTargetViewModel : AudioViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IRewardAnimationTargetsModel _rewardAnimationTargetsModel;

		[NonSerialized]
		public RewardAnimationTarget _rewardAnimationTarget;

		public virtual RewardAnimationTarget RewardAnimationTarget => default(RewardAnimationTarget);

		public void ResetRewardTargets(RectTransform transform)
		{
		}

		public virtual void UnregisterRewardTargets()
		{
		}

		public virtual void RegisterRewardTargets(RectTransform targetRectTransform)
		{
		}

		public void RegisterItemRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, RewardDestinationType destinationType = RewardDestinationType.Default)
		{
		}

		public void RegisterItemRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, RewardDestinationType destinationType = RewardDestinationType.Default)
		{
		}

		public void RegisterItemRewardTargetForAllDestinations(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset)
		{
		}

		public void RegisterResourceRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, ResourceSource resourceSource = ResourceSource.Default)
		{
		}

		public void RegisterResourceRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, ResourceSource resourceSource = ResourceSource.Default)
		{
		}

		public void RegisterRewardTarget(IRewardType rewardType, RectTransform targetRectTransform, Vector2 offset, ResourceSource resourceSource, RewardDestinationType destinationType)
		{
		}

		public bool IsRewardTarget(RewardAnimationTarget rewardAnimationTarget)
		{
			return false;
		}

		public Vector2 GetResourceTargetPositionInRootCanvas(PlayerResourceEnum playerResourceEnum)
		{
			return default(Vector2);
		}

		public void UnregisterRewardTargets(IRewardType rewardType)
		{
		}

		public void SetRegisterTarget(RewardAnimationTarget rewardAnimationTarget)
		{
		}
	}
}
