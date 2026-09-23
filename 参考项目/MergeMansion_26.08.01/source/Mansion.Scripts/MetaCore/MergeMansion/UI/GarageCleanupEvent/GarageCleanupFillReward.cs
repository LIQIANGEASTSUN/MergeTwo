using System;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.UI.Libraries;
using UI.Indicators;
using UI.States;
using UnityEngine;

namespace Metacore.MergeMansion.UI.GarageCleanupEvent
{
	public class GarageCleanupFillReward : MonoBehaviour
	{
		[SerializeField]
		public ItemIndicator rewardIndicator;

		[SerializeField]
		public RewardHint rewardHint;

		[SerializeField]
		public SpineInfoItemIndicator rewardSpineIndicator;

		[SerializeField]
		public GameObject infoButton;

		[NonSerialized]
		public RewardItem rewardItem;

		public void SetReward(IPlayer player, PlayerReward reward, IIconLibrary iconLibrary)
		{
		}

		public void OnRewardClicked(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool val, ItemInfoPopupFlags flags)
		{
		}
	}
}
