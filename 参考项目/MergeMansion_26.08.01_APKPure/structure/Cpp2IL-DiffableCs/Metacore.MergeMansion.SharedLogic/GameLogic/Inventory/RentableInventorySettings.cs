namespace GameLogic.Inventory;

[MetaSerializable]
public class RentableInventorySettings : IGameConfigData<RentableInventorySettingsId>, IGameConfigData, IHasGameConfigKey<RentableInventorySettingsId>
{
	[CompilerGenerated]
	private RentableInventorySettingsId <Id>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Int64> <BatchPrice>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Currencies <BatchPriceCurrency>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <BatchSlotCount>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <BatchExpireTime>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <MaximumBatches>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int BatchExpireTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private List<Int64> BatchPrice
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private Currencies BatchPriceCurrency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int BatchSlotCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override RentableInventorySettingsId ConfigKey
	{
		 get { } //Length: 8
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

	[MetaMember(1, MetaMemberFlags::None (0))]
	private RentableInventorySettingsId Id
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int MaximumBatches
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RentableInventorySettings(RentableInventorySettingsId id, List<Int64> batchPrice, Currencies batchPriceCurrency, int batchSlotCount, int batchExpireTime, int maximumBatches, int experimentPriority) { }

	public RentableInventorySettings() { }

	[CompilerGenerated]
	public int get_BatchExpireTime() { }

	[CompilerGenerated]
	public List<Int64> get_BatchPrice() { }

	[CompilerGenerated]
	public Currencies get_BatchPriceCurrency() { }

	[CompilerGenerated]
	public int get_BatchSlotCount() { }

	public override RentableInventorySettingsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private RentableInventorySettingsId get_Id() { }

	[CompilerGenerated]
	public int get_MaximumBatches() { }

	[CompilerGenerated]
	private void set_BatchExpireTime(int value) { }

	[CompilerGenerated]
	private void set_BatchPrice(List<Int64> value) { }

	[CompilerGenerated]
	private void set_BatchPriceCurrency(Currencies value) { }

	[CompilerGenerated]
	private void set_BatchSlotCount(int value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Id(RentableInventorySettingsId value) { }

	[CompilerGenerated]
	private void set_MaximumBatches(int value) { }

}

