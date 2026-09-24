namespace GameLogic.Player.Items.Activation;

[IsReadOnly]
public struct CycleInfo
{
	[CompilerGenerated]
	private readonly int <CycleNumber>k__BackingField; //Field offset: 0x0
	[CompilerGenerated]
	private readonly int <DailyCycleIndex>k__BackingField; //Field offset: 0x4
	[CompilerGenerated]
	private readonly bool <ReEngagementCycleActive>k__BackingField; //Field offset: 0x8

	public int CycleNumber
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public int DailyCycleIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public static CycleInfo DefaultCycle
	{
		 get { } //Length: 12
	}

	public bool ReEngagementCycleActive
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public CycleInfo(int cycleNumber, int dailyCycleIndex, bool reEngagementCycleActive) { }

	[CompilerGenerated]
	public int get_CycleNumber() { }

	[CompilerGenerated]
	public int get_DailyCycleIndex() { }

	public static CycleInfo get_DefaultCycle() { }

	[CompilerGenerated]
	public bool get_ReEngagementCycleActive() { }

}

