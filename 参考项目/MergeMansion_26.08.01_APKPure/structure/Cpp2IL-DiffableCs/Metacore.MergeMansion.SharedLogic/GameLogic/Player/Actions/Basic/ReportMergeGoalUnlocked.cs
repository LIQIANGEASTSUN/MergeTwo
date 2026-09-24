namespace GameLogic.Player.Actions.Basic;

[ModelAction(11204)]
public class ReportMergeGoalUnlocked : PlayerAction
{
	private HotspotDefinition _hotspotDefinition; //Field offset: 0x10

	private ReportMergeGoalUnlocked() { }

	public ReportMergeGoalUnlocked(HotspotDefinition hotspotDefinition) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

