using System;

namespace MergeEngine.ECS.Components.Items.Producers
{
	[Serializable]
	public class SerializedItemSpawningComponent : SerializedTimeCycleComponent
	{
		public int Seed;

		public int ItemIndex;
	}
}
