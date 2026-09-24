namespace GameLogic.Player.Items.Consumption;

public class WrongVisibilityResult : IConsumptionCheckResult
{
	public static readonly IConsumptionCheckResult ExpectedVisible; //Field offset: 0x0
	public static readonly IConsumptionCheckResult ExpectedPartial; //Field offset: 0x8
	[CompilerGenerated]
	private readonly ItemVisibility <ExpectedVisibility>k__BackingField; //Field offset: 0x10

	public override string ErrorLocKey
	{
		 get { } //Length: 64
	}

	public ItemVisibility ExpectedVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override bool Success
	{
		 get { } //Length: 8
	}

	private static WrongVisibilityResult() { }

	public WrongVisibilityResult(ItemVisibility expectedVisibility) { }

	public override string get_ErrorLocKey() { }

	[CompilerGenerated]
	public ItemVisibility get_ExpectedVisibility() { }

	public override bool get_Success() { }

}

