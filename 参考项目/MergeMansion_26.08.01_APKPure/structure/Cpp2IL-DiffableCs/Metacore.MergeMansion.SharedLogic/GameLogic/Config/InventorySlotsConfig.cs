namespace GameLogic.Config;

[MetaSerializable]
public class InventorySlotsConfig : IGameConfigData<InventorySlotId>, IGameConfigData, IHasGameConfigKey<InventorySlotId>
{
	[CompilerGenerated]
	private InventorySlotId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private Currencies <Currency>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Cost>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public override InventorySlotId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public int Cost
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public Currencies Currency
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
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

	public InventorySlotsConfig() { }

	public InventorySlotsConfig(InventorySlotId slotId, Currencies currency, int cost, int experimentPriority) { }

	[CompilerGenerated]
	public override InventorySlotId get_ConfigKey() { }

	[CompilerGenerated]
	public int get_Cost() { }

	[CompilerGenerated]
	public Currencies get_Currency() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public void set_ConfigKey(InventorySlotId value) { }

	[CompilerGenerated]
	public void set_Cost(int value) { }

	[CompilerGenerated]
	public void set_Currency(Currencies value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

}

