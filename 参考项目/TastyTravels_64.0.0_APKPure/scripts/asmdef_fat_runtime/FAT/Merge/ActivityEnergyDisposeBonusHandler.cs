using System;

namespace FAT.Merge
{
	public class ActivityEnergyDisposeBonusHandler : IDisposeBonusHandler
	{
		[NonSerialized]
		public int activityId;

		public int priority;

		int IDisposeBonusHandler.priority => 0;

		void IDisposeBonusHandler.OnRegister()
		{
		}

		void IDisposeBonusHandler.OnUnRegister()
		{
		}

		void IDisposeBonusHandler.Process(DisposeBonusContext context)
		{
		}

		public void InitConfig(int activityId)
		{
		}
	}
}
