using System;
using UnityEngine;

namespace FAT
{
	public class MBBoardAutoGuide : MonoBehaviour
	{
		public enum BoardType
		{
			None = 0,
			Mineboard = 1
		}

		public int Interval;

		public BoardType boardType;

		public GameObject Finger;

		[NonSerialized]
		public int _curInterval;

		[NonSerialized]
		public bool _isPlaying;

		public void SecondUpdate()
		{
		}

		public void Interrupt()
		{
		}

		public void RefreshMineAuto()
		{
		}

		public void ShowFinger(Vector3 pos)
		{
		}

		public void HideFinger()
		{
		}
	}
}
