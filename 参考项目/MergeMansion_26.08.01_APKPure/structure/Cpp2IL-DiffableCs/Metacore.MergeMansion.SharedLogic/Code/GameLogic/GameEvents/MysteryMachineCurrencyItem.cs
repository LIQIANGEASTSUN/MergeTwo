namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(2)]
public class MysteryMachineCurrencyItem : IMysteryMachineItem
{
	[CompilerGenerated]
	private MysteryMachineCurrencyItemChainId <ChainId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ChainItemIndex>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MysteryMachineCurrencyItemChainId ChainId
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

	private MysteryMachineCurrencyItem() { }

	public MysteryMachineCurrencyItem(MysteryMachineCurrencyItemChainId chainId, int chainItemIndex) { }

	[CompilerGenerated]
	public MysteryMachineCurrencyItemChainId get_ChainId() { }

	[CompilerGenerated]
	public int get_ChainItemIndex() { }

	public MysteryMachineCurrencyItemChainInfo GetChain(IPlayer player) { }

	public override IStringId GetChainId(IPlayer player) { }

	public MysteryMachineCurrencyItemInfo GetItem(IPlayer player) { }

	public override IItemDefinition GetItemDefinition(IPlayer player) { }

	public override int GetLevel(IPlayer player) { }

	public override string GetName(IPlayer player) { }

	private static string GetPoolTag(Currencies currency) { }

	private string GetSkinName() { }

	public override List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player) { }

	public override bool HasSpeciality(IPlayer player) { }

	public override bool IsCameraTargetable(IPlayer player) { }

	public override bool IsClaimableItem(IPlayer player) { }

	public override bool IsCollectableItem(IPlayer player) { }

	public override bool Matches(IMysteryMachineItem other) { }

	[CompilerGenerated]
	private void set_ChainId(MysteryMachineCurrencyItemChainId value) { }

	[CompilerGenerated]
	private void set_ChainItemIndex(int value) { }

	public override PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource currencySource) { }

	public override bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result) { }

}

