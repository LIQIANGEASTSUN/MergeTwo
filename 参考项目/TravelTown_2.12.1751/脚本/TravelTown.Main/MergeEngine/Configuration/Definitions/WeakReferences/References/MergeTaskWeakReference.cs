using System;
using GameCore.Configuration.WeakReferences;
using MergeEngine.Configuration.Tasks;

namespace MergeEngine.Configuration.Definitions.WeakReferences.References
{
	[Serializable]
	public class MergeTaskWeakReference : ConfigurableScriptableObjectWeakReference<IMergeTask, MergeTask>
	{
	}
}
