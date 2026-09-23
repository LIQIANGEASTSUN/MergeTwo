using UI.Popups;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
	public class AutoMergeEventInfoPopup : PopupBase<AutoMergeEventInfoPopupMenuState>
	{
		[SerializeField]
		public GameObject popup;

		[SerializeField]
		public Image blueOverlay;

		[SerializeField]
		public AddressablePopupVisuals addressablePopupVisuals;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AutoMergeEventInfoPopupMenuState MenuState { get; set; }

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override void PopulateContent()
		{
		}

		public void InitAddressablePopupVisuals()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}
	}
}
