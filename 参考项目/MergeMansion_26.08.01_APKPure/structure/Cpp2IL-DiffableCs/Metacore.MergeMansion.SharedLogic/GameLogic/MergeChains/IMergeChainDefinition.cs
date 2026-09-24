namespace GameLogic.MergeChains;

public interface IMergeChainDefinition
{

	public CodexCategoryInfo CodexCategory
	{
		 get { } //Length: 0
	}

	public string CompletionSfx
	{
		 get { } //Length: 0
	}

	public MergeChainId ConfigKey
	{
		 get { } //Length: 0
	}

	public CodexDiscoveryRewardInfo DiscoveryReward
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IMergeChainElement> FallbackChain
	{
		 get { } //Length: 0
	}

	public int FallbackLength
	{
		 get { } //Length: 0
	}

	public Nullable<Int32> InitialLevel
	{
		 get { } //Length: 0
	}

	public int Length
	{
		 get { } //Length: 0
	}

	public string OverrideMergeChainSfx
	{
		 get { } //Length: 0
	}

	public IReadOnlyList<IMergeChainElement> PrimaryChain
	{
		 get { } //Length: 0
	}

	public Nullable<Int32> ShowSellConfirmationUntilPlayerLevel
	{
		 get { } //Length: 0
	}

	public Nullable<Int32> UnsellableUntilPlayerLevel
	{
		 get { } //Length: 0
	}

	public IEnumerable<IItemDefinition> DefaultItems(IPlayer player) { }

	public IEnumerable<IItemDefinition> DefaultItems(IMergeMansionGameConfig config) { }

	public CodexCategoryInfo get_CodexCategory() { }

	public string get_CompletionSfx() { }

	public MergeChainId get_ConfigKey() { }

	public CodexDiscoveryRewardInfo get_DiscoveryReward() { }

	public IReadOnlyList<IMergeChainElement> get_FallbackChain() { }

	public int get_FallbackLength() { }

	public Nullable<Int32> get_InitialLevel() { }

	public int get_Length() { }

	public string get_OverrideMergeChainSfx() { }

	public IReadOnlyList<IMergeChainElement> get_PrimaryChain() { }

	public Nullable<Int32> get_ShowSellConfirmationUntilPlayerLevel() { }

	public Nullable<Int32> get_UnsellableUntilPlayerLevel() { }

}

