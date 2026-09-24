namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public interface IMysteryMachineItem
{

	public IStringId GetChainId(IPlayer player) { }

	public IItemDefinition GetItemDefinition(IPlayer player) { }

	public int GetLevel(IPlayer player) { }

	public string GetName(IPlayer player) { }

	public List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player) { }

	public bool HasSpeciality(IPlayer player) { }

	public bool IsCameraTargetable(IPlayer player) { }

	public bool IsClaimableItem(IPlayer player) { }

	public bool IsCollectableItem(IPlayer player) { }

	public bool Matches(IMysteryMachineItem other) { }

	public PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource currencySource) { }

	public bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result) { }

}

