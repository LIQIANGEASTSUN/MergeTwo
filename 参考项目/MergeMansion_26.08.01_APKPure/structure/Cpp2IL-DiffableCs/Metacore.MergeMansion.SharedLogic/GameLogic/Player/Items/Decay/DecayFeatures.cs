namespace GameLogic.Player.Items.Decay;

[MetaSerializable]
public sealed class DecayFeatures : IDecayFeatures
{
	public static readonly DecayFeatures NoDecay; //Field offset: 0x0
	[Obsolete("Doesn't seem to be in use")]
	public static readonly DecayFeatures NoDecayButInherit; //Field offset: 0x8
	[Obsolete("Doesn't seem to be in use")]
	public static readonly DecayFeatures NoDecayButInheritAndSum; //Field offset: 0x10
	[CompilerGenerated]
	private bool <DoesDecay>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaDuration <Lifetime>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private IItemProducer <ItemProducer>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private DecayMergeMode <DecayMergeMode>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <DoesBoosterAccelerateDecay>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private DecayInheritMode <DecayInheritMode>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <ShowDecayTimer>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private bool <ShowDecayVfx>k__BackingField; //Field offset: 0x35
	[CompilerGenerated]
	private MetaDuration <RemainingDurationForDecayVfx>k__BackingField; //Field offset: 0x38

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private override DecayInheritMode DecayInheritMode
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private override DecayMergeMode DecayMergeMode
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override bool DoesBoosterAccelerateDecay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool DoesDecay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetacoreDuration GameLogic.Player.Items.Decay.IDecayFeatures.Lifetime
	{
		private get { } //Length: 12
	}

	[IgnoreDataMember]
	private override MetacoreDuration GameLogic.Player.Items.Decay.IDecayFeatures.RemainingDurationForDecayVfx
	{
		private get { } //Length: 12
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override IItemProducer ItemProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private MetaDuration Lifetime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override bool NeedsDecayState
	{
		 get { } //Length: 32
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private MetaDuration RemainingDurationForDecayVfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private override bool ShowDecayTimer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private override bool ShowDecayVfx
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static DecayFeatures() { }

	private DecayFeatures() { }

	public DecayFeatures(bool doesDecay, MetaDuration lifetime, IItemProducer itemProducer, DecayMergeMode decayMergeMode, DecayInheritMode decayInheritMode, bool showDecayTimer, bool showDecayVfx, MetaDuration remainingDurationForDecayVfx, bool doesBoosterAccelerateDecay = true) { }

	public DecayFeatures(MetaDuration lifetime, IItemProducer producer, DecayMergeMode mergeMode, bool boosterAccelerates = true) { }

	public virtual bool Equals(object obj) { }

	private bool Equals(DecayFeatures other) { }

	private override MetacoreDuration GameLogic.Player.Items.Decay.IDecayFeatures.get_Lifetime() { }

	private override MetacoreDuration GameLogic.Player.Items.Decay.IDecayFeatures.get_RemainingDurationForDecayVfx() { }

	[CompilerGenerated]
	public override DecayInheritMode get_DecayInheritMode() { }

	[CompilerGenerated]
	public override DecayMergeMode get_DecayMergeMode() { }

	[CompilerGenerated]
	public override bool get_DoesBoosterAccelerateDecay() { }

	[CompilerGenerated]
	public override bool get_DoesDecay() { }

	[CompilerGenerated]
	public override IItemProducer get_ItemProducer() { }

	[CompilerGenerated]
	public MetaDuration get_Lifetime() { }

	public override bool get_NeedsDecayState() { }

	[CompilerGenerated]
	public MetaDuration get_RemainingDurationForDecayVfx() { }

	[CompilerGenerated]
	public override bool get_ShowDecayTimer() { }

	[CompilerGenerated]
	public override bool get_ShowDecayVfx() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_DecayInheritMode(DecayInheritMode value) { }

	[CompilerGenerated]
	private void set_DecayMergeMode(DecayMergeMode value) { }

	[CompilerGenerated]
	private void set_DoesBoosterAccelerateDecay(bool value) { }

	[CompilerGenerated]
	private void set_DoesDecay(bool value) { }

	[CompilerGenerated]
	private void set_ItemProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_Lifetime(MetaDuration value) { }

	[CompilerGenerated]
	private void set_RemainingDurationForDecayVfx(MetaDuration value) { }

	[CompilerGenerated]
	private void set_ShowDecayTimer(bool value) { }

	[CompilerGenerated]
	private void set_ShowDecayVfx(bool value) { }

}

