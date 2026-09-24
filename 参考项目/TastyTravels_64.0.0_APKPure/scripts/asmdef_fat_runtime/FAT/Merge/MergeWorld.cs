using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using EL;
using IFix.Core;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class MergeWorld
	{
		public interface IActivityHandler
		{
		}

		public class MergeWorldInternal : IMergeWorldPrivate
		{
			public MergeWorld mWorld;

			public Dictionary<int, Item> mUnusedItem;

			MergeWorld IMergeWorldPrivate.world => null;

			bool IMergeWorldPrivate.GrabUnusedItem(int itemId, out Item item)
			{
				item = null;
				return false;
			}
		}

		public class BonusClaimRewardData
		{
			public Item item;

			public Vector2Int overrideRewardPos;

			[NonSerialized]
			public RewardCommitData mData;

			public BonusClaimRewardData(Item it, RewardCommitData data)
			{
			}

			public RewardCommitData GrabReward()
			{
				return null;
			}
		}

		[Flags]
		public enum WalkItemMask
		{
			Board = 1,
			Inventory = 2,
			RewardList = 4,
			NoRewardList = 3,
			NoInventory = 5,
			All = int.MaxValue
		}

		public HandlerChain<Item, FuncType, int, int> handlerItemFuncUse;

		[NonSerialized]
		public MergeWorldInternal mPrivateInterface;

		[NonSerialized]
		public List<IMergeBonusHandler> mMergeBonusHandlers;

		[NonSerialized]
		public MergeWorldParam mParam;

		[NonSerialized]
		public int mWaitChest;

		[NonSerialized]
		public int mWaitChestTime;

		[NonSerialized]
		public int mLastItemId;

		[NonSerialized]
		public Board mBoard;

		[NonSerialized]
		public Inventory mInventory;

		[NonSerialized]
		public OrderBox mOrderBox;

		[NonSerialized]
		public JumpCD mJumpCD;

		[NonSerialized]
		public TokenMulti mTokenMulti;

		[NonSerialized]
		public RewardStagingArea mRewardStagingArea;

		[NonSerialized]
		public GirdReward mGirdReward;

		[NonSerialized]
		public List<Item> mRewardList;

		[NonSerialized]
		public HashSet<ItemComponentType> mDisabledComponent;

		[NonSerialized]
		public List<Item> mItemsToDispose;

		[NonSerialized]
		public long mLastTickMilli;

		[NonSerialized]
		public long mLastActiveTime;

		[NonSerialized]
		public Item mSoldItem;

		[NonSerialized]
		public int mSkipedSeconds;

		[NonSerialized]
		public int mConfigVersion;

		[NonSerialized]
		public int mRewardListUnreadCount;

		[NonSerialized]
		public Dictionary<int, InterlaceOutputMethod> mInterlaceOutputMethodById;

		[NonSerialized]
		public Dictionary<int, ItemOutputRandomList> mRandomOutputListById;

		[NonSerialized]
		public List<IActivityHandler> mActivityHandlers;

		[NonSerialized]
		public fat.gamekitdata.Merge mCurrentDataSession;

		[NonSerialized]
		public List<Item> mPriorOrderConsumeItems;

		public int rewardListUnreadCount => 0;

		public long lastActiveTime => 0L;

		public long lastTickMilli => 0L;

		public Inventory inventory => null;

		public int configVersion => 0;

		public Board activeBoard => null;

		public OrderBox orderBox => null;

		public JumpCD jumpCD => null;

		public TokenMulti tokenMulti => null;

		public RewardStagingArea rewardStagingArea => null;

		public GirdReward girdReward => null;

		public int currentWaitChest => 0;

		public int currentWaitChestTime => 0;

		public Item undoItem => null;

		public int nextReward => 0;

		public Item nextRewardItem => null;

		public int rewardCount => 0;

		public string dataTrackName => null;

		public MergeWorldTracer currentTracer { get; set; }

		public IOrderHelper currentOrderHelper { get; set; }

		public IList<IActivityHandler> activityHandlers => null;

		public bool isGiftboxUsable => false;

		public bool isEquivalentToMain => false;

		public event Action<BonusClaimRewardData> onCollectBonus
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

		public event Action<BonusClaimRewardData> onCollectTapBonus
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

		public event Action<bool> onRewardListChange
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

		public event Action onRewardListUnreadChange
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

		public event Action<Item> onChestWaitFinish
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

		public event Action<Item> onChestWaitStart
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

		public event Action<Item> onSelledItemChange
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

		public event Action<Item, ItemEventType> onItemEvent
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

		public void BindTracer(MergeWorldTracer tracer)
		{
		}

		public void BindOrderHelper(IOrderHelper helper)
		{
		}

		public void FillMergeBonusHandler(List<IMergeBonusHandler> container)
		{
		}

		public void RegisterActivityHandler(IActivityHandler handler)
		{
		}

		public void UnregisterActivityHandler(IActivityHandler handler)
		{
		}

		public InterlaceOutputMethod GetInterlaceRandomForId(int tid, ItemComponentType tp = ItemComponentType.EatSource)
		{
			return null;
		}

		public ItemOutputRandomList GetRandomListForId(int tid, ItemComponentType tp = ItemComponentType.ClickSouce)
		{
			return null;
		}

		public void UnRegisterConfigMergeBonusHandler()
		{
		}

		public void UnRegisterBubbleMergeBonusHandler()
		{
		}

		public void SetWorldParam(MergeWorldParam p)
		{
		}

		public void SetConfigVersion(int version)
		{
		}

		public int ConsumeNextItemId()
		{
			return 0;
		}

		public void FinishDisposeItem(Item item)
		{
		}

		public void SetWaitChest(Item item)
		{
		}

		public void SetSoldItem(Item item)
		{
		}

		public Item GrabSelledItem()
		{
			return null;
		}

		public Item GetItem(int itemId)
		{
			return null;
		}

		[IDTag(1)]
		public Item AddReward(int tid, bool toFirstPlace = false)
		{
			return null;
		}

		[IDTag(0)]
		public void AddReward(Item rewardItem, bool toFirstPlace = false)
		{
		}

		public void SortRewardList()
		{
		}

		public int FindRewardIndex(int tid)
		{
			return 0;
		}

		public int FindRewardCount(int tid)
		{
			return 0;
		}

		public int PeekRewardByIdx(int idx)
		{
			return 0;
		}

		public Item PeekNextReward()
		{
			return null;
		}

		public Item ConsumeRewardByIdx(int idx)
		{
			return null;
		}

		public int PeekNextFixedCategoryOutputIdx(int categoryId)
		{
			return 0;
		}

		public int ConsumeNextFixedCategoryOutputIdx(int categoryId)
		{
			return 0;
		}

		public int PeekNextFixedItemOutpuIdx(int itemId)
		{
			return 0;
		}

		public int ConsumeNextFixedItemOutputIdx(int itemId)
		{
			return 0;
		}

		public void Update(int milli)
		{
		}

		public int ForwardChestWaitTime(int milli)
		{
			return 0;
		}

		public void SetCurrentChestOpen()
		{
		}

		public bool UseBonusItem(Item item)
		{
			return false;
		}

		public bool UseTapBonusItem(Item item)
		{
			return false;
		}

		public bool UseOrderBoxItem(Item item)
		{
			return false;
		}

		public bool OnJumpCDItemExpired(int itemId)
		{
			return false;
		}

		public bool UseJumpCDItem(Item item)
		{
			return false;
		}

		public bool OnTokenMultiItemExpired(int itemId)
		{
			return false;
		}

		public bool UseTokenMultiItem(Item item)
		{
			return false;
		}

		public BonusClaimRewardData CollectActivityEnergy(ItemActivityComponent com, Item disposeTarget)
		{
			return null;
		}

		public void WalkAllItem(Action<Item> func, WalkItemMask walkMask = WalkItemMask.All)
		{
		}

		public bool IsComponentDisable(ItemComponentType type)
		{
			return false;
		}

		public void DisableComponent(ItemComponentType type, bool disable)
		{
		}

		public void PostProcessItemComponent(ItemComponentType type, ItemComponentBase com)
		{
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void TriggerItemEvent(Item item, ItemEventType ev)
		{
		}

		public void SetSkipSeconds(int seconds)
		{
		}

		public void AddPriorityConsumeItem(Item item)
		{
		}

		public void ClearPriorityConsumeItem()
		{
		}

		public bool TryConsumeOrderItem(IEnumerable<ItemConsumeRequest> itemsToConsume, List<Item> itemsToConfirm, bool dryrun)
		{
			return false;
		}

		public int RemoveItem(int targetTid)
		{
			return 0;
		}

		public int ConvertItem(int targetTid, int toTid)
		{
			return 0;
		}

		public void _DisposeItem(Item item, ItemDeadType type)
		{
		}

		public int _SortForOrderConsume(Item a, Item b)
		{
			return 0;
		}

		public int _SortForOrderConsumeScore(Item a)
		{
			return 0;
		}

		public void _SerializeItem(Item item)
		{
		}

		public void Deserialize(fat.gamekitdata.Merge data, Action configCB)
		{
		}

		public void SetRewardListRead()
		{
		}

		public void _ReplaceItemFilter(MergeItem itemData, IDictionary<int, ItemReplace> replaceDict, out Item item)
		{
			item = null;
		}

		public void _SetRewardListUnread(int count)
		{
		}

		public void _OnRewardListChange(bool isAdd)
		{
		}
	}
}
