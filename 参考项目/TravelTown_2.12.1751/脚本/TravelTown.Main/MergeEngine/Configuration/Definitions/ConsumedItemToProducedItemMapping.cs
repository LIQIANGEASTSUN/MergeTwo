using System;
using MergeEngine.Configuration.Definitions.WeakReferences.References;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class ConsumedItemToProducedItemMapping
	{
		public MergeItemWeakReference ConsumedItem;

		public MergeItemWeakReference ProducedItem;
	}
}
