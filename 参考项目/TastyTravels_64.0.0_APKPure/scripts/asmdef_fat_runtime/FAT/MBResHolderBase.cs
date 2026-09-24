using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBResHolderBase : MonoBehaviour, IResHolder
	{
		public virtual void OnInit(Item item)
		{
		}

		public virtual void OnClear()
		{
		}

		public virtual void SetBoardState()
		{
		}

		public virtual void SetBornState()
		{
		}

		public virtual void SetRewardState()
		{
		}
	}
}
