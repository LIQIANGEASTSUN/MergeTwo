using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Items;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10997)]
	public class TryCompleteCurrentCollectibleBoardEventTask : PlayerAction
	{
		public CollectibleBoardEventId EventId { get; set; }

		public EventTaskId EventTaskId { get; set; }

		[IgnoreDataMember]
		public static IComparer<MergeItem> WithMoreDecayTimeFirst => null;

		public TryCompleteCurrentCollectibleBoardEventTask()
		{
		}

		public TryCompleteCurrentCollectibleBoardEventTask(CollectibleBoardEventId eventId, EventTaskId eventTaskId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
