using System;
using DG.Tweening;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MergeItemSpawnRewardState : MergeItemBaseState
	{
		[NonSerialized]
		public bool isTweenFinished;

		[NonSerialized]
		public Tween scaleTween;

		[NonSerialized]
		public Vector2 p0;

		[NonSerialized]
		public Vector2 p1;

		[NonSerialized]
		public Vector2 p2;

		[NonSerialized]
		public float tweenTime;

		[NonSerialized]
		public float totalTime;

		public Vector3 shadowPresudoPosition { get; set; }

		public MergeItemSpawnRewardState(MBItemView v)
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
