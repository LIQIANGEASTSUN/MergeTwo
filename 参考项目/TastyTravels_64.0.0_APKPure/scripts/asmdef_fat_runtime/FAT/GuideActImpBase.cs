using System;
using UnityEngine;

namespace FAT
{
	public class GuideActImpBase : CustomYieldInstruction
	{
		[NonSerialized]
		public bool mIsWaiting;

		public override bool keepWaiting => false;

		public virtual bool IsWaiting()
		{
			return false;
		}

		public virtual void Clear()
		{
		}

		public virtual void Play(string[] param)
		{
		}
	}
}
