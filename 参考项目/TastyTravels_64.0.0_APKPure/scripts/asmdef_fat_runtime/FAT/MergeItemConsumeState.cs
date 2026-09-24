using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MergeItemConsumeState : MergeItemBaseState
	{
		[NonSerialized]
		public ItemInteractContext context;

		[NonSerialized]
		public float minDist;

		[NonSerialized]
		public float dampping;

		[NonSerialized]
		public Vector2 targetPos;

		[NonSerialized]
		public Item dstItem;

		public MergeItemConsumeState(MBItemView v)
			: base(null)
		{
		}

		public override void OnEnter()
		{
		}

		public override ItemLifecycle Update(float dt)
		{
			return default(ItemLifecycle);
		}

		public void _003C_003EiFixBaseProxy_OnEnter()
		{
		}

		public ItemLifecycle _003C_003EiFixBaseProxy_Update(float P0)
		{
			return default(ItemLifecycle);
		}
	}
}
