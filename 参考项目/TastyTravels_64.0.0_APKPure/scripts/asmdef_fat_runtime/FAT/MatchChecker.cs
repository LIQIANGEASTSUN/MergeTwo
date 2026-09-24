using System;
using System.Collections.Generic;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MatchChecker
	{
		public struct HintScanItem
		{
			public Item item;

			public int id;

			public int tid;

			public bool isDead;

			public bool isActive;

			public bool isFrozen;

			public bool hasBubbleComponent;

			public bool canConsumeState;

			public ItemMergeComponent mergeComponent;

			public ItemSkillComponent skillComponent;

			public ItemClickSourceComponent clickSourceComponent;

			public bool isSource;

			public HintScanItem(Item item_)
			{
				item = null;
				id = 0;
				tid = 0;
				isDead = false;
				isActive = false;
				isFrozen = false;
				hasBubbleComponent = false;
				canConsumeState = false;
				mergeComponent = null;
				skillComponent = null;
				clickSourceComponent = null;
				isSource = false;
			}
		}

		public sealed class HintScanItemComparer : IComparer<HintScanItem>
		{
			public int Compare(HintScanItem a, HintScanItem b)
			{
				return 0;
			}
		}

		[NonSerialized]
		public Item mMatchHintItemA;

		[NonSerialized]
		public Item mMatchHintItemB;

		[NonSerialized]
		public Item mTapTarget;

		[NonSerialized]
		public int mSelectedTid;

		[NonSerialized]
		public bool mHasMatchItem;

		[NonSerialized]
		public List<Item> mCache;

		[NonSerialized]
		public List<HintScanItem> mScanCache;

		[NonSerialized]
		public Coroutine mCoFindTapSource;

		[NonSerialized]
		public float mResolveTime;

		[NonSerialized]
		public Sequence mMatchSeq;

		public static readonly IComparer<HintScanItem> sScanItemComparer;

		[NonSerialized]
		public ulong mBoardGridIgnoreMap;

		public const int default_board_width = 7;

		public void Setup()
		{
		}

		public void Cleanup()
		{
		}

		public void MarkCoord(int coord_x, int coord_y)
		{
		}

		public void UnmarkCoord(int coord_x, int coord_y)
		{
		}

		public bool IsCoordMarked(Vector2Int coord)
		{
			return false;
		}

		public int _CoordToBoardIdx(int coord_x, int coord_y)
		{
			return 0;
		}

		public bool HasMatchPair()
		{
			return false;
		}

		public bool IsMatchHintItemReady()
		{
			return false;
		}

		public bool ShouldPlayMatchHintAnim()
		{
			return false;
		}

		public void PlayMatchHintAnim()
		{
		}

		public Sequence _BuildMatchAnim(Transform src, Transform dst, Vector3 src_from, Vector3 src_to, Vector3 dst_from, Vector3 dst_to)
		{
			return null;
		}

		public Sequence _BuildMatchAnimRefactor(Transform src, Transform dst, Vector3 src_from, Vector3 src_to, Vector3 dst_from, Vector3 dst_to)
		{
			return null;
		}

		public void OnScreenStateChanged(ScreenState state)
		{
		}

		public void StopMatchHintAnim()
		{
		}

		public (Vector2Int, Vector2Int) GetMatchPairCoords()
		{
			return default((Vector2Int, Vector2Int));
		}

		public bool HasTapTarget()
		{
			return false;
		}

		public Vector2Int GetTapTargetCoord()
		{
			return default(Vector2Int);
		}

		public void SetMatchTid(int tid)
		{
		}

		public void FindMatch(bool ignoreConsume = false)
		{
		}

		public int GetMatchItem()
		{
			return 0;
		}

		public void CheckHint(bool forceCheck = false)
		{
		}

		public void _TryFindTapTarget()
		{
		}

		public void _StopFindTapTarget()
		{
		}

		public void _FindMatch(bool ignoreConsume = false)
		{
		}

		public void _SetMatch(Item a, Item b)
		{
		}

		public void ReverseMatch()
		{
		}

		public void _BuildScanCache()
		{
		}

		public bool _TryGetConsumeMatch(HintScanItem a, HintScanItem b, out Item consume, out Item dst)
		{
			consume = null;
			dst = null;
			return false;
		}

		public void _FillItem(Item item)
		{
		}
	}
}
