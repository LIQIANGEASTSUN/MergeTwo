using System;
using GameLogic.Hotspots;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11204)]
	public class ReportMergeGoalUnlocked : PlayerAction
	{
		[NonSerialized]
		public HotspotDefinition _hotspotDefinition;

		public ReportMergeGoalUnlocked()
		{
		}

		public ReportMergeGoalUnlocked(HotspotDefinition hotspotDefinition)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
