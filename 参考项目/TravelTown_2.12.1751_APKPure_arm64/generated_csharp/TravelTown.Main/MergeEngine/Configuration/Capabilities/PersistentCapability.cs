namespace MergeEngine.Configuration.Capabilities
{
	public class PersistentCapability
	{
		public string PersistentStoreKey { get; }

		public bool UseLiveOpsPrefix { get; }

		public PersistentCapability(string persistentStoreKey, bool useLiveOpsPrefix = false)
		{
		}
	}
}
