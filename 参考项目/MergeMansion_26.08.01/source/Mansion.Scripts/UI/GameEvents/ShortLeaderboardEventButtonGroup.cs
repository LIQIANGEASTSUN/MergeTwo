using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using Common;
using GameEvents;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Navigation;
using UnityEngine;

namespace UI.GameEvents
{
	public class ShortLeaderboardEventButtonGroup : MonoBehaviour
	{
		[SerializeField]
		public EventButtonGroupLayout buttonGroupLayout;

		[NonSerialized]
		public Option<Transform> _targetParent;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public PlayerClientContext _playerContext;

		[NonSerialized]
		public IMenuController _menuController;

		[NonSerialized]
		public IBoardController _boardController;

		[NonSerialized]
		public INavigationController _navigationController;

		[NonSerialized]
		public IScheduler _scheduler;

		[NonSerialized]
		public ISafeRollback _rollback;

		[NonSerialized]
		public ShortLeaderboardEventManager _eventManager;

		[NonSerialized]
		public readonly List<ShortLeaderboardEventHudButton> _instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<ShortLeaderboardEventInfo> added, IReadOnlyCollection<ShortLeaderboardEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel playerModel, PlayerClientContext playerContext, IMenuController menuController, IBoardController boardController, INavigationController navigationController, ShortLeaderboardEventManager eventManager, IScheduler scheduler, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<ShortLeaderboardEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<ShortLeaderboardEventInfo> removed)
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

		public ShortLeaderboardEventHudButton CreateItem(ShortLeaderboardEventPrefabs prefabs, ShortLeaderboardEventInfo eventInfo)
		{
			return null;
		}

		public void OnButtonClicked(ShortLeaderboardEventHudButton button, ShortLeaderboardEventInfo eventInfo)
		{
		}
	}
}
