namespace GameLogic.Player.Items.Chest;

[MetaSerializable]
public sealed class ChestFeatures : IChestFeatures
{
	private const string LootRollerPrefix = "loot"; //Field offset: 0x0
	public static readonly ChestFeatures NoChest; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsChest>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <OpenDuration>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <HowManyToRoll>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private IItemProducer <LootProducer>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <HintLocId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private FallbackPlayerRewardId <FallbackChest>k__BackingField; //Field offset: 0x38

	[MetaMember(6, MetaMemberFlags::None (0))]
	private FallbackPlayerRewardId FallbackChest
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override Option<FallbackPlayerRewardId> FallbackChestIdOption
	{
		 get { } //Length: 252
	}

	[IgnoreDataMember]
	private override MetacoreDuration GameLogic.Player.Items.Chest.IChestFeatures.OpenDuration
	{
		private get { } //Length: 12
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override string HintLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override int HowManyToRoll
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsChest
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override IItemProducer LootProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration OpenDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static ChestFeatures() { }

	public ChestFeatures(MetaDuration openDuration, int howManyToRoll, IItemProducer lootProducer, string hintLocId, Option<FallbackPlayerRewardId> fallbackChestIdOption) { }

	public ChestFeatures(bool chest, MetaDuration duration, List<Int32> staticItems, Option<FallbackPlayerRewardId> fallbackChestIdOption) { }

	public ChestFeatures(bool chest, MetaDuration duration, List<ValueTuple`2<Int32, Int32>> itemPairs, List<Int32> forcedItems, int howMany, int itemId, Option<FallbackPlayerRewardId> fallbackChestIdOption) { }

	private ChestFeatures() { }

	private override MetacoreDuration GameLogic.Player.Items.Chest.IChestFeatures.get_OpenDuration() { }

	[CompilerGenerated]
	private FallbackPlayerRewardId get_FallbackChest() { }

	public override Option<FallbackPlayerRewardId> get_FallbackChestIdOption() { }

	[CompilerGenerated]
	public override string get_HintLocId() { }

	[CompilerGenerated]
	public override int get_HowManyToRoll() { }

	[CompilerGenerated]
	public override bool get_IsChest() { }

	[CompilerGenerated]
	public override IItemProducer get_LootProducer() { }

	[CompilerGenerated]
	public MetaDuration get_OpenDuration() { }

	public override Option<IPlayerReward> GetFallbackReward(IPlayer player) { }

	private static IItemSpawner GuessProducer(int markerItem, List<ValueTuple`2<Int32, Int32>> itemPairs, IReadOnlyCollection<Int32> forcedItems) { }

	public override bool IsInstantlyOpenedChest() { }

	[CompilerGenerated]
	private void set_FallbackChest(FallbackPlayerRewardId value) { }

	[CompilerGenerated]
	private void set_HintLocId(string value) { }

	[CompilerGenerated]
	private void set_HowManyToRoll(int value) { }

	[CompilerGenerated]
	private void set_IsChest(bool value) { }

	[CompilerGenerated]
	private void set_LootProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_OpenDuration(MetaDuration value) { }

}

