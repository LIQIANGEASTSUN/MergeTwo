using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.IAP;
using GameLogic.Config.Shop;
using GameLogic.Config.Shop.Items;
using GameLogic.Offers;
using GameLogic.Player;
using Merge;
using Metaplay.Core.Offers;

namespace UI.Popups.Shop
{
	public static class ShopPopupExtensions
	{
		[CompilerGenerated]
		public sealed class _003CSynthesizeShopInfoFromOfferGroup_003Ed__4 : IEnumerable<IShopItemInfo>, IEnumerable, IEnumerator<IShopItemInfo>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public IShopItemInfo _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IActiveOfferGroup offerGroup;

			public IActiveOfferGroup _003C_003E3__offerGroup;

			[NonSerialized]
			public ShopItemId _003CshopItemId_003E5__2;

			[NonSerialized]
			public ShopCategoryId _003CshopCategoryId_003E5__3;

			[NonSerialized]
			public MergeMansionOfferGroupInfo _003CofferGroupInfo_003E5__4;

			[NonSerialized]
			public MetaOfferGroupId _003CofferGroupId_003E5__5;

			[NonSerialized]
			public IEnumerator<IActiveOffer> _003C_003E7__wrap5;

			[NonSerialized]
			public MergeMansionOfferInfo _003CofferInfo_003E5__7;

			[NonSerialized]
			public MetaOfferId _003CofferId_003E5__8;

			[NonSerialized]
			public List<Metaplay.Core.Rewards.MetaPlayerRewardBase>.Enumerator _003C_003E7__wrap8;

			IShopItemInfo IEnumerator<IShopItemInfo>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CSynthesizeShopInfoFromOfferGroup_003Ed__4(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			public void _003C_003Em__Finally2()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<IShopItemInfo> IEnumerable<IShopItemInfo>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static IEnumerable<IShopItemEntry> AsPlainEntries(this IEnumerable<IShopItemInfo> itemInfos)
		{
			return null;
		}

		public static IEnumerable<IShopItemEntry> AsShopEntries(this IEnumerable<IShopItemInfo> itemInfos, bool shouldHaveIndicator)
		{
			return null;
		}

		public static IEnumerable<IShopItemEntry> AsShopEntries(this IEnumerable<IShopItemInfo> itemInfos, Predicate<IShopItemInfo> shouldHaveIndicator)
		{
			return null;
		}

		public static IEnumerable<IShopItemInfo> GetShopInfosForPlacement(this IPlayer player, OfferPlacementId placement, bool? isUnderMore)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CSynthesizeShopInfoFromOfferGroup_003Ed__4))]
		public static IEnumerable<IShopItemInfo> SynthesizeShopInfoFromOfferGroup(this IActiveOfferGroup offerGroup)
		{
			return null;
		}

		public static string BoardShopTitle(this MergeBoardId mergeBoardId)
		{
			return null;
		}

		public static string ToOfferTriggerType(this RedDotStatus redDotStatus)
		{
			return null;
		}
	}
}
