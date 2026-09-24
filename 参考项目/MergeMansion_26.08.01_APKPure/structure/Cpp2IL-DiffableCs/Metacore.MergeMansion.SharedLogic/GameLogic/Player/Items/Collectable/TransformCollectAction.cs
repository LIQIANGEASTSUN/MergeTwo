namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(3)]
public class TransformCollectAction : ITransformCollectAction, ICollectAction
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public IItemDefinition collectedItem; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal bool <ReportAnalyticsIfRequired>b__0(string tag) { }

	}

	[CompilerGenerated]
	private ItemDef <TransformsInto>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef TransformsInto
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TransformCollectAction() { }

	public TransformCollectAction(ItemDef transformsInto) { }

	public TransformCollectAction(int itemId) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	private MergeItem CreateTransformsIntoItem(IMergeMansionGameConfig config, IMergeItem collectedItem, MetacoreTime timestamp, IPlayer player) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	private override IItemDefinition GameLogic.Player.Items.Collectable.ITransformCollectAction.TransformsInto(IPlayer player) { }

	[CompilerGenerated]
	public ItemDef get_TransformsInto() { }

	private static void ReportAnalyticsIfRequired(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	[CompilerGenerated]
	private void set_TransformsInto(ItemDef value) { }

}

