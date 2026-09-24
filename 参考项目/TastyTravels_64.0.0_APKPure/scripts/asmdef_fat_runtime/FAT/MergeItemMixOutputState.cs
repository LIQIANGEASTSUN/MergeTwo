using System;
using FAT.Merge;

namespace FAT
{
	public class MergeItemMixOutputState : MergeItemBaseState
	{
		public const float lifeTimeTotal = 0.3f;

		[NonSerialized]
		public float lifeTime;

		public MergeItemMixOutputState(MBItemView v)
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
