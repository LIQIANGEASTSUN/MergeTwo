namespace GameLogic.Player.Items.Fishing;

[Extension]
public static class FishingRodFeaturesExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IItemOdds, Int32> <>9__0_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <Produces>b__0_0(IItemOdds odds) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass0_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10
		public int totalSize; //Field offset: 0x18

		public <>c__DisplayClass0_0() { }

		internal ValueTuple<IItemDefinition, F32> <Produces>b__1(IItemOdds odds) { }

	}


	[Extension]
	public static IEnumerable<ValueTuple`2<IItemDefinition, F32>> Produces(IFishingRodFeatures fishingRod, IMergeMansionGameConfig gameConfig) { }

}

