namespace GameLogic.Player.Items.Collectable;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializable]
public sealed class CollectableFeatures : ICollectableFeatures
{
	public static readonly CollectableFeatures NoCollectable; //Field offset: 0x0
	[CompilerGenerated]
	private bool <Collectable>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ICollectAction <CollectAction>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <ConfirmCollectBelowMergeChainLevel>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private bool <CollectOnSpawn>k__BackingField; //Field offset: 0x21

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool Collectable
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override ICollectAction CollectAction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override bool CollectOnSpawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override bool ConfirmCollectBelowMergeChainLevel
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static CollectableFeatures() { }

	private CollectableFeatures() { }

	public CollectableFeatures(ICollectAction collectAction, bool confirmCollectBelowMergeChainLevel, bool collectOnSpawn) { }

	public CollectableFeatures(bool collectable, ICollectAction collectAction, bool confirmCollectBelowMergeChainLevel, bool collectOnSpawn) { }

	private bool Equals(CollectableFeatures other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public override bool get_Collectable() { }

	[CompilerGenerated]
	public override ICollectAction get_CollectAction() { }

	[CompilerGenerated]
	public override bool get_CollectOnSpawn() { }

	[CompilerGenerated]
	public override bool get_ConfirmCollectBelowMergeChainLevel() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_Collectable(bool value) { }

	[CompilerGenerated]
	private void set_CollectAction(ICollectAction value) { }

	[CompilerGenerated]
	private void set_CollectOnSpawn(bool value) { }

	[CompilerGenerated]
	private void set_ConfirmCollectBelowMergeChainLevel(bool value) { }

}

