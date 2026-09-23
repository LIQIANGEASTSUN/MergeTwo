using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Items;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10938)]
	public class TryCompleteCurrentEventTask : PlayerAction
	{
		public EventId EventId { get; set; }

		public EventTaskId EventTaskId { get; set; }

		[IgnoreDataMember]
		public static IComparer<MergeItem> WithMoreDecayTimeFirst => null;

		public TryCompleteCurrentEventTask()
		{
		}

		public TryCompleteCurrentEventTask(EventId eventId, EventTaskId eventTaskId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
