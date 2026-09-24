namespace Code.GameLogic.ExtraSpawns;

[MetaSerializable]
public class ExtraSpawnItemValueInfo : IGameConfigData<Int32>, IGameConfigData, IHasGameConfigKey<Int32>, IValidatable
{
	[CompilerGenerated]
	private int <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <Value>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private string <ItemName>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaDictionary<Currencies, F32> <CustomValuesByCurrency>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaDictionary<CoreSupportEventTokenId, F32> <CustomValuesByCoreSupportEventTokenId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	private MetaDictionary<CoreSupportEventTokenId, F32> CustomValuesByCoreSupportEventTokenId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private MetaDictionary<Currencies, F32> CustomValuesByCurrency
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[NoChecksum]
	private string ItemName
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private F32 Value
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ExtraSpawnItemValueInfo() { }

	public ExtraSpawnItemValueInfo(string configKey, F32 value, MetaDictionary<Currencies, F32> customValuesByCurrency, MetaDictionary<CoreSupportEventTokenId, F32> customValuesByCoreSupportEventTokenId, int experimentPriority) { }

	[CompilerGenerated]
	public override int get_ConfigKey() { }

	[CompilerGenerated]
	private MetaDictionary<CoreSupportEventTokenId, F32> get_CustomValuesByCoreSupportEventTokenId() { }

	[CompilerGenerated]
	private MetaDictionary<Currencies, F32> get_CustomValuesByCurrency() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_ItemName() { }

	[CompilerGenerated]
	private F32 get_Value() { }

	public F32 GetValue(TId id) { }

	[CompilerGenerated]
	private void set_ConfigKey(int value) { }

	[CompilerGenerated]
	private void set_CustomValuesByCoreSupportEventTokenId(MetaDictionary<CoreSupportEventTokenId, F32> value) { }

	[CompilerGenerated]
	private void set_CustomValuesByCurrency(MetaDictionary<Currencies, F32> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemName(string value) { }

	[CompilerGenerated]
	private void set_Value(F32 value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

