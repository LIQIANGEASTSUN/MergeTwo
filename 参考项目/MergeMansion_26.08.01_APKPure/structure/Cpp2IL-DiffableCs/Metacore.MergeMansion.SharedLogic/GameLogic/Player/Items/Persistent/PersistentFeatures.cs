namespace GameLogic.Player.Items.Persistent;

[MetaSerializable]
public sealed class PersistentFeatures : IPersistentFeatures
{
	public static readonly PersistentFeatures NoPersistence; //Field offset: 0x0
	[CompilerGenerated]
	private bool <HasPersistentFeatures>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <HasItemStates>k__BackingField; //Field offset: 0x11
	[CompilerGenerated]
	private int <DecayCycles>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <ItemStates>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ItemDef <ResetToItem>k__BackingField; //Field offset: 0x20

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override int DecayCycles
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override bool HasItemStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool HasPersistentFeatures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override int ItemStates
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	public private override ItemDef ResetToItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static PersistentFeatures() { }

	public PersistentFeatures(bool hasPersistentFeatures, bool hasItemStates, int decayCycles, int itemStates, ItemDef resetToItem) { }

	public PersistentFeatures() { }

	public virtual bool Equals(object obj) { }

	private bool Equals(PersistentFeatures other) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override int get_DecayCycles() { }

	[CompilerGenerated]
	public override bool get_HasItemStates() { }

	[CompilerGenerated]
	public override bool get_HasPersistentFeatures() { }

	[CompilerGenerated]
	public override int get_ItemStates() { }

	[CompilerGenerated]
	public override ItemDef get_ResetToItem() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_DecayCycles(int value) { }

	[CompilerGenerated]
	private void set_HasItemStates(bool value) { }

	[CompilerGenerated]
	private void set_HasPersistentFeatures(bool value) { }

	[CompilerGenerated]
	private void set_ItemStates(int value) { }

	[CompilerGenerated]
	private void set_ResetToItem(ItemDef value) { }

}

