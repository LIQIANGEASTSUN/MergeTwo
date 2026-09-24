namespace GameLogic.Player.Actions.Multi;

[ModelAction(30069)]
public class TryToRunActionsFromPocket : PlayerAction
{
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <LogEnabled>k__BackingField; //Field offset: 0x14

	private int ItemId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private bool LogEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryToRunActionsFromPocket() { }

	public TryToRunActionsFromPocket(int itemId, bool logEnabled = false) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private int get_ItemId() { }

	[CompilerGenerated]
	private bool get_LogEnabled() { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	[CompilerGenerated]
	private void set_LogEnabled(bool value) { }

}

