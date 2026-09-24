using System;

namespace MergeEngine.ECS.Components.Items
{
	[Serializable]
	public class SerializedIdComponent
	{
		public string Id;

		public string UUId;

		public int Origin;

		public long CreatedTimestamp;

		public long MergedTimestamp;

		public long QueueAddedTimestamp;

		public int SerializationVersion;
	}
}
