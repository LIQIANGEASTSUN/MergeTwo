using MergeEngine.Configuration;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoardQueue.Data.TickInputActions
{
	public class DequeueAction
	{
		public string ItemNameToDequeue;

		public ItemPayloadBase ItemPayload;

		public IMergeItem MergeItem;
	}
}
