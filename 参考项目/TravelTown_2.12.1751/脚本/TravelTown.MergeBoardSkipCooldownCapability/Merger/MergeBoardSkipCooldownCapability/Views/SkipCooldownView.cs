using System;
using ContextualizedECS;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views;
using Merger.MergeBoardSkipCooldownCapability.ViewModels;
using UnityEngine;

namespace Merger.MergeBoardSkipCooldownCapability.Views
{
	public class SkipCooldownView : ViewBase<SkipCooldownViewModel>
	{
		[SerializeField]
		public ReactiveButton _skipCooldownButton;

		[SerializeField]
		public ResourceTextView _skipCooldownPriceText;

		[SerializeField]
		public GameObject _skipCooldownButtonTextHolder;

		[SerializeField]
		public float _buttonOnClickInvocationDelay;

		[NonSerialized]
		public RectTransform _fxLayerRectTransform;

		public RectTransform FxLayerRectTransform => null;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void UpdateUI()
		{
		}

		public void SetCooldownButtonText(ResourceMultiple price)
		{
		}

		public void SkipCooldownButtonClicked()
		{
		}

		public void PurchaseSkipCooldown(Entity entity, ResourceMultiple price)
		{
		}
	}
}
