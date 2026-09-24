using System;
using System.Collections.Generic;
using Metaplay.Core;

namespace GameLogic.Player
{
	public class RestoredStateFixupChangeLog
	{
		public const int MaxRecordedEntriesPerSource = 20;

		[NonSerialized]
		public readonly List<PlayerEventRestoredStateFixup.FixupEntry> _entries;

		[NonSerialized]
		public readonly MetaDictionary<string, int> _totalCountsBySource;

		public bool HasChanges => false;

		public void Record(string source, string change)
		{
		}

		public PlayerEventRestoredStateFixup ToEvent()
		{
			return null;
		}
	}
}
