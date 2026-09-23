using System;
using System.Collections.Generic;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Utilities;
using TMPro;
using UI.Buttons;
using UI.Indicators;
using UnityEngine;

namespace UI.Codex
{
	public class CodexItem : MonoBehaviour, IInfiniteScrollViewItem
	{
		[SerializeField]
		public RectTransform rectTransform;

		[SerializeField]
		public TextMeshProUGUI text;

		[SerializeField]
		public RectTransform itemParent;

		[SerializeField]
		public SpineCodexItemIndicator itemPrefab;

		[SerializeField]
		public TextMeshProUGUI itemAmountLabel;

		[SerializeField]
		public GameObject bottomContainer;

		[SerializeField]
		public GameObject completionRewardContainer;

		[SerializeField]
		public CanvasGroup completionRewardContainerCanvasGroup;

		[SerializeField]
		public SpineRewardItemIndicator completionReward;

		[SerializeField]
		public TweenedButton completionRewardClaimButton;

		[SerializeField]
		public RedDotIndicator completionRewardRedDotIndicator;

		[SerializeField]
		public GameObject descriptionContainer;

		[SerializeField]
		public TextMeshProUGUI descriptionLabel;

		[SerializeField]
		public Animator animator;

		public static readonly Queue<SpineCodexItemIndicator> freeInstanceQueue;

		[NonSerialized]
		public CodexMenuState codexMenuState;

		[NonSerialized]
		public IMergeChainDefinition mergeChainDefinition;

		[NonSerialized]
		public IItemDefinition itemDefinition;

		public RectTransform RectTransform => null;

		public int InfiniteScrollItemIndex { get; set; }

		public GameObject GameObject => null;

		[PublicAPI]
		public void Setup(CodexMenuState menuState, IMergeChainDefinition mergeChain, IItemDefinition item)
		{
		}

		public void RefreshDescription()
		{
		}

		public SpineCodexItemIndicator GetOrCreateInstance()
		{
			return null;
		}

		public static int GetPreferredHeight(IMergeChainDefinition mergeChain)
		{
			return 0;
		}

		public void OnClickItem(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, SpineCodexItemIndicator instance)
		{
		}

		[UsedImplicitly]
		public void OnClickCompletionReward()
		{
		}

		public void OnClaimCompletionReward()
		{
		}

		public void OnChainCompletionAnimationFinished()
		{
		}

		public void OnInfiniteScrollItemCreated()
		{
		}

		public void OnInfiniteScrollItemDestroyed()
		{
		}

		public void OnInfiniteScrollItemUpdate(int index)
		{
		}

		public Vector2 GetItemPrefabSize()
		{
			return default(Vector2);
		}

		public RectTransform GetRectTransform()
		{
			return null;
		}
	}
}
