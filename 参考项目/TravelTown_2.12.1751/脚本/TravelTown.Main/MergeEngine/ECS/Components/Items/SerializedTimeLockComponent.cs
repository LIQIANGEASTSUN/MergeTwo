using System;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedTimeLockComponent
	{
		public double TimeLeft;

		public bool BeingUnlocked;

		public bool IsCooldownBlocked;

		public long UnlockEndTime;
	}
}
