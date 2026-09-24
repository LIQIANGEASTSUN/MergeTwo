namespace GameCore.Configuration.Definitions
{
	public class ConfigurableScriptableObjectsLookup<T> : MultipleConfigurationLookup<T, string> where T : ConfigurableScriptableObject
	{
		public override string GetKey(T item)
		{
			return null;
		}
	}
}
