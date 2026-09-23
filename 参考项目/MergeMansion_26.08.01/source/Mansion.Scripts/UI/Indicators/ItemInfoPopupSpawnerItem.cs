using System;
using GameLogic.Config.Shop;
using GameLogic.Hotspots;
using GameLogic.Player.Items;
using UI.Offers;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Indicators
{
	public class ItemInfoPopupSpawnerItem : ItemInfoPopupItem
	{
		[SerializeField]
		public Image infoButton;

		[NonSerialized]
		public Action onClickCallback;

		public override void SetIndicator(IItemDefinition type, string text, VisibleState state, bool isSelectedItem, bool showNextSeparator, ItemInfoPopupItemFlags flags = ItemInfoPopupItemFlags.ActivableShowsTapHint, IOfferUiServices offerUIServices = null, bool hasUnlockedActivationSpawnItems = false, IShopItemInfo shopItemInfo = null, Action purchaseClickedCallback = null, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}

		public override void SetCallback(Action callback)
		{
		}

		public void OnClick()
		{
		}
	}
}
