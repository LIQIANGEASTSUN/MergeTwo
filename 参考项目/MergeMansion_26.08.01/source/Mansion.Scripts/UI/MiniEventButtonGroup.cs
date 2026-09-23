using System;
using System.Collections.Generic;
using GameEvents;
using GameLogic.MiniEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class MiniEventButtonGroup : MonoBehaviour
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
		public MiniEventManager eventManager;

		[NonSerialized]
		public readonly List<MiniEventHudButton> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<MiniEventInfo> added, IReadOnlyCollection<MiniEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, MiniEventManager eventManager, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<MiniEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<MiniEventInfo> removed)
		{
		}

		public void DisposeAll()
		{
		}

		public void SetVisible(bool mansionViewVisibility)
		{
		}

		public void UpdateButtonVisibility()
		{
		}

		public MiniEventHudButton CreateItem(MiniEventHudButton prefab, MiniEventInfo eventInfo)
		{
			return null;
		}

		public void OnButtonClicked(MiniEventHudButton button, MiniEventInfo eventInfo)
		{
		}
	}
}
