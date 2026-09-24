namespace GameLogic.Player.Actions.Multi;

[ModelAction(30131)]
public class AddHotspotMergeBoard : PlayerAction
{
	[CompilerGenerated]
	private HotspotId <HotspotId>k__BackingField; //Field offset: 0x10

	private HotspotId HotspotId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private AddHotspotMergeBoard() { }

	public AddHotspotMergeBoard(HotspotId hotspotId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private HotspotId get_HotspotId() { }

	[CompilerGenerated]
	private void set_HotspotId(HotspotId value) { }

}

