using System;
using FAT.Merge;

namespace FAT
{
	public class MergeItemBaseState
	{
		[NonSerialized]
		public MBItemView view;

		public MergeItemBaseState(MBItemView v)
		{
		}

		public virtual void OnEnter()
		{
		}

		public virtual void OnLeave()
		{
		}

		public virtual ItemLifecycle Update(float dt)
		{
			return default(ItemLifecycle);
		}
	}
}
