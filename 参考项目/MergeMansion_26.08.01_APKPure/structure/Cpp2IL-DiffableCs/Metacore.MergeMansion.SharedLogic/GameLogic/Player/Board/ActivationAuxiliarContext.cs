namespace GameLogic.Player.Board;

public class ActivationAuxiliarContext
{
	[CompilerGenerated]
	private ItemDefinition <OverrideSpawnActivationItem>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private AuxEnergyAttachmentChance <AuxEnergyAttachmentChance>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private bool <IsOverridingSpawn>k__BackingField; //Field offset: 0x20

	public AuxEnergyAttachmentChance AuxEnergyAttachmentChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public private bool IsOverridingSpawn
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private ItemDefinition OverrideSpawnActivationItem
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ActivationAuxiliarContext() { }

	[CompilerGenerated]
	public AuxEnergyAttachmentChance get_AuxEnergyAttachmentChance() { }

	[CompilerGenerated]
	public bool get_IsOverridingSpawn() { }

	[CompilerGenerated]
	public ItemDefinition get_OverrideSpawnActivationItem() { }

	public ActivationResult RollOverrideSpawn(IPlayer player, MergeBoardId mergeBoardId) { }

	private bool RollOverrideSpawnChances(IPlayer player, MergeBoardId mergeBoardId, out ItemDefinition rolledItemDefinition) { }

	[CompilerGenerated]
	public void set_AuxEnergyAttachmentChance(AuxEnergyAttachmentChance value) { }

	[CompilerGenerated]
	private void set_IsOverridingSpawn(bool value) { }

	[CompilerGenerated]
	private void set_OverrideSpawnActivationItem(ItemDefinition value) { }

}

