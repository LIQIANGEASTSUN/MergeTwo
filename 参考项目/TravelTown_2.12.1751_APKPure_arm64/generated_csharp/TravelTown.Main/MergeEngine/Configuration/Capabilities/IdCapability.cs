using MergeEngine.Configuration.Definitions;

namespace MergeEngine.Configuration.Capabilities
{
	public class IdCapability
	{
		public string Id { get; }

		public ItemOrigin? ItemOrigin { get; }

		public string UUid { get; }

		public IdCapability(string id, ItemOrigin? itemOrigin, string uuid = null)
		{
		}
	}
}
