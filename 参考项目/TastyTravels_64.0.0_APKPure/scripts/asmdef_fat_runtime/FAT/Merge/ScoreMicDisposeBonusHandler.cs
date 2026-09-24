using System;

namespace FAT.Merge
{
	public class ScoreMicDisposeBonusHandler : IDisposeBonusHandler
	{
		public int priority;

		[NonSerialized]
		public ActivityScoreMic _actInst;

		int IDisposeBonusHandler.priority => 0;

		public bool _isValid => false;

		public ScoreMicDisposeBonusHandler(ActivityScoreMic act)
		{
		}

		void IDisposeBonusHandler.Process(DisposeBonusContext context)
		{
		}

		void IDisposeBonusHandler.OnRegister()
		{
		}

		void IDisposeBonusHandler.OnUnRegister()
		{
		}
	}
}
