namespace GameLogic.Inventory;

public class RentableInventorySettingsSource : IConfigItemSource<RentableInventorySettings, RentableInventorySettingsId>, IGameConfigSourceItem<RentableInventorySettingsId, RentableInventorySettings>, IHasGameConfigKey<RentableInventorySettingsId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private RentableInventorySettingsId <ConfigKey>k__BackingField; //Field offset: 0x18
	public List<Int64> BatchPrices; //Field offset: 0x20
	public Currencies BatchPriceCurrency; //Field offset: 0x28
	public int BatchSlotCount; //Field offset: 0x2C
	public int BatchExpireTime; //Field offset: 0x30
	public int MaximumBatches; //Field offset: 0x34

	public override RentableInventorySettingsId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public RentableInventorySettingsSource() { }

	[CompilerGenerated]
	public override RentableInventorySettingsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public void set_ConfigKey(RentableInventorySettingsId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	public override RentableInventorySettings ToConfigData(GameConfigBuildLog buildLog) { }

}

