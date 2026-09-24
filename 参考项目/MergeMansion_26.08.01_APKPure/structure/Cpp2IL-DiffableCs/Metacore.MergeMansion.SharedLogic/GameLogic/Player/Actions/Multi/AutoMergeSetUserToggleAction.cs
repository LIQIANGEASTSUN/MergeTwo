namespace GameLogic.Player.Actions.Multi;

[ModelAction(30132)]
public class AutoMergeSetUserToggleAction : PlayerAction
{
	[CompilerGenerated]
	private bool <Enabled>k__BackingField; //Field offset: 0x10

	private bool Enabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public AutoMergeSetUserToggleAction() { }

	public AutoMergeSetUserToggleAction(bool enabled) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private bool get_Enabled() { }

	[CompilerGenerated]
	private void set_Enabled(bool value) { }

}

