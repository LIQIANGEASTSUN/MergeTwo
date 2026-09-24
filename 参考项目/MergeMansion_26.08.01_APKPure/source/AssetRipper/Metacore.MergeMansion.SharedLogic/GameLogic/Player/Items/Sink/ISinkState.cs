using System.Collections.Generic;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializable]
	public interface ISinkState
	{
		bool DoesTakeIn(IPlayer player, int itemId);

		bool IncreaseProgress(IPlayer player, int inputItem);

		(int, int) GetProgress();

		bool IsCompleted();

		IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board);

		void GetProgressEntries(ref List<SinkProgressEntry> outList);

		SinkType GetSinkType();
	}
}
