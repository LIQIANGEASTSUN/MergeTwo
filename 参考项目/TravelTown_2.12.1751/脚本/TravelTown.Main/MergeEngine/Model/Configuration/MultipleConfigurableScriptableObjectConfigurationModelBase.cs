using GameCore.Configuration.Definitions;

namespace MergeEngine.Model.Configuration
{
	public class MultipleConfigurableScriptableObjectConfigurationModelBase<T> : MultipleConfigurationModelBase<T, string, ConfigurableScriptableObjectsLookup<T>>, IMultipleConfigurableScriptableObjectConfigurationModel<T>, IMultipleConfigurationModel<string, T> where T : ConfigurableScriptableObject
	{
	}
}
