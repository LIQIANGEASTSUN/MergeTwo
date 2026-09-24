namespace GameLogic.Config;

[Extension]
public static class MergeMansionGameConfigExtensions
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass3_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass3_0() { }

		internal bool <LookupChain>b__0(MergeChainDefinition chain) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public string productTag; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <LookupProductInfo>b__0(InAppProductInfo iap) { }

	}


	private static void CheckIsItemDefinition(IItemDefinition itemDefinition) { }

	[Extension]
	public static IMergeChainDefinition LookupChain(IMergeMansionGameConfig sharedConfig, int itemId) { }

	[Extension]
	public static EventLevelInfo LookupEventLevel(IMergeMansionGameConfig sharedGameConfig, EventLevelId id) { }

	[Extension]
	public static ItemDefinition LookupItem(IMergeMansionGameConfig sharedConfig, int itemId) { }

	[Extension]
	public static ItemDefinition LookupItem(IMergeMansionGameConfig sharedConfig, string itemType) { }

	[Extension]
	public static InAppProductInfo LookupProductInfo(IMergeMansionGameConfig config, string productTag) { }

}

