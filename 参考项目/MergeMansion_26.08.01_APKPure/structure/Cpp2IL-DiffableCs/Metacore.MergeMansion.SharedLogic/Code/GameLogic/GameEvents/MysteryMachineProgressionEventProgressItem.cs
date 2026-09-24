namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(3)]
public class MysteryMachineProgressionEventProgressItem : IMysteryMachineItem
{
	[CompilerGenerated]
	private MysteryMachineProgressionEventProgressItemChainId <ChainId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ChainItemIndex>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MysteryMachineProgressionEventProgressItemChainId ChainId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int ChainItemIndex
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MysteryMachineProgressionEventProgressItem() { }

	public MysteryMachineProgressionEventProgressItem(MysteryMachineProgressionEventProgressItemChainId chainId, int chainItemIndex) { }

	[CompilerGenerated]
	public MysteryMachineProgressionEventProgressItemChainId get_ChainId() { }

	[CompilerGenerated]
	public int get_ChainItemIndex() { }

	public MysteryMachineProgressionEventProgressItemChainInfo GetChain(IPlayer player) { }

	public override IStringId GetChainId(IPlayer player) { }

	public MysteryMachineProgressionEventProgressItemInfo GetItem(IPlayer player) { }

	public override IItemDefinition GetItemDefinition(IPlayer player) { }

	public override int GetLevel(IPlayer player) { }

	public override string GetName(IPlayer player) { }

	public override List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player) { }

	public IItemDefinition GetVisualItem(IPlayer player, ProgressionEventModel progressionEvent) { }

	public override bool HasSpeciality(IPlayer player) { }

	public override bool IsCameraTargetable(IPlayer player) { }

	public override bool IsClaimableItem(IPlayer player) { }

	public override bool IsCollectableItem(IPlayer player) { }

	public override bool Matches(IMysteryMachineItem other) { }

	[CompilerGenerated]
	private void set_ChainId(MysteryMachineProgressionEventProgressItemChainId value) { }

	[CompilerGenerated]
	private void set_ChainItemIndex(int value) { }

	public override PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource source) { }

	public override bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result) { }

}

