using System;

namespace MergeEngine.Configuration.Capabilities
{
	[Serializable]
	public class BaseIdCapability
	{
		public string Id { get; }

		public string UUId { get; }

		public BaseIdCapability(string id, string uuId)
		{
		}
	}
}
