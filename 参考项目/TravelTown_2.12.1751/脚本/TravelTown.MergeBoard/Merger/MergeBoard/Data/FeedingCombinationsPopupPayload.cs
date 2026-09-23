using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoard.Data
{
	public class FeedingCombinationsPopupPayload
	{
		public List<Combination> Combinations;

		public Action OnClosePopupCallback;
	}
}
