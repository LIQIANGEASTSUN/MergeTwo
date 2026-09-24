using System;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class ItemBubbleComponent : ItemComponentBase
	{
		[NonSerialized]
		public ItemBubbleType _bubbleType;

		[NonSerialized]
		public long _lifeTime;

		[NonSerialized]
		public int _lifeCounter;

		[NonSerialized]
		public bool _isWatchingAds;

		[NonSerialized]
		public int _watchingAdItemId;

		[NonSerialized]
		public int _watchingAdItemTid;

		[NonSerialized]
		public int _watchingAdBoardId;

		[NonSerialized]
		public int _breakCost;

		public int BreakCost => 0;

		public long LifeRemainTime => 0L;

		public void InitItemBubbleType(ItemBubbleType type, long lifeTime = 0L, int lifeCounter = 0)
		{
		}

		public bool IsBubbleItem()
		{
			return false;
		}

		public bool IsFrozenItem()
		{
			return false;
		}

		public void OnWatchBubbleAd_Prepare()
		{
		}

		public void OnWatchBubbleAd_Finish(bool suc, ReasonString reason)
		{
		}

		public void _OnInit(long lifeTime = 0L, int lifeCounter = 0)
		{
		}

		public void _InitBubble(int lifeCounter = 0)
		{
		}

		public void _InitFrozen(long lifeTime = 0L, int lifeCounter = 0)
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public override void OnUpdate(int dt)
		{
		}

		public bool _IsInteracting()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdate(int P0)
		{
		}
	}
}
