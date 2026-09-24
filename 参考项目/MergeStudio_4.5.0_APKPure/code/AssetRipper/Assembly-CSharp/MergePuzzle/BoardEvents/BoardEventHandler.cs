using System;
using System.Collections.Generic;
using JetBrains.Annotations;

namespace MergePuzzle.BoardEvents
{
	[Serializable]
	public class BoardEventHandler : BoardEventHandlerBase
	{
		public void InitializeEventsWithBoard([NotNull] BoardEntity boardEntity, KiteFeatureCalendarConfig calendarConfig = null)
		{
		}

		public bool PurchaseLimitReached()
		{
			return false;
		}

		public bool IsInitialized()
		{
			return false;
		}

		public (List<string>, bool) GetSplashAddressableLabels()
		{
			return default((List<string>, bool));
		}

		public void InitializeEntities(BoardEntity boardEntity, KiteFeatureCalendarConfig calendarConfig = null)
		{
		}

		public BoardEntity GetBoardEntity()
		{
			return null;
		}

		public void CreateNewEventEntity(EventBoardConfigItem configItem, BoardEntity boardEntity)
		{
		}

		public void ResetEventEntity(int id)
		{
		}

		public void FindFinishWaitingBoardEvent(BoardEntity boardEntity)
		{
		}

		public void TryRemoveRunningBoardConfigItem(EventBoardConfigItem item)
		{
		}

		public void SetFinishWaitingEvent(EventBoardConfigItem item)
		{
		}

		public void RemoveFinishWaitingEvent()
		{
		}

		public bool IsEventPlayable()
		{
			return false;
		}

		public void RemovePopupRequests()
		{
		}

		public void TryQueuePopup()
		{
		}
	}
}
