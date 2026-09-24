using System;
using GameCore.Configuration.WeakReferences;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	[Serializable]
	public class MergeItemWeakReference : ConfigurableScriptableObjectWeakReference<IMergeItem, MergeItem>, IItemWeakReference, IStringKeyWeakReference, IEquatable<MergeItemWeakReference>
	{
		public IItem Item => null;

		public MergeItemWeakReference()
		{
		}

		public MergeItemWeakReference(string uniqueId)
		{
		}

		public virtual bool Equals(MergeItemWeakReference other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
