using System;
using System.Collections.Generic;
using Analytics;
using Animations;
using Audio;
using GameLogic.Codex;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Items;
using Merge;
using UnityEngine;

namespace UI.Codex
{
	public class CodexMenuState : IMenuState
	{
		public readonly PlayerModel PlayerModel;

		public PlayerClientContext PlayerContext { get; }

		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public IBoardController BoardController { get; }

		public IRewardsAnimations RewardsAnimations { get; }

		public CodexCategoryInfo Category { get; }

		public CodexMenuState(CodexCategoryInfo category, PlayerModel playerModel, PlayerClientContext playerContext, IMenuController menuController, IBoardController boardController, IAnalyticsCollector analytics, IRewardsAnimations rewardsAnimations, IAudioPlayer audio)
		{
		}

		public bool TryClaimDiscoveryCompletionReward(IMergeChainDefinition mergeChain, Vector3 sourcePosition, Action<IMergeChainDefinition> successCallback)
		{
			return false;
		}

		public bool TryClaimDiscoveryReward(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, Vector3 sourcePosition, Action<IMergeChainDefinition> successCallback)
		{
			return false;
		}

		public static bool IsAnyChainHighlighted(IEnumerable<MergeChainDefinition> mergeChainDefinitions, IPlayer player)
		{
			return false;
		}

		public static bool IsChainHighlighted(MergeChainDefinition mergeChain, IPlayer player)
		{
			return false;
		}
	}
}
