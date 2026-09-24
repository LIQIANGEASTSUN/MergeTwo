namespace GameLogic.Player.Items.Consumption;

public class TagsMismatchResult : IConsumptionCheckResult
{
	[CompilerGenerated]
	private readonly List<String> <ExpectedTags>k__BackingField; //Field offset: 0x10

	public override string ErrorLocKey
	{
		 get { } //Length: 88
	}

	public List<String> ExpectedTags
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override bool Success
	{
		 get { } //Length: 8
	}

	public string TagKey
	{
		 get { } //Length: 112
	}

	public TagsMismatchResult(List<String> expectedTags) { }

	public override string get_ErrorLocKey() { }

	[CompilerGenerated]
	public List<String> get_ExpectedTags() { }

	public override bool get_Success() { }

	public string get_TagKey() { }

}

