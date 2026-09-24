namespace GameLogic.Player.Items.Bubble;

[MetaSerializable]
public class BubbleFeatures : IBubbleFeatures
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Comparison<BubbleVariantsDefinition> <>9__39_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <TryGetRelevantBubbleVariant>b__39_0(BubbleVariantsDefinition a, BubbleVariantsDefinition b) { }

	}

	private static readonly MetaDuration defaultBubbleDuration; //Field offset: 0x0
	public static readonly BubbleFeatures Placeholder; //Field offset: 0x8
	[CompilerGenerated]
	private MetaDuration <BubbleDuration>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Currencies <OpenCurrency>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <OpenQuantity>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private ItemDef <ReplacementItem>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <SpawnOdds>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<BubbleVariationId> <BubbleVariants>k__BackingField; //Field offset: 0x30
	private List<BubbleVariantsDefinition> bubbleVariantsDefinitions; //Field offset: 0x38

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDuration BubbleDuration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override List<BubbleVariationId> BubbleVariants
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetacoreDuration GameLogic.Player.Items.Bubble.IBubbleFeatures.BubbleDuration
	{
		private get { } //Length: 12
	}

	[IgnoreDataMember]
	public override ValueTuple<Currencies, Int32> OpenCost
	{
		 get { } //Length: 108
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override Currencies OpenCurrency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override int OpenQuantity
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	private ItemDef ReplacementItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public ItemDef ReplacementItemDef
	{
		 get { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override int SpawnOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static BubbleFeatures() { }

	public BubbleFeatures(MetaDuration bubbleDuration, Currencies openCurrency, int openQuantity, int replacementItem, int spawnOdds, List<BubbleVariationId> bubbleVariants) { }

	private BubbleFeatures() { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	private override MetacoreDuration GameLogic.Player.Items.Bubble.IBubbleFeatures.get_BubbleDuration() { }

	[CompilerGenerated]
	public MetaDuration get_BubbleDuration() { }

	[CompilerGenerated]
	public override List<BubbleVariationId> get_BubbleVariants() { }

	public override ValueTuple<Currencies, Int32> get_OpenCost() { }

	[CompilerGenerated]
	public override Currencies get_OpenCurrency() { }

	[CompilerGenerated]
	public override int get_OpenQuantity() { }

	[CompilerGenerated]
	private ItemDef get_ReplacementItem() { }

	public ItemDef get_ReplacementItemDef() { }

	[CompilerGenerated]
	public override int get_SpawnOdds() { }

	public override MetacoreDuration GetBubbleDuration(IPlayer player, BubbleVariationId variationId) { }

	public override ValueTuple<Currencies, Int32> GetOpenCost(IPlayer player, BubbleVariationId variationId) { }

	public override IItemDefinition GetReplacementItem(IPlayer player, BubbleVariationId variationId) { }

	public override int GetSpawnOdds(IPlayer player) { }

	private BubbleVariantsDefinition GetVariantDefinition(IPlayer player, BubbleVariationId variationId) { }

	[CompilerGenerated]
	private void set_BubbleDuration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_BubbleVariants(List<BubbleVariationId> value) { }

	[CompilerGenerated]
	private void set_OpenCurrency(Currencies value) { }

	[CompilerGenerated]
	private void set_OpenQuantity(int value) { }

	[CompilerGenerated]
	private void set_ReplacementItem(ItemDef value) { }

	[CompilerGenerated]
	private void set_SpawnOdds(int value) { }

	public override bool TryGetRelevantBubbleVariant(IPlayer player, out BubbleVariantsDefinition variationDefinition) { }

}

