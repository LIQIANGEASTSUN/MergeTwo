using System;
using GameCore.Configuration.WeakReferences;
using GameCore.Configuration.WeakReferences.Providers;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.Configuration.Definitions.WeakReferences.Providers
{
	public class MergeGraphItemProvider : WeakReferenceTargetProvider<IMergeGraphItem, string>
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override IMergeGraphItem ProvideInstance(WeakReference<IMergeGraphItem, string> reference)
		{
			return null;
		}
	}
}
