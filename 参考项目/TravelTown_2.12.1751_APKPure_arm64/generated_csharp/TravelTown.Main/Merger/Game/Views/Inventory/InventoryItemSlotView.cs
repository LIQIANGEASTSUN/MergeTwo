using System;
using System.Runtime.CompilerServices;
using Framework.Core.View.ReactiveComponents;
using MergeEngine.Configuration;
using Merger.Game.Views.Components;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace Merger.Game.Views.Inventory
{
	public class InventoryItemSlotView : MergeItemView
	{
		[SerializeField]
		public ReactiveButton _infoButton;

		[SerializeField]
		public ReactiveButton _itemButton;

		[NonSerialized]
		public IMergeItem _mergeItem;

		public override IMergeItem MergeItem
		{
			set
			{
			}
		}

		public AssetReferenceT<Sprite> Asset
		{
			set
			{
			}
		}

		public int SlotIndex { get; set; }

		public string ItemUUID { get; set; }

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

		public event Action<IMergeItem, string> InfoRequested
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

		public void ShowMergeGraphPopup()
		{
		}

		public void RemoveFromInventory()
		{
		}
	}
}
