using System;
using GameCore.Configuration.WeakReferences;
using Merger.Boosters.Declarations.Definitions.Interfaces;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	[Serializable]
	public class BoosterWeakReference : WeakReference<IBoosterItem, string>, IItemWeakReference, IStringKeyWeakReference
	{
		public IItem Item => null;

		public override bool IsKeyEmpty => false;

		public BoosterWeakReference(string uniqueId)
			: base((string)null)
		{
		}

		public BoosterWeakReference()
			: base((string)null)
		{
		}
	}
}
