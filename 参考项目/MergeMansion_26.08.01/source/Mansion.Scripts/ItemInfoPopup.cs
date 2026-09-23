using System;
using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Shop;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Utility;
using TMPro;
using UI;
using UI.Buttons;
using UI.Indicators;
using UI.Popups;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

public class ItemInfoPopup : PopupBase<ItemInfoPopupMenuState>
{
	[Serializable]
	public struct References
	{
		public GameObject popup;

		public Image blueOverlay;

		public TextMeshProUGUI headerLabel;

		public TweenedButton closeButton;

		public TextMeshProUGUI itemTitleLabel;

		public TextMeshProUGUI additionalItemInfoLabel;

		public Transform infoItemParent;

		public ItemInfoPopupItem infoItemPrefab;

		public ItemInfoPopupSpawnerItem infoSpawnerItemPrefab;

		public BoxInfoItem chestInfoItemPrefab;

		public TextMeshProUGUI chestInfoDescription;

		public GridLayoutGroup gridLayout;

		public int additionalScrollViewBottomPadding;

		public Transform itemIconParent;

		public RectTransform spawnerInfoBox;

		public Transform horizontalIconsParent;

		public TextMeshProUGUI spawnerDescriptionLabel;

		public ScrollRect horizontalScrollRect;

		public ScrollRect verticalScrollRect;
	}

	[SerializeField]
	public References refs;

	[NonSerialized]
	public (string tag, GameObject go) itemIcon;

	[NonSerialized]
	public int originalBottomPadding;

	[NonSerialized]
	public (int itemId, bool wasOpenedFromShop) openedItem;

	public TweenedButton CloseButton => null;

	public override string MenuTag => null;

	public override GameObject Popup => null;

	public override Image BlueOverlay => null;

	public override ScrollRect ScrollRect => null;

	public override ItemInfoPopupMenuState MenuState { get; set; }

	public IItemDefinition GetSelectedItem()
	{
		return null;
	}

	public override bool NeedsBlockingLayer()
	{
		return false;
	}

	public override bool DoesSupportHardwareBackButton()
	{
		return false;
	}

	public new void Awake()
	{
	}

	public override void PopulateContent()
	{
	}

	public void SendFlashSaleImpressions(List<IShopItemInfo> purchasableItems)
	{
	}

	public override void OnShown()
	{
	}

	public override void OnHidden(HideMenuReason reason)
	{
	}

	public ItemInfoPopupItem.VisibleState GetVisibleState(IItemDefinition itemDefinition)
	{
		return default(ItemInfoPopupItem.VisibleState);
	}

	public void UpdateSelection(IItemDefinition itemDefinition)
	{
	}

	public override void DisposeContent(DisposeContentReason reason)
	{
	}

	public void CleanupSpawnerInfo()
	{
	}

	public void ShowSourceSpawnerInfo(bool hasSelectedItemBeenDiscovered)
	{
	}

	public void ShowChestContents()
	{
	}

	public void DelayedHorizontalScrollingReset()
	{
	}

	public void DelayedPaddingAdjustment()
	{
	}

	public void CreateMergeChainItems()
	{
	}

	public void CreateItemIcon()
	{
	}

	public bool CreateSpawnerItems(bool forceShowSource)
	{
		return false;
	}

	public static bool IsItemPurchasableInFlashSales(IPlayer player, IItemDefinition itemDefinition, out IShopItemInfo shopItemInfo)
	{
		shopItemInfo = null;
		return false;
	}

	public void FilterSpawners(List<IItemDefinition> outputSpawnerItemsToShow)
	{
	}

	public static void GetProducingParents(IMergeMansionGameConfig config, GameConfigClientCache gameConfigClientCache, IItemDefinition parentItem, IEnumerable<IItemDefinition> itemsToCombineInfoWith, List<IItemDefinition> outputProducingParents)
	{
	}

	public static IEnumerable<IItemDefinition> GatherSpawnersFromEarlierInChain(PlayerModel player, IMergeMansionGameConfig config, GameConfigClientCache gameConfigClientCache, IItemDefinition parentItem, IEnumerable<IItemDefinition> itemsToCombineInfoWith)
	{
		return null;
	}

	public IEnumerable<IItemDefinition> FilterEventItems(List<IItemDefinition> itemDefinitions)
	{
		return null;
	}

	public bool AreThereCombinedInfoItemsIn(List<IItemDefinition> spawnerItemsToShow, IItemDefinition spawner)
	{
		return false;
	}

	public void FillAdditionalTextIfNeeded(bool hasItemBeenDiscovered)
	{
	}

	public string GetDynamicValue()
	{
		return null;
	}

	public int ItemInfoComparer((ItemDefinition definition, int odd) item)
	{
		return 0;
	}
}
