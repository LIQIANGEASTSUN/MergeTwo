using System;
using JetBrains.Annotations;
using TMPro;
using UI.Indicators;
using UI.Popups;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

public class MergeGoalsPopup : PopupBase<MergeGoalsPopupMenuState>
{
	[Serializable]
	public struct References
	{
		[Header("UIElements")]
		public GameObject popup;

		public Image blueOverlay;
	}

	[SerializeField]
	public References refs;

	[SerializeField]
	public SpineInfoItemIndicator[] requirements;

	[SerializeField]
	public SpineRewardItemIndicator[] rewards;

	public TextMeshProUGUI titleText;

	public TextMeshProUGUI descriptionText;

	public TextMeshProUGUI rewardText;

	public TextMeshProUGUI buttonLabelText;

	public override string MenuTag => null;

	public override GameObject Popup => null;

	public override Image BlueOverlay => null;

	public override ScrollRect ScrollRect => null;

	public override MergeGoalsPopupMenuState MenuState { get; set; }

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
	public void PositiveActionButton()
	{
	}
}
