namespace GameLogic.Player.Actions.Multi;

[ModelAction(30040)]
public class TryMasterFunctionsUnlockProducerInventorySlot : PlayerAction
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ProducerInventorySlotConfig <ProducerInventorySlot>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<Boolean> <ReturnList>k__BackingField; //Field offset: 0x20

	private MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ProducerInventorySlotConfig ProducerInventorySlot
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private List<Boolean> ReturnList
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private TryMasterFunctionsUnlockProducerInventorySlot() { }

	public TryMasterFunctionsUnlockProducerInventorySlot(MergeBoardId boardId, ProducerInventorySlotConfig producerInventorySlot, List<Boolean> returnList) { }

	public virtual MetaActionResult Execute(PlayerModel player, bool commit) { }

	[CompilerGenerated]
	private MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	private ProducerInventorySlotConfig get_ProducerInventorySlot() { }

	[CompilerGenerated]
	private List<Boolean> get_ReturnList() { }

	[CompilerGenerated]
	private void set_MergeBoardId(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_ProducerInventorySlot(ProducerInventorySlotConfig value) { }

	[CompilerGenerated]
	private void set_ReturnList(List<Boolean> value) { }

}

