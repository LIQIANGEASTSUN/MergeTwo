using System;
using FAT.Merge;
using UnityEngine;

namespace FAT
{
	public class MBBoardViewMoveTempIcon : MonoBehaviour
	{
		public Item item;

		public MBItemView view;

		[NonSerialized]
		public Vector3 initialWorldPosition;

		[NonSerialized]
		public bool hasTriggeredCollect;

		[NonSerialized]
		public float collectTriggerDistance;

		[NonSerialized]
		public Vector3 triggerDirection;

		public void SetImage(Item item)
		{
		}

		public void SetCollectTriggerDistance(float distance, Vector3 direction)
		{
		}

		public void Update()
		{
		}

		public void TriggerFlyAnimation()
		{
		}

		public void OnDestroy()
		{
		}
	}
}
