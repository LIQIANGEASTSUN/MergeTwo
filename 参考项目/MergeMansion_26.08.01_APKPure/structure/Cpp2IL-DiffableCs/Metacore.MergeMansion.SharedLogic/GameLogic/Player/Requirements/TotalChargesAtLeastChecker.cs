namespace GameLogic.Player.Requirements;

public sealed class TotalChargesAtLeastChecker : IMergeItemExtraChecker
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<MergeItemExtra, Int32> <>9__2_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <MeetsItemExtraCheck>b__2_0(MergeItemExtra e) { }

	}

	private readonly int _minCharges; //Field offset: 0x10

	public TotalChargesAtLeastChecker(int minCharges) { }

	public override bool MeetsItemExtraCheck(IEnumerable<MergeItemExtra> extras) { }

}

