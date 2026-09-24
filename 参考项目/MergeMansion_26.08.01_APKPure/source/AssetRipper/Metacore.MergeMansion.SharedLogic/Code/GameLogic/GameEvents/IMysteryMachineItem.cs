using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public interface IMysteryMachineItem
	{
		bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result);

		PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource currencySource);

		bool IsClaimableItem(IPlayer player);

		string GetName(IPlayer player);

		bool IsCollectableItem(IPlayer player);

		bool IsCameraTargetable(IPlayer player);

		bool HasSpeciality(IPlayer player);

		List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player);

		int GetLevel(IPlayer player);

		IStringId GetChainId(IPlayer player);

		IItemDefinition GetItemDefinition(IPlayer player);

		bool Matches(IMysteryMachineItem other);
	}
}
