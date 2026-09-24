using System;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using ParadoxNotion.Design;
using Tools.Attributes;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class DifficultyEntry
	{
		[RequiredWeakReference]
		public MergeItemWeakReference Spawner;

		[MinValue(0)]
		public float Difficulty;
	}
}
