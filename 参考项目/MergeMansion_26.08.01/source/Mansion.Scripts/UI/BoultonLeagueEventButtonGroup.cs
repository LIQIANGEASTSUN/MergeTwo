using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class BoultonLeagueEventButtonGroup : MonoBehaviour
	{
		[SerializeField]
		public EventButtonGroupLayout buttonGroupLayout;

		[NonSerialized]
		public UnityOption<Transform> _targetParent;

		[NonSerialized]
		public Dictionary<BoultonLeagueEventId, BoultonLeagueEventHudButton> buttonCells;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public BoultonLeagueEventManager boultonLeagueEventManager;

		[NonSerialized]
		public Action<BoultonLeagueEventHudButton> onButtonCellClicked;

		[NonSerialized]
		public PlayerModel playerModel;

		public void Awake()
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, BoultonLeagueEventManager boultonLeagueEventManager, ISafeRollback rollback)
		{
		}

		public void RemoveListeners()
		{
		}

		public void ReconstructContent()
		{
		}

		public UnityOption<BoultonLeagueEventHudButton> GetOrAllocateButtonCell(BoultonLeagueEventId eventId)
		{
			return default(UnityOption<BoultonLeagueEventHudButton>);
		}

		public void OnButtonCellClicked(BoultonLeagueEventHudButton button)
		{
		}

		public void OnEventAssetsPreloaded(BoultonLeagueEventId eventId)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void OnVisibleEventsChanged()
		{
		}

		public bool TryGetActiveHudButton(out BoultonLeagueEventHudButton outButton)
		{
			outButton = null;
			return false;
		}
	}
}
