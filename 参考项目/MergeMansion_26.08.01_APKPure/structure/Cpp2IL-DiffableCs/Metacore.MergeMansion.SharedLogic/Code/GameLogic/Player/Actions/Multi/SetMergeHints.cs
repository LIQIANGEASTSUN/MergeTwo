namespace Code.GameLogic.Player.Actions.Multi;

[ModelAction(10999)]
public class SetMergeHints : PlayerAction
{
	[CompilerGenerated]
	private bool <State>k__BackingField; //Field offset: 0x10

	private bool State
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private SetMergeHints() { }

	public SetMergeHints(bool state) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private bool get_State() { }

	[CompilerGenerated]
	private void set_State(bool value) { }

}

