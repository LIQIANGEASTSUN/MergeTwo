using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Config;
using FAT.Merge;
using IFix.Core;
using UnityEngine;

namespace FAT
{
	public class MBBoardEffect : MonoBehaviour, IMergeBoard
	{
		[CompilerGenerated]
		public sealed class _003C_CoPlayTimeSkip_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public MBBoardEffect _003C_003E4__this;

			public Vector2Int coord;

			[NonSerialized]
			public int _003CmaxRange_003E5__2;

			[NonSerialized]
			public int _003Cr_003E5__3;

			object IEnumerator<object>.Current
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
			public _003C_CoPlayTimeSkip_003Ed__39(int _003C_003E1__state)
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

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		public Transform effectRoot;

		[SerializeField]
		public RectTransform highlightEff;

		[SerializeField]
		public RectTransform inventoryInd;

		[SerializeField]
		public RectTransform inventoryFeedback;

		[SerializeField]
		public RectTransform highlightEff_AB;

		[NonSerialized]
		public int width;

		[NonSerialized]
		public int height;

		[NonSerialized]
		public BoardEffectHolder holder;

		public RectTransform highlightEffect => null;

		void IMergeBoard.Init()
		{
		}

		void IMergeBoard.Setup(int width, int height)
		{
		}

		void IMergeBoard.Cleanup()
		{
		}

		public void ShowHighlight(Vector2 pos)
		{
		}

		public void HideHighlight()
		{
		}

		public void ShowScoreAnim(Vector2Int pos, string prefab, ScoreEntity.ScoreFlyRewardData r)
		{
		}

		public void ShowInventoryInd(Vector2 screenPos)
		{
		}

		public void ShowInventoryPutInEffect(Vector2 screenPos)
		{
		}

		public void HideInventoryInd()
		{
		}

		public void AddStateEffect(Vector2Int coord, string effConfig)
		{
		}

		public void RemoveStateEffect(Vector2Int coord, string effConfig)
		{
		}

		public void ShowTapLockedEffect(Vector2Int coord)
		{
		}

		public void ShowUnlockNormalEffect(Vector2Int coord)
		{
		}

		public void ShowUnlockLevelEffect(Vector2Int coord, AssetConfig res, int level)
		{
		}

		public void ShowOrderBoxDieEffect(Vector2Int coord, int tid)
		{
		}

		public void ShowMergeEffect(Vector2Int coord)
		{
		}

		[IDTag(0)]
		public void ShowFrozenMergeEffect(Vector2Int coord)
		{
		}

		[IDTag(1)]
		public void ShowFrozenMergeEffect(Vector3 worldPos)
		{
		}

		public void ShowCollectFeedback(Vector2Int coord)
		{
		}

		public void ShowLoginGiftEffect(Vector2Int coord)
		{
		}

		public void ShowMagicHourHitEffect(Vector2Int coord)
		{
		}

		public void ShowMagicOrderHitEffect(Vector2Int coord)
		{
		}

		public void ShowJumpCDEffect(Vector2Int from, Vector2Int to, Item target, float delay)
		{
		}

		public void ShowTokenMultiEffect(Vector2Int from, Vector2Int to, Item target, float delay, ItemEffectType effectType)
		{
		}

		public void ShowTokenMultiStartEffect(MBItemView target, float delay)
		{
		}

		public GameObject ShowInstantEffect(Vector2Int coord, string key, float lifeTime)
		{
			return null;
		}

		[IDTag(0)]
		public void _ShowEffect(Vector2Int coord, ItemEffectType et, float lifeTime)
		{
		}

		[IDTag(1)]
		public void _ShowEffect(Vector3 worldPos, ItemEffectType et, float lifeTime)
		{
		}

		public void UseTimeSkipper(Vector2Int coord)
		{
		}

		[IteratorStateMachine(typeof(_003C_CoPlayTimeSkip_003Ed__39))]
		public IEnumerator _CoPlayTimeSkip(Vector2Int coord)
		{
			return null;
		}

		public void _ApplyTimeSkipToAffectedItem(int r, int c_x, int c_y)
		{
		}

		public void _SetItemTimeSkip(Item item, MBBoardItemHolder holder)
		{
		}

		public void _PlaceItemToCoord(GameObject go, Vector2Int coord)
		{
		}

		public void _OnUseTimeSkipperCallback()
		{
		}
	}
}
