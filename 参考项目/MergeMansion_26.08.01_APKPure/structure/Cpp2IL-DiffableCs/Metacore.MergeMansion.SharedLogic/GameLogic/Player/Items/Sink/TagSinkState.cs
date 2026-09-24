namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(5)]
public class TagSinkState : ISinkState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> Progress; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private int TargetCount; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private int CurrentCount; //Field offset: 0x1C
	[MetaMember(4, MetaMemberFlags::None (0))]
	private int CurrentPoints; //Field offset: 0x20
	[MetaMember(5, MetaMemberFlags::None (0))]
	private string RewardTagName; //Field offset: 0x28
	[MetaMember(6, MetaMemberFlags::None (0))]
	public string Tag; //Field offset: 0x30
	private IItemDefinition CompletionItemCached; //Field offset: 0x38
	private MetaDictionary<Int32, Int32> AcceptedItemsCached; //Field offset: 0x40

	public int GetCurrentPoints
	{
		 get { } //Length: 8
	}

	public TagSinkState() { }

	public TagSinkState(string tag, int targetCount, string rewardTagName) { }

	public override bool DoesTakeIn(IPlayer player, int itemId) { }

	public int get_GetCurrentPoints() { }

	public MetaDictionary<Int32, Int32> GetAcceptedItems(IPlayer player) { }

	public override IItemDefinition GetCompletionItem(IPlayer player, MergeItem mergeItem, MergeBoard board) { }

	public override ValueTuple<Int32, Int32> GetProgress() { }

	public override void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public override SinkType GetSinkType() { }

	public override bool IncreaseProgress(IPlayer player, int inputItem) { }

	public override bool IsCompleted() { }

	public static ISinkState NewState(string tag, int inputCount, string rewardTagName) { }

}

