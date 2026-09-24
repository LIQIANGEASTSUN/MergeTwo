using MergeEngine.Configuration;
using MergeEngine.Configuration.Cards;
using MergeEngine.Configuration.Definitions;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Newtonsoft.Json;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	public class BackendBoardQueueItem
	{
		[JsonProperty("uuidInRewardQueue")]
		public string UUIDInBoardQueue { get; }

		public IItem QueuedItem { get; }

		public ItemPayloadBase ItemBase { get; }

		public BoosterData BoosterData { get; }

		public long EnqueueTimestamp { get; }

		public CardPackData CardPackData { get; }

		public string Reason { get; }

		public BoardQueueOrder BoardQueueOrder { get; }

		public BackendBoardQueueItem(string uuidInBoardQueue, IItem queuedItem, ItemPayloadBase itemBase, BoosterData boosterData, CardPackData cardPackData, long enqueueTimestamp, string reason, BoardQueueOrder boardQueueOrder)
		{
		}
	}
}
