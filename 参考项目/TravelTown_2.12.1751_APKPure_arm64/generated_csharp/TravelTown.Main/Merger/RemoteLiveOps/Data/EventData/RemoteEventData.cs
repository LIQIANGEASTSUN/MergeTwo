using Newtonsoft.Json;

namespace Merger.RemoteLiveOps.Data.EventData
{
	public abstract class RemoteEventData
	{
		[JsonProperty("status")]
		public RemoteFeatureStatus Status { get; set; }

		[JsonProperty("startDate")]
		public long StartDate { get; set; }

		[JsonProperty("endDate")]
		public long EndDate { get; set; }

		[JsonProperty("conditionIds")]
		public string[] ConditionIds { get; set; }

		public virtual void Update<TUpdateData>(TUpdateData dataData) where TUpdateData : RemoteEventData
		{
		}

		public RemoteEventData ShallowCopy()
		{
			return null;
		}

		public RemoteEventData()
		{
		}
	}
}
