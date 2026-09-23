using System;
using GameCore.Configuration.WeakReferences;
using GameCore.Configuration.WeakReferences.Providers;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Models;
using Zenject;

namespace MergeEngine.Configuration.Definitions.WeakReferences.Providers
{
	public class BoosterProvider : WeakReferenceTargetProvider<IBoosterItem, string>
	{
		[Inject]
		[NonSerialized]
		public IBoosterModel _boosterModel;

		public override IBoosterItem ProvideInstance(WeakReference<IBoosterItem, string> reference)
		{
			return null;
		}
	}
}
