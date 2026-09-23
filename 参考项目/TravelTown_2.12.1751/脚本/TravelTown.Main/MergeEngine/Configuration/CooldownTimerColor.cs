using System;
using Framework.Odin;
using MergeEngine.Data;

namespace MergeEngine.Configuration
{
	[Serializable]
	public class CooldownTimerColor
	{
		public BoardItemTimerColor Color;

		[TimeDuration]
		public double MaxTimerValue;
	}
}
