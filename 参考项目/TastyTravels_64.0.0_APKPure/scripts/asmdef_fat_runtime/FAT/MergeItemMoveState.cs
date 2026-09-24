using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MergeItemMoveState : MergeItemBaseState
	{
		[NonSerialized]
		public float minDist;

		[NonSerialized]
		public float dampping;

		[NonSerialized]
		public Vector2 targetPos;

		public MergeItemMoveState(MBItemView v)
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
