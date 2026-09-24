namespace GameLogic.Player.Items.Boosting;

[MetaSerializable]
public sealed class BoosterFeatures : IBoosterFeatures
{
	public static readonly BoosterFeatures NoBoost; //Field offset: 0x0
	[CompilerGenerated]
	private bool <DoesBoost>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private BoostAreaStyle <BoostAreaStyle>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private List<Int32> <AffectedItemsSet>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F32 <BoostFactor>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private F32 <SpawnBoostFactor>k__BackingField; //Field offset: 0x24

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override List<Int32> AffectedItemsSet
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override BoostAreaStyle BoostAreaStyle
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override F32 BoostFactor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool DoesBoost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override F32 SpawnBoostFactor
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static BoosterFeatures() { }

	public BoosterFeatures(BoostAreaStyle boostAreaStyle, List<Int32> affectedItemsSet, F32 boostFactor, F32 spawnFactor) { }

	public BoosterFeatures(bool boosts, BoostAreaStyle areaStyle, float factor, Int32[] affectedItems) { }

	public BoosterFeatures(bool boosts, BoostAreaStyle areaStyle, float factor, float spawnFactor) { }

	private BoosterFeatures() { }

	public virtual bool Equals(object obj) { }

	private bool Equals(BoosterFeatures other) { }

	[CompilerGenerated]
	public override List<Int32> get_AffectedItemsSet() { }

	[CompilerGenerated]
	public override BoostAreaStyle get_BoostAreaStyle() { }

	[CompilerGenerated]
	public override F32 get_BoostFactor() { }

	[CompilerGenerated]
	public override bool get_DoesBoost() { }

	[CompilerGenerated]
	public override F32 get_SpawnBoostFactor() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_AffectedItemsSet(List<Int32> value) { }

	[CompilerGenerated]
	private void set_BoostAreaStyle(BoostAreaStyle value) { }

	[CompilerGenerated]
	private void set_BoostFactor(F32 value) { }

	[CompilerGenerated]
	private void set_DoesBoost(bool value) { }

	[CompilerGenerated]
	private void set_SpawnBoostFactor(F32 value) { }

}

