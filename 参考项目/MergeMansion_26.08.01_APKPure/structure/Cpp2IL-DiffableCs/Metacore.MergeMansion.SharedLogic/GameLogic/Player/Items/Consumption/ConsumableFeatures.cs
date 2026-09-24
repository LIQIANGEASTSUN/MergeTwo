namespace GameLogic.Player.Items.Consumption;

[MetaSerializable]
public sealed class ConsumableFeatures : IConsumableFeatures
{
	public static readonly ConsumableFeatures NoConsumable; //Field offset: 0x0
	[CompilerGenerated]
	private bool <IsConsumable>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IConsumptionLogic <Logic>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <AllowNearMatching>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <DragSafeAreaEnabled>k__BackingField; //Field offset: 0x21
	[CompilerGenerated]
	private int <ItemStackCap>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private bool <CanSpawnBubbles>k__BackingField; //Field offset: 0x28

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override bool AllowNearMatching
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override bool CanSpawnBubbles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override bool DragSafeAreaEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool IsConsumable
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override int ItemStackCap
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override IConsumptionLogic Logic
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static ConsumableFeatures() { }

	public ConsumableFeatures(bool isConsumableItem, IConsumptionLogic logic, bool allowNearMatching, bool dragSafeAreaEnabled, int itemStackCap, bool canSpawnBubbles) { }

	private ConsumableFeatures() { }

	public virtual bool Equals(object obj) { }

	private bool Equals(ConsumableFeatures other) { }

	[CompilerGenerated]
	public override bool get_AllowNearMatching() { }

	[CompilerGenerated]
	public override bool get_CanSpawnBubbles() { }

	[CompilerGenerated]
	public override bool get_DragSafeAreaEnabled() { }

	[CompilerGenerated]
	public override bool get_IsConsumable() { }

	[CompilerGenerated]
	public override int get_ItemStackCap() { }

	[CompilerGenerated]
	public override IConsumptionLogic get_Logic() { }

	public virtual int GetHashCode() { }

	public static bool IsChargeCapReached(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

	public static bool IsMergeable(IMergeItem sourceItem, IMergeItem targetItem) { }

	public static bool IsTimeCapReached(IMergeItem sourceItem, IMergeItem targetItem, IPlayer player) { }

	public static ChargesState MergeCharges(MergeItem sourceItem, MergeItem targetItem, IPlayer player, out bool isMergeConsumingSourceItem) { }

	public static TimeContainerState MergeTime(MergeItem sourceItem, MergeItem targetItem, IPlayer player, out bool isMergeConsumingSourceItem) { }

	[CompilerGenerated]
	private void set_AllowNearMatching(bool value) { }

	[CompilerGenerated]
	private void set_CanSpawnBubbles(bool value) { }

	[CompilerGenerated]
	private void set_DragSafeAreaEnabled(bool value) { }

	[CompilerGenerated]
	private void set_IsConsumable(bool value) { }

	[CompilerGenerated]
	private void set_ItemStackCap(int value) { }

	[CompilerGenerated]
	private void set_Logic(IConsumptionLogic value) { }

}

