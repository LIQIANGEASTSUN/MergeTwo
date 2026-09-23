using GameCore.Configuration.Definitions;

namespace MergeEngine.Model.Configuration
{
	public interface IMultipleConfigurableScriptableObjectConfigurationModel<T> : IMultipleConfigurationModel<string, T> where T : ConfigurableScriptableObject
	{
	}
}
