namespace GameLogic.Player.Items.Collectable;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializableDerived(10)]
public class AddSpawnAmountAction : ICollectAction
{
	[CompilerGenerated]
	private ItemDef <SpawnerItemDef>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <CyclesToAdd>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <VisualFlyToItemId>k__BackingField; //Field offset: 0x1C

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int CyclesToAdd
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private ItemDef SpawnerItemDef
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int VisualFlyToItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private AddSpawnAmountAction() { }

	public AddSpawnAmountAction(ItemDef spawnerItemDef, int cyclesToAdd, int visualFlyToItemId) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public int get_CyclesToAdd() { }

	[CompilerGenerated]
	public ItemDef get_SpawnerItemDef() { }

	[CompilerGenerated]
	public int get_VisualFlyToItemId() { }

	[CompilerGenerated]
	private void set_CyclesToAdd(int value) { }

	[CompilerGenerated]
	private void set_SpawnerItemDef(ItemDef value) { }

	[CompilerGenerated]
	private void set_VisualFlyToItemId(int value) { }

}

