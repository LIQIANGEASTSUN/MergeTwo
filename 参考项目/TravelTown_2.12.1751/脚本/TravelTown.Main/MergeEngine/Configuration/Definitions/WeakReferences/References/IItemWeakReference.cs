using GameCore.Configuration.WeakReferences;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	public interface IItemWeakReference : IStringKeyWeakReference
	{
		IItem Item { get; }
	}
}
