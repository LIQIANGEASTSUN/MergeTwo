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
	public class MysteryMachineEventButtonGroup : MonoBehaviour
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
		public MysteryMachineEventManager mysteryMachineManager;

		[NonSerialized]
		public readonly List<MysteryMachineHudButton> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<MysteryMachineEventInfo> added, IReadOnlyCollection<MysteryMachineEventInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, MysteryMachineEventManager mysteryMachineManager, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<MysteryMachineEventInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<MysteryMachineEventInfo> removed)
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

		public MysteryMachineHudButton CreateItem(MysteryMachineHudButton prefab, MysteryMachineEventInfo mysteryMachineEventInfo)
		{
			return null;
		}

		public void OnButtonClicked(MysteryMachineHudButton button, MysteryMachineEventInfo mysteryMachine)
		{
		}
	}
}
