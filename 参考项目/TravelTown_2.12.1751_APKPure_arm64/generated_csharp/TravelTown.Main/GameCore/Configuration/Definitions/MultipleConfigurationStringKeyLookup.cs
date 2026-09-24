namespace GameCore.Configuration.Definitions
{
	public class MultipleConfigurationStringKeyLookup<TAsset> : MultipleConfigurationLookup<TAsset, string> where TAsset : IUniqueStringKeyAsset
	{
		public override string GetKey(TAsset item)
		{
			return null;
		}
	}
}
