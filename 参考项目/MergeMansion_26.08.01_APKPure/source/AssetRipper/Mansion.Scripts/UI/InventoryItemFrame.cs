using System;
using System.Collections.Generic;
using Audio;
using Coffee.UIExtensions;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Utility;
using TMPro;
using UI.Buttons;
using UI.Tooltips;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
	public class InventoryItemFrame : MonoBehaviour
	{
		[SerializeField]
		public GameObject itemIcon;

		[SerializeField]
		public GameObject infoButton;

		[Header("Buyable slot content")]
		[SerializeField]
		public GameObject buyContainer;

		[SerializeField]
		public TextMeshProUGUI buyText;

		[SerializeField]
		public CurrencyButton buyButton;

		[Header("Claimable slot content")]
		[SerializeField]
		public GameObject claimContainer;

		[SerializeField]
		public TweenedButton claimButton;

		[SerializeField]
		public GameObject lockedButton;

		[SerializeField]
		public TooltippedObject tooltip;

		[SerializeField]
		public RedDotIndicator newTeasedSlotIndicator;

		[Space(10f)]
		[SerializeField]
		public Button moveItemIntoBoard;

		[SerializeField]
		public Image checkmark;

		[SerializeField]
		public Image greenBackground;

		[SerializeField]
		public InventoryItemFrameUsesLeft usesLeft;

		[SerializeField]
		public InventoryItemFrameTimeStorage timeStorage;

		[SerializeField]
		public Transform eventIndicatorContainer;

		[SerializeField]
		public UIParticle unlockParticles;

		[NonSerialized]
		public MergeItem mergeItem;

		[NonSerialized]
		public IBoardInventory inventory;

		[NonSerialized]
		public Option<PlayerModel> playerOption;

		[NonSerialized]
		public List<(GameObject, string)> pooledObjects;

		[NonSerialized]
		public Animation itemSlotBounceAnimation;

		[NonSerialized]
		public PlayerRequirement teasedUnlockRequirement;

		[NonSerialized]
		public IMenuController menuController;

		public IAudioPlayer Audio => null;

		public MergeItem Item => null;

		public IBoardInventory Inventory => null;

		public GameObject InfoButtonGameObject => null;

		public IItemDefinition GetDefinition(IPlayer player)
		{
			return null;
		}

		public void Awake()
		{
		}

		public void Start()
		{
		}

		public Button GetMoveItemIntoBoardButton()
		{
			return null;
		}

		public void Show(MergeItem item, IBoardInventory inventory, PlayerModel player, PlayerClientCache playerClientCache, bool withAnimation = false, bool withParticles = false)
		{
		}

		public void ShowEmpty(bool withAnimation, bool withParticles)
		{
		}

		public void SetCheckmarkIndicatorsEnabled(bool value)
		{
		}

		public void ShowBuySlot(IPlayer player, bool withAnimation, bool withParticles)
		{
		}

		public void ShowTeasedSlot(PlayerModel playerModel, PlayerRequirement requirement, bool withAnimation, bool withParticles, bool seen)
		{
		}

		public void ShowUnlockableSlot(bool withAnimation, bool withParticles)
		{
		}

		public void SetPrice(Currencies currency, long price)
		{
		}

		public void Hide()
		{
		}

		public void ShowItemInfo()
		{
		}

		public void ShowSlotUnlockInfo()
		{
		}

		public void AssignBuyAction(Action processBuySlot)
		{
		}

		public void AssignClaimAction(Action processClaimSlot)
		{
		}

		public void SetupBoosterContent(IPlayer player, MergeItem item)
		{
		}

		public void SetupUsesLeft(IPlayer player, MergeItem item)
		{
		}

		public void SetupTimeStorage(IPlayer player, MergeItem item)
		{
		}

		public void SetupEventIndicator(Option<PlayerClientCache> playerClientCacheOption)
		{
		}

		public string LocaliseUnlockRequirement(IPlayer player, PlayerRequirement requirement)
		{
			return null;
		}

		public void PlayCelebratoryEffects(bool withAnimation, bool withParticles)
		{
		}
	}
}
