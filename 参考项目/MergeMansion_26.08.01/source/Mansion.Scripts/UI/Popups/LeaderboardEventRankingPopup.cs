using System;
using Code.GameLogic.GameEvents;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.UI.Libraries;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class LeaderboardEventRankingPopup : PopupBase<LeaderboardEventRankingMenuState>
	{
		[Serializable]
		public struct References
		{
			[Header("UIElements")]
			public GameObject popup;

			public Image blueOverlay;

			public ScrollRect scrollRect;

			public TextMeshProUGUI headerText;

			public TimerControl eventTimer;

			public GameObject endingSoon;

			public LeaderboardEventRankingView rankingView;

			public LeaderboardEventRewardsView rewardsView;
		}

		[SerializeField]
		public References refs;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override LeaderboardEventRankingMenuState MenuState { get; set; }

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

		public override void OnContentPopulated()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		public void InitializeRankingView(IIconLibrary iconLibrary)
		{
		}

		public override void NegativeActionDone()
		{
		}

		public override void CloseMenuButton()
		{
		}

		public void TransitionToMergeBoard(MergeBoardId mergeBoardId)
		{
		}

		public void TransitionToToDoPopup()
		{
		}

		public float CalculateOpeningScrollPosition()
		{
			return 0f;
		}

		public IIconLibrary GetIconLibrary()
		{
			return null;
		}

		public void OverridableButtonClicked(Action defaultAction)
		{
		}

		public void DefaultPlayButtonClicked()
		{
		}

		public void OnEventRemoved(LeaderboardEventInfo removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		[PublicAPI]
		public void PlayButtonClicked()
		{
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}
	}
}
