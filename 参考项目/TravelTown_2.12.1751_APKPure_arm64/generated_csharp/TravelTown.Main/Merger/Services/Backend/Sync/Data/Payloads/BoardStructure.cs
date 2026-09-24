using System;
using System.Collections.Generic;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Newtonsoft.Json;

namespace Merger.Services.Backend.Sync.Data.Payloads
{
	[Serializable]
	public class BoardStructure
	{
		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public int xp;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public int level;

		[JsonProperty(DefaultValueHandling = DefaultValueHandling.Ignore)]
		public string eventId;

		public List<BoardItem> board;

		public List<Resource> resources;

		public List<FreeVoucher> freeVouchers;

		public List<ItemQueue> itemQueue;
	}
}
