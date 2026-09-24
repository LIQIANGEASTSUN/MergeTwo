namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(6)]
public class RewardItem : PlayerReward, IMutablePlayerReward, IPlayerReward
{
	[CompilerGenerated]
	private ItemDef <ItemDef>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <FromSupport>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private OverrideItemFeatures <OverrideItemFeatures>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <ForceOnTopOfPocket>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <OverridePoolTag>k__BackingField; //Field offset: 0x40

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public bool ForceOnTopOfPocket
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaFormNotEditable]
	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool FromSupport
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	[MetaValidateRequired]
	[ValidateItemDefMetaMember]
	public private ItemDef ItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaValidateRequired]
	public private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaFormNotEditable]
	[MetaMember(5, MetaMemberFlags::None (0))]
	public private OverrideItemFeatures OverrideItemFeatures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private string OverridePoolTag
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public virtual bool ShouldShowInfoButton
	{
		 get { } //Length: 8
	}

	public RewardItem(MergeBoardId boardId, ItemDef itemDef, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures = null, bool forceOnTopOfPocket = false, string overridePoolTag = null) { }

	public RewardItem(MergeBoardId boardId, int item, int amount, bool fromSupport, CurrencySource currencySource, OverrideItemFeatures overrideItemFeatures, bool forceOnTopOfPocket = false, string overridePoolTag = null) { }

	public RewardItem(MergeBoardId boardId, IItemDefinition itemDefinition, int amount, bool fromSupport, CurrencySource currencySource, bool forceOnTopOfPocket = false, string overridePoolTag = null) { }

	public RewardItem() { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public bool get_ForceOnTopOfPocket() { }

	[CompilerGenerated]
	public bool get_FromSupport() { }

	[CompilerGenerated]
	public ItemDef get_ItemDef() { }

	[CompilerGenerated]
	public MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	public OverrideItemFeatures get_OverrideItemFeatures() { }

	[CompilerGenerated]
	private string get_OverridePoolTag() { }

	public virtual bool get_ShouldShowInfoButton() { }

	public virtual string GetAmountString(Nullable<Int32> value, bool isPlusSigned) { }

	public virtual string GetAmountString(Nullable<Int32> value) { }

	public IItemDefinition GetItem(IPlayer player) { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

	public override IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption) { }

	public string GetPoolTag(IPlayer player) { }

	public override bool MayMutateAtRuntime(IMergeMansionGameConfig config) { }

	public virtual string Name(IPlayer player) { }

	public static RewardItem ReplaceItem(RewardItem rewardItem, IItemDefinition item) { }

	public static RewardItem ReplaceMergeBoard(RewardItem rewardItem, MergeBoardId mergeBoardId, IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	public void set_ForceOnTopOfPocket(bool value) { }

	[CompilerGenerated]
	private void set_FromSupport(bool value) { }

	[CompilerGenerated]
	private void set_ItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_OverrideItemFeatures(OverrideItemFeatures value) { }

	[CompilerGenerated]
	private void set_OverridePoolTag(string value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

