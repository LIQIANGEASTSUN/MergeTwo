using System;
using System.Collections.Generic;
using DG.Tweening;
using GameLogic.Codex;
using GameLogic.MergeChains;
using JetBrains.Annotations;
using TMPro;
using UI.Popups;
using UI.Transitions;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Codex
{
	public class CodexCombinedPopup : PopupBase<CodexCategoryMenuState>
	{
		[SerializeField]
		public GameObject content;

		[SerializeField]
		public Image blueOverlay;

		[Header("Mask")]
		[SerializeField]
		public Image centerContentMaskImage;

		[Header("Total count")]
		[SerializeField]
		public TextMeshProUGUI codexTotalCountLabel;

		[SerializeField]
		public Slider codexTotalSlider;

		[Header("Categories")]
		[SerializeField]
		public RectTransform codexCategoryContainer;

		[NonSerialized]
		public Vector2 codexCategoryContainerInitPosition;

		[SerializeField]
		public CanvasGroup codexCategoryContainerCanvasGroup;

		[SerializeField]
		public ScrollRect codexCategoryScrollRect;

		[SerializeField]
		public CodexCategoryList codexCategoryList;

		[Header("Items")]
		[SerializeField]
		public RectTransform codexItemContainer;

		[NonSerialized]
		public Vector2 codexItemContainerInitPosition;

		[SerializeField]
		public TextMeshProUGUI codexCategoryCountLabel;

		[SerializeField]
		public Slider codexCategorySlider;

		[SerializeField]
		public CanvasGroup codexItemContainerCanvasGroup;

		[SerializeField]
		public ScrollRect codexItemScrollRect;

		[SerializeField]
		public CodexItemList codexItemList;

		[Header("Tween options")]
		[SerializeField]
		public TweenOptions tweenOptions;

		[NonSerialized]
		public List<Tween> tweens;

		[NonSerialized]
		public bool doesSupportHardwareBackButton;

		[NonSerialized]
		public Action<CodexCategoryInfo> onSelectCategoryCallback;

		[NonSerialized]
		public bool animating;

		[NonSerialized]
		public bool initialized;

		[NonSerialized]
		public bool closeClicked;

		[NonSerialized]
		public CodexCategoryInfo selectedCategory;

		[NonSerialized]
		public Vector2 scrollPosition;

		[NonSerialized]
		public IEnumerable<MergeChainDefinition> allMergeChains;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override CodexCategoryMenuState MenuState { get; set; }

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override void PopulateContent()
		{
		}

		public void Update()
		{
		}

		public void CacheMergeChains()
		{
		}

		public void ResetValues()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public void Reset()
		{
		}

		public void StopAnimations()
		{
		}

		public void OnCodexCategorySelected(CodexCategoryInfo categoryInfo, bool instant = false)
		{
		}

		public Tween TweenPosition(RectTransform rect, float localPositionX, TweenOptions tweenOptions)
		{
			return null;
		}

		public Tween TweenAlpha(CanvasGroup canvasGroup, float from, float to, TweenOptions tweenOptions)
		{
			return null;
		}

		public void TransitionCategoriesToItems(bool instant = false)
		{
		}

		public void TransitionItemsToCategories(bool instant = false)
		{
		}

		public void OnItemsVisible()
		{
		}

		public bool OkToShowCodexItemDialog()
		{
			return false;
		}

		[PublicAPI]
		public void BackMenuButton()
		{
		}

		[PublicAPI]
		public override void NegativeActionDone()
		{
		}

		[PublicAPI]
		public void CloseClicked()
		{
		}
	}
}
