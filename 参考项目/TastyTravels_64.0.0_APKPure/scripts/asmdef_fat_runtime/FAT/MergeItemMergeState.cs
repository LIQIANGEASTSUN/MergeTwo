using System;
using DG.Tweening;
using FAT.Merge;

namespace FAT
{
	public class MergeItemMergeState : MergeItemBaseState
	{
		[NonSerialized]
		public bool isTweenFinished;

		[NonSerialized]
		public Tween tweenA;

		[NonSerialized]
		public Tween tweenB;

		[NonSerialized]
		public ItemInteractContext context;

		[NonSerialized]
		public int mSrcId;

		[NonSerialized]
		public int mDstId;

		public MergeItemMergeState(MBItemView v)
			: base(null)
		{
		}

		public override void OnEnter()
		{
		}

		public override void OnLeave()
		{
		}

		public override ItemLifecycle Update(float dt)
		{
			return default(ItemLifecycle);
		}

		public void _PlayMergeAnim()
		{
		}

		public void _OnMergeComplete()
		{
		}

		public void _003C_003EiFixBaseProxy_OnEnter()
		{
		}

		public void _003C_003EiFixBaseProxy_OnLeave()
		{
		}

		public ItemLifecycle _003C_003EiFixBaseProxy_Update(float P0)
		{
			return default(ItemLifecycle);
		}
	}
}
