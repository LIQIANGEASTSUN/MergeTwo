using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class CoreSupportingEventsButtonGroup : MonoBehaviour
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
		public CoreSupportingEventsEventManager coreSupportingEventsEventManager;

		[NonSerialized]
		public readonly List<CoreSupportingEventsMainHubBadge> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<ICoreSupportingEventInfo> added, IReadOnlyCollection<ICoreSupportingEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, CoreSupportingEventsEventManager coreSupportingEventsEventManager, ISafeRollback rollback)
		{
		}

		public void CreateButtons(IReadOnlyCollection<ICoreSupportingEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<ICoreSupportingEventInfo> removed)
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

		public CoreSupportingEventsMainHubBadge CreateItem(CoreSupportingEventsMainHubBadge prefab, ICoreSupportingEventInfo eventInfo)
		{
			return null;
		}

		public void OnButtonClicked(CoreSupportingEventsMainHubBadge button, ICoreSupportingEventInfo cseEvent)
		{
		}
	}
}
