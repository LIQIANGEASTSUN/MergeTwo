using System;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MergeItemSpawnPopStateEx : MergeItemBaseState
	{
		[NonSerialized]
		public bool isTweenFinished;

		[NonSerialized]
		public Sequence seq;

		[NonSerialized]
		public bool effectShowed;

		public Vector3 shadowPresudoPosition { get; set; }

		public bool _shouldShowToast => false;

		public MergeItemSpawnPopStateEx(MBItemView v)
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

		public void _WhenOnBoard()
		{
		}

		public void _OnShowOnBoardEffect()
		{
		}

		public void _ShowToast(float delay)
		{
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
