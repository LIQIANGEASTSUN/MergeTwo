using System;
using System.Collections.Generic;
using GameEvents;
using GameLogic.Config.DecorationShop;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using UnityEngine;

namespace UI
{
	public class DecorationShopButtonGroup : MonoBehaviour
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
		public DecorationShopManager decorationShopManager;

		[NonSerialized]
		public readonly List<DecorationShopHudButton> instantiatedItems;

		public void OnDestroyInner()
		{
		}

		public void OnEventsChanged(IReadOnlyCollection<DecorationShopInfo> added, IReadOnlyCollection<DecorationShopInfo> removed)
		{
		}

		public void OnMergeBoardTransition(MenuStatus menuStatus)
		{
		}

		public void Initialize(PlayerModel player, IMenuController controller, DecorationShopManager decorationShopManager, ISafeRollback rollback)
		{
		}

		public void CreateItems(IReadOnlyCollection<DecorationShopInfo> added)
		{
		}

		public void DisposeItems(IReadOnlyCollection<DecorationShopInfo> removed)
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

		public DecorationShopHudButton CreateItem(DecorationShopHudButton prefab, DecorationShopInfo decorationShop)
		{
			return null;
		}

		public void OnButtonClicked(DecorationShopHudButton button, DecorationShopInfo decorationShop)
		{
		}
	}
}
