using System;
using DG.Tweening;
using FAT.Merge;

namespace FAT
{
	public class MergeItemSpawnState : MergeItemBaseState
	{
		[NonSerialized]
		public bool isTweenFinished;

		[NonSerialized]
		public Tween scaleTween;

		public MergeItemSpawnState(MBItemView v)
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

		public void _OnTweenFinished()
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
