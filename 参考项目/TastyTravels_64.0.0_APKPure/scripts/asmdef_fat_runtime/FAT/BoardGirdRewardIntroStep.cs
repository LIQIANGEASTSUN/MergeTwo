using System;

namespace FAT
{
	public class BoardGirdRewardIntroStep : BoardIntroStepBase
	{
		[NonSerialized]
		public bool _isListening;

		public override bool CheckCondition()
		{
			return false;
		}

		public override void OnExecute()
		{
		}

		public void CompleteWhenAnimFinish()
		{
		}

		public override void OnComplete()
		{
		}

		public override void OnInterrupted()
		{
		}

		public void _TryEndWaitAnim()
		{
		}

		public bool _003C_003EiFixBaseProxy_CheckCondition()
		{
			return false;
		}

		public void _003C_003EiFixBaseProxy_OnComplete()
		{
		}

		public void _003C_003EiFixBaseProxy_OnInterrupted()
		{
		}
	}
}
