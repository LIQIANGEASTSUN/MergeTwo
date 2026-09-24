namespace Code.GameLogic.GameEvents;

[Extension]
public static class IBoardEventModelExtensions
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public int item; //Field offset: 0x10
		public Func<PlayerItemRequirement, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass3_0() { }

		internal bool <RequiresItem>b__0(PlayerItemRequirement requirement) { }

	}


	[Extension]
	public static void ClaimExtensionRewards(IBoardEventModel eventModel, IPlayer player) { }

	[Extension]
	public static EnergyType GetEnergyType(IBoardEventModel eventModel, IPlayer player) { }

	[Extension]
	public static bool RequiresItem(IBoardEventModel eventModel, int item, IPlayer player, bool checkSeasonal) { }

	[Extension]
	public static void ResetAuxEnergyIfUsedByEvent(IBoardEventModel eventModel, IPlayer player) { }

}

