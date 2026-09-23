namespace MergeEngine.Configuration.Capabilities
{
	public class CollectableItemCapability : CapabilityBase
	{
		public readonly CollectCapability ItemConfigurationCollect;

		public readonly CollectResourceCapability ItemConfigurationCollectResource;

		public CollectableItemCapability(CollectCapability itemConfigurationCollect, CollectResourceCapability itemConfigurationCollectResource)
		{
		}
	}
}
