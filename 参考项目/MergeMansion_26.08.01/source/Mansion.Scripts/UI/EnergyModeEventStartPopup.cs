using System;
using GameLogic.Player.Board;
using JetBrains.Annotations;
using Merge;
using TMPro;
using UI.Popups;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
	public class EnergyModeEventStartPopup : PopupBase<EnergyModeEventStartMenuState>
	{
		[Serializable]
		public struct References
		{
			public GameObject popup;

			public Image blueOverlay;

			public TextMeshProUGUI headerText;

			public TextMeshProUGUI descriptionText;

			public TextMeshProUGUI showButtonText;

			public TimerControl eventTimer;
		}

		[SerializeField]
		public References refs;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override EnergyModeEventStartMenuState MenuState { get; set; }

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

		public string GetDescriptionTextLocId()
		{
			return null;
		}

		public void TryToDisplayBoardFtue()
		{
		}

		public bool TryToSelectEnergyModeProducer(out MergeBoard board)
		{
			board = null;
			return false;
		}

		public bool HasRelatedEnergyModeActive(MergeBoardId boardId)
		{
			return false;
		}

		[PublicAPI]
		public void ShowButtonClicked()
		{
		}
	}
}
