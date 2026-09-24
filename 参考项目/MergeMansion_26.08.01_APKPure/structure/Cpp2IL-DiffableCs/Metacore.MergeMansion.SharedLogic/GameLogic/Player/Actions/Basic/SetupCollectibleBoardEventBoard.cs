namespace GameLogic.Player.Actions.Basic;

[ModelAction(11200)]
public class SetupCollectibleBoardEventBoard : PlayerAction
{
	private CollectibleBoardEventId activableId; //Field offset: 0x10

	public SetupCollectibleBoardEventBoard() { }

	public SetupCollectibleBoardEventBoard(CollectibleBoardEventId activableId) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

}

