using System;
using System.Collections.Generic;
using Common;
using GameEvents;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class EnergyModeEventButtonGroup : MonoBehaviour
	{
		[SerializeField]
		public EventButtonGroupLayout buttonGroupLayout;

		[NonSerialized]
		public Option<Transform> _targetParent;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IBoardController boardController;

		[NonSerialized]
		public IScheduler scheduler;

		[NonSerialized]
		public ISafeRollback rollback;

		[NonSerialized]
		public EnergyModeEventManager eventManager;

		[NonSerialized]
		public readonly List<EnergyModeEventHudButton> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<EnergyModeEventInfo> added, IReadOnlyCollection<EnergyModeEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel playerModel, IMenuController menuController, IBoardController boardController, EnergyModeEventManager eventManager, IScheduler scheduler, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<EnergyModeEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<EnergyModeEventInfo> removed)
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

		public EnergyModeEventHudButton CreateItem(EnergyModeEventPrefabs prefabs, EnergyModeEventHudButton prefab, EnergyModeEventInfo eventInfo)
		{
			return null;
		}

		public void OnButtonClicked(EnergyModeEventHudButton button, EnergyModeEventInfo eventInfo)
		{
		}
	}
}
