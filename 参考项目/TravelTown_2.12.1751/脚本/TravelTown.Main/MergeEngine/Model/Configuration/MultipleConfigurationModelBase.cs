using System;
using System.Collections.ObjectModel;
using Framework.Core.MVVM.Model;
using GameCore.Configuration.Definitions;

namespace MergeEngine.Model.Configuration
{
	public abstract class MultipleConfigurationModelBase<TConfiguration, TKey, TLookup> : ModelBase, IMultipleConfigurationModel<TKey, TConfiguration> where TLookup : MultipleConfigurationLookup<TConfiguration, TKey>, new()
	{
		[NonSerialized]
		public readonly TLookup _lookup;

		public ReadOnlyCollection<TConfiguration> Configurations => null;

		public ReadOnlyDictionary<TKey, TConfiguration> ConfigurationById => null;

		public override void InitializeModel()
		{
		}

		public override void DisposeModel()
		{
		}

		public TConfiguration GetById(TKey uniqueId)
		{
			return default(TConfiguration);
		}

		public virtual void ConfigurationAdded(TConfiguration configuration)
		{
		}

		public virtual void ConfigurationRemoved(TConfiguration configuration)
		{
		}

		public MultipleConfigurationModelBase()
		{
		}
	}
}
