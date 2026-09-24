using System;
using System.Runtime.CompilerServices;
using Framework.Core.View.ReactiveComponents;
using MergeEngine.Configuration;
using Merger.Game.Views.Components;
using UnityEngine;
using UnityEngine.UI;

namespace Merger.Game.Views.Inventory
{
	public class InventoryProducerSlotView : MergeItemView
	{
		[SerializeField]
		public ReactiveButton _infoButton;

		[SerializeField]
		public ReactiveButton _itemButton;

		[SerializeField]
		public GameObject _newBannerGameObject;

		[SerializeField]
		public AddressableImage _iconOutlineImage;

		[SerializeField]
		public ReactiveText _unlocksAtText;

		[SerializeField]
		public Image _unlocksAtBackground;

		[SerializeField]
		public CanvasGroup _itemFadedCanvasGroup;

		[NonSerialized]
		public IMergeItem _mergeItem;

		[NonSerialized]
		public Animator _cachedAnimator;

		[NonSerialized]
		public Animator _cachedBannerAnimator;

		[NonSerialized]
		public bool _wasStored;

		public Image UnlocksAtBackground => null;

		public ReactiveText UnlocksAt => null;

		public CanvasGroup ItemFadedCanvasGroup => null;

		public override IMergeItem MergeItem
		{
			set
			{
			}
		}

		public Animator Animator => null;

		public int SlotIndex { get; set; }

		public bool IsStored
		{
			set
			{
			}
		}

		public event Action<int> TryRemove
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public event Action<IMergeItem> InfoRequested
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public new void Awake()
		{
		}

		public void ActivateNewBanner()
		{
		}

		public void ShowMergeGraphPopup()
		{
		}

		public void RemoveFromInventory()
		{
		}
	}
}
