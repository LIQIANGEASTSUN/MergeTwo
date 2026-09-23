using System;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using TMPro;
using UI.Indicators;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Codex
{
	public class SpineCodexItemIndicator : SpineInfoItemIndicator
	{
		[SerializeField]
		public TextMeshProUGUI indexLabel;

		[SerializeField]
		public Image undiscovered;

		[SerializeField]
		public Image highlight;

		[SerializeField]
		public GameObject nextItemArrow;

		[SerializeField]
		public RewardHint rewardHint;

		[SerializeField]
		public ItemIndicator rewardIndicator;

		[NonSerialized]
		public IItemDefinition overrideItemDefinition;

		[NonSerialized]
		public Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> overrideViewCallback;

		public void SetIndicator(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> viewAction, int index, bool showNextItemArrow)
		{
		}

		public override void InfoButtonPressed()
		{
		}
	}
}
