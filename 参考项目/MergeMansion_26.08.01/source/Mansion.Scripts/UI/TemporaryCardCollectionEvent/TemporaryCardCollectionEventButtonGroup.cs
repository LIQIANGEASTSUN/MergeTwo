using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.GameEvents;
using UnityEngine;

namespace UI.TemporaryCardCollectionEvent
{
	public class TemporaryCardCollectionEventButtonGroup : MonoBehaviour
	{
		[SerializeField]
		public Transform targetParent;

		[NonSerialized]
		public PlayerModel _player;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public TemporaryCardCollectionEventManager _temporaryCardCollectionManager;

		[NonSerialized]
		public IBoardController _boardController;

		[NonSerialized]
		public readonly List<TemporaryCardCollectionHudButton> _instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(Option<TemporaryCardCollectionEventInfo> addedEvent, Option<TemporaryCardCollectionEventInfo> removedEvent)
		{
		}

		public void OnEventAssetsPreloaded(TemporaryCardCollectionEventId eventId)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, TemporaryCardCollectionEventManager manager, IMenuController menuController, IBoardController unityBoardController, ISafeRollback rollback)
		{
		}

		public void RemoveListeners()
		{
		}

		public void CreateItems(Option<TemporaryCardCollectionEventInfo> added)
		{
		}

		public void DisposeItems(Option<TemporaryCardCollectionEventInfo> removed)
		{
		}

		public void DisposeAll()
		{
		}

		public void SetVisible(bool visible)
		{
		}

		public void UpdateButtonVisibility()
		{
		}

		public TemporaryCardCollectionHudButton CreateItem(TemporaryCardCollectionHudButton prefab, TemporaryCardCollectionEventInfo temporaryCardCollectionEventInfo)
		{
			return null;
		}

		public void OnButtonClicked(TemporaryCardCollectionEventInfo eventInfo)
		{
		}
	}
}
