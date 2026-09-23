using System;
using JetBrains.Annotations;
using TMPro;
using UI.Indicators;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class InventorySinkConfirmationDialogPopup : PopupBase<InventorySinkConfirmationDialogState>
	{
		[Serializable]
		public struct References
		{
			public Image blueOverlay;

			public TextMeshProUGUI titleText;

			public TextMeshProUGUI confirmationQuestionText;

			public TextMeshProUGUI confirmationButtonText;

			public TextMeshProUGUI cancellationButtonText;

			public Transform sinkItemsParent;

			public ItemInfoPopupItem infoItemPrefab;
		}

		[SerializeField]
		public References refs;

		[NonSerialized]
		public bool alreadyConfirmed;

		[NonSerialized]
		public bool alreadyCancelled;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override InventorySinkConfirmationDialogState MenuState { get; set; }

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
		public void Confirm()
		{
		}

		[PublicAPI]
		public void Cancel()
		{
		}
	}
}
