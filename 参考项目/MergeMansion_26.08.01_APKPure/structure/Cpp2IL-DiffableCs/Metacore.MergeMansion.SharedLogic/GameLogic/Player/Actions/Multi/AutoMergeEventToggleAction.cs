namespace GameLogic.Player.Actions.Multi;

[ModelAction(30115)]
[Obsolete("Use AutoMergeSetUserToggleAction instead")]
public class AutoMergeEventToggleAction : PlayerAction
{
	[CompilerGenerated]
	private CoreSupportEventId <EventId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <AutoMergeEnabled>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <MenuTag>k__BackingField; //Field offset: 0x20

	private bool AutoMergeEnabled
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CoreSupportEventId EventId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string MenuTag
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public AutoMergeEventToggleAction() { }

	public AutoMergeEventToggleAction(CoreSupportEventId eventId, bool autoMergeEnabled, string menuTag) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private bool get_AutoMergeEnabled() { }

	[CompilerGenerated]
	private CoreSupportEventId get_EventId() { }

	[CompilerGenerated]
	private string get_MenuTag() { }

	[CompilerGenerated]
	private void set_AutoMergeEnabled(bool value) { }

	[CompilerGenerated]
	private void set_EventId(CoreSupportEventId value) { }

	[CompilerGenerated]
	private void set_MenuTag(string value) { }

}

