using Newtonsoft.Json;

namespace Merger.MergeBoard.Data.Payload
{
	public class MergeBoardItemPositionNotificationData
	{
		[JsonProperty("index")]
		public int Index;

		public MergeBoardItemPositionNotificationData(int index)
		{
		}
	}
}
