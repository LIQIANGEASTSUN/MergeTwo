using System;
using GameLogic.Config;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using TMPro;
using UI.Buttons;
using UI.Indicators;
using UI.States;
using UnityEngine;

namespace UI.EventCalendarEntry
{
	public class EventCalendarEntryEvent : MonoBehaviour, IEventCalendarEntry
	{
		public enum TargetAction
		{
			None = 0,
			Start = 1,
			Play = 2
		}

		public TweenedButton startButton;

		public TweenedButton playButton;

		public GameObject infoButton;

		public GameObject CompletedVisuals;

		public GameObject LockedVisuals;

		public TextMeshProUGUI eventName;

		public TextMeshProUGUI eventDescription;

		public TextMeshProUGUI startButtonLabel;

		public TimerControl timerControl;

		public SpineInfoItemIndicator itemInfoIndicator;

		public TweenedButton completedButton;

		[NonSerialized]
		public MergeBoardId eventId;

		[NonSerialized]
		public IMergeMansionGameConfig gameConfig;

		[NonSerialized]
		public EventCalendarPopupMenuState menuState;

		public PlayerModel Player => null;

		public void Show(MergeBoardId eventType, EventCalendarPopupMenuState state)
		{
		}

		public void SetItemToDefaultState()
		{
		}

		public bool IsEventCompleted()
		{
			return false;
		}

		public bool IsEventCurrentEvent()
		{
			return false;
		}

		public void Dispose()
		{
		}

		public void Hide()
		{
		}

		public void AssignStartButtonPressedAction(Action action, Option<string> overrideButtonText = default(Option<string>))
		{
		}

		public void InfoButtonPressed()
		{
		}

		public void StartEventTimer()
		{
		}

		public void SetTargetAction(TargetAction targetAction)
		{
		}

		public void HandleStoryEventFlow()
		{
		}

		public bool IsEventBoardRewardCollected()
		{
			return false;
		}

		public void CompleteButtonPressed()
		{
		}
	}
}
