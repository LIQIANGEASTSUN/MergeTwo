namespace GameLogic.Player.Actions.Basic;

[ModelAction(11203)]
public class WildItemConsumeAction : PlayerAction
{
	[CompilerGenerated]
	private IItemDefinition <ItemDefinitionItemId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <TaskId>k__BackingField; //Field offset: 0x18

	private IItemDefinition ItemDefinitionItemId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string TaskId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private WildItemConsumeAction() { }

	public WildItemConsumeAction(IItemDefinition itemDefinitionItemId, string taskId) { }

	[CompilerGenerated]
	private bool <Execute>b__10_0(MergeTask x) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private IItemDefinition get_ItemDefinitionItemId() { }

	[CompilerGenerated]
	private string get_TaskId() { }

	[CompilerGenerated]
	private void set_ItemDefinitionItemId(IItemDefinition value) { }

	[CompilerGenerated]
	private void set_TaskId(string value) { }

}

