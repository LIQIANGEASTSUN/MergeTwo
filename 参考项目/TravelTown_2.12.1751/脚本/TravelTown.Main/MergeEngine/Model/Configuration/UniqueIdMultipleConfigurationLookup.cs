using GameCore.Configuration.Definitions;

namespace MergeEngine.Model.Configuration
{
	public class UniqueIdMultipleConfigurationLookup<TConfiguration> : MultipleConfigurationLookup<TConfiguration, string> where TConfiguration : IUniqueStringKeyAsset
	{
		public override string GetKey(TConfiguration item)
		{
			return null;
		}
	}
}
