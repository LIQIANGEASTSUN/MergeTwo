using System;
using GameCore.Configuration.WeakReferences;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	[Serializable]
	public class MergeGraphItemWeakReference : WeakReference<IMergeGraphItem, string>, IStringKeyWeakReference
	{
		public override bool IsKeyEmpty => false;

		public MergeGraphItemWeakReference(string uniqueId)
			: base((string)null)
		{
		}

		public MergeGraphItemWeakReference()
			: base((string)null)
		{
		}
	}
}
