using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Newtonsoft.Json;

namespace Merger.MergeBoard.Data
{
	public class MergeBoardItemState : ItemPayloadBase
	{
		[JsonProperty("position")]
		public SerializedMergeBoardItemPositionComponent Position;
	}
}
