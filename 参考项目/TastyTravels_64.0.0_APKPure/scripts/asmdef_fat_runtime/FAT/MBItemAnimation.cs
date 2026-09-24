using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBItemAnimation : MonoBehaviour
	{
		public static readonly string kAnimTriggerTap;

		public static readonly string kAnimTriggerTapDelayHigh;

		public static readonly string kAnimTriggerSpawn;

		public static readonly string kAnimTriggerDrop;

		[SerializeField]
		public Animator animator;

		[NonSerialized]
		public MBItemView mView;

		[NonSerialized]
		public int mState;

		[NonSerialized]
		public int mFinalAnimStateVal;

		[NonSerialized]
		public bool mIsDirty;

		public void SetData(MBItemView view)
		{
		}

		public void ClearData()
		{
		}

		public void PlayTap()
		{
		}

		public void PlayTapDelayHigh()
		{
		}

		public void PlaySpawn()
		{
		}

		public void PlayDropToGround()
		{
		}

		public void AddHintType(ItemHintState state)
		{
		}

		public void RemoveHintType(ItemHintState state)
		{
		}

		public void UpdateEx()
		{
		}

		public void _UpdateAnim()
		{
		}
	}
}
