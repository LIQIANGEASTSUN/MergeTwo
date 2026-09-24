namespace GameLogic.Player.Items.Chest;

[MetaSerializable]
public class ChestContext : IItemContext
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public IPlayer player; //Field offset: 0x10
		public IItemDefinition itemDefinition; //Field offset: 0x18

		public <>c__DisplayClass13_0() { }

		internal bool <GetItemAvailability>b__0(ConfigLookupValue<IItemDefinition> o) { }

	}

	private enum ItemAvailability : int
	{
		Available = 0,
		Expired = 1,
		WasNeverAvailable = 2,
	}

	[CompilerGenerated]
	private TemporaryCardCollectionEventId <TemporaryCardCollectionEventIdWhenChestWasGenerated>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <ShouldUpgradeCardPacks>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private bool ShouldUpgradeCardPacks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private TemporaryCardCollectionEventId TemporaryCardCollectionEventIdWhenChestWasGenerated
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ChestContext() { }

	public ChestContext(IPlayer player, bool shouldUpgradeCardPacks) { }

	[CompilerGenerated]
	public bool get_ShouldUpgradeCardPacks() { }

	[CompilerGenerated]
	private TemporaryCardCollectionEventId get_TemporaryCardCollectionEventIdWhenChestWasGenerated() { }

	private ItemAvailability GetItemAvailability(IItemDefinition itemDefinition, IPlayer player) { }

	public override bool IsItemUnlockedAndAvailable(IItemDefinition itemDefinition, IPlayer player) { }

	[CompilerGenerated]
	private void set_ShouldUpgradeCardPacks(bool value) { }

	[CompilerGenerated]
	private void set_TemporaryCardCollectionEventIdWhenChestWasGenerated(TemporaryCardCollectionEventId value) { }

	public bool TryGetReplacementItem(IItemDefinition itemDefinition, IPlayer player, out IItemDefinition replacementItem) { }

}

