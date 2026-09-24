using Framework.Core.MVVM.Model;

namespace MergeEngine.Model.Configuration
{
	public abstract class ConfigurationModelBase<TData> : ModelBase
	{
		public override void InitializeModel()
		{
		}

		public void DataLoaded(TData data)
		{
		}

		public override void DisposeModel()
		{
		}

		public abstract void HandleDataLoaded(TData data);

		public ConfigurationModelBase()
		{
		}
	}
}
