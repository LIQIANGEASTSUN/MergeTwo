using System;
using JetBrains.Annotations;
using Metaplay.Core;
using TMPro;
using UI.Popups;
using UnityEngine;
using UnityEngine.UI;

namespace Metacore.MergeMansion.UI.Popups.AutoMergeBooster
{
	public class AutoMergeBoosterPopup : PopupBase<AutoMergeBoosterPopupMenuState>
	{
		[Serializable]
		public struct References
		{
			[Header("UIElements")]
			public GameObject popup;

			public Image blueOverlay;

			public TextMeshProUGUI durationText;

			[Header("Animations")]
			public Animator animator;
		}

		[SerializeField]
		public References refs;

		public static readonly MetaDuration preventCloseDelay;

		[NonSerialized]
		public MetaTime? populatedTimestamp;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AutoMergeBoosterPopupMenuState MenuState { get; set; }

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

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		[PublicAPI]
		public void FadeOutBlueOverlay()
		{
		}

		[PublicAPI]
		public void OnAnimationCompleted()
		{
		}

		[PublicAPI]
		public void SkipAnimations()
		{
		}
	}
}
