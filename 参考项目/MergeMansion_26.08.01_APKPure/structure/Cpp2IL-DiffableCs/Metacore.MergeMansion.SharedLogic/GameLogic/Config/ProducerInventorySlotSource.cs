namespace GameLogic.Config;

public class ProducerInventorySlotSource : IConfigItemSource<ProducerInventorySlotConfig, ProducerInventorySlotId>, IGameConfigSourceItem<ProducerInventorySlotId, ProducerInventorySlotConfig>, IHasGameConfigKey<ProducerInventorySlotId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ProducerInventorySlotId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<String> <TeaseRequirementType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<String> <TeaseRequirementId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<String> <TeaseRequirementAmount>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <TeaseRequirementAux0>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <UnlockRequirementType>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <UnlockRequirementId>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <UnlockRequirementAmount>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <UnlockRequirementAux0>k__BackingField; //Field offset: 0x58

	public override ProducerInventorySlotId ConfigKey
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

	private List<String> TeaseRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> TeaseRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> TeaseRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> TeaseRequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> UnlockRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> UnlockRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> UnlockRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> UnlockRequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ProducerInventorySlotSource() { }

	[CompilerGenerated]
	public override ProducerInventorySlotId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<String> get_TeaseRequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_TeaseRequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_TeaseRequirementId() { }

	[CompilerGenerated]
	private List<String> get_TeaseRequirementType() { }

	[CompilerGenerated]
	private List<String> get_UnlockRequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_UnlockRequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_UnlockRequirementId() { }

	[CompilerGenerated]
	private List<String> get_UnlockRequirementType() { }

	[CompilerGenerated]
	public void set_ConfigKey(ProducerInventorySlotId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_TeaseRequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_TeaseRequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_TeaseRequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_TeaseRequirementType(List<String> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_UnlockRequirementType(List<String> value) { }

	public override ProducerInventorySlotConfig ToConfigData(GameConfigBuildLog buildLog) { }

}

