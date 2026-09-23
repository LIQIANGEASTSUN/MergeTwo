using System;
using System.Collections.Generic;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class DifficultyCapability
	{
		public bool ManualOverride;

		public float AverageDifficulty;

		public List<DifficultyEntry> Difficulties;
	}
}
