using System;
using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[Obsolete("Use AutoMergeSetUserToggleAction instead")]
	[ModelAction(30115)]
	public class AutoMergeEventToggleAction : PlayerAction
	{
		public CoreSupportEventId EventId { get; set; }

		public bool AutoMergeEnabled { get; set; }

		public string MenuTag { get; set; }

		public AutoMergeEventToggleAction()
		{
		}

		public AutoMergeEventToggleAction(CoreSupportEventId eventId, bool autoMergeEnabled, string menuTag)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
