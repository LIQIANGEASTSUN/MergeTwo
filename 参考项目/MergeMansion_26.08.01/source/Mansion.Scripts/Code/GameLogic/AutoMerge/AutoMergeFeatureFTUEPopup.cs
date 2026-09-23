using System;
using UI;
using UI.Popups;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace Code.GameLogic.AutoMerge
{
	public class AutoMergeFeatureFTUEPopup : PopupBase<AutoMergeFeatureFTUEPopupMenuState>
	{
		[Serializable]
		public struct References
		{
			[Header("UIElements")]
			public GameObject popup;

			public Image blueOverlay;

			public TimerControl timer;
		}

		[FormerlySerializedAs("addressablePopupVisuals")]
		[SerializeField]
		public PopupVisuals popupVisuals;

		[FormerlySerializedAs("showButtonTransform")]
		[SerializeField]
		public RectTransform _continueButtonTransform;

		[SerializeField]
		public References refs;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AutoMergeFeatureFTUEPopupMenuState MenuState { get; set; }

		public RectTransform ContinueButtonTransform => null;

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

		public void ContinueButtonClicked()
		{
		}
	}
}
