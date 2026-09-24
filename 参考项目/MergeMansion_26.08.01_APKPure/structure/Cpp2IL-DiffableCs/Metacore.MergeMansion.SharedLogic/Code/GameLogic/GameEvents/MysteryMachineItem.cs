namespace Code.GameLogic.GameEvents;

[MetaSerializableDerived(1)]
public class MysteryMachineItem : IMysteryMachineItem
{
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MysteryMachineItem() { }

	public MysteryMachineItem(int itemId) { }

	[CompilerGenerated]
	public int get_ItemId() { }

	public IMergeChainDefinition GetChain(IPlayer player) { }

	public override IStringId GetChainId(IPlayer player) { }

	public override IItemDefinition GetItemDefinition(IPlayer player) { }

	public override int GetLevel(IPlayer player) { }

	public override string GetName(IPlayer player) { }

	public override List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player) { }

	public List<MysteryMachineSpecialityType> GetSpecialityType(IPlayer playerModel) { }

	public override bool HasSpeciality(IPlayer player) { }

	public bool IsBattery(IPlayer player) { }

	public override bool IsCameraTargetable(IPlayer player) { }

	public override bool IsClaimableItem(IPlayer player) { }

	public override bool IsCollectableItem(IPlayer player) { }

	public override bool Matches(IMysteryMachineItem other) { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	public override PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource currencySource) { }

	public override bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result) { }

}

