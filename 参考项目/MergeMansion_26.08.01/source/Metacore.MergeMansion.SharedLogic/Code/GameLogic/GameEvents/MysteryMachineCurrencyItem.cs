using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(2)]
	public class MysteryMachineCurrencyItem : IMysteryMachineItem
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineCurrencyItemChainId ChainId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ChainItemIndex { get; set; }

		public MysteryMachineCurrencyItem()
		{
		}

		public MysteryMachineCurrencyItem(MysteryMachineCurrencyItemChainId chainId, int chainItemIndex)
		{
		}

		public bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result)
		{
			result = null;
			return false;
		}

		public bool IsClaimableItem(IPlayer player)
		{
			return false;
		}

		public bool IsCollectableItem(IPlayer player)
		{
			return false;
		}

		public bool IsCameraTargetable(IPlayer player)
		{
			return false;
		}

		public bool HasSpeciality(IPlayer player)
		{
			return false;
		}

		public List<MysteryMachineSpecialityType> GetSpeciality(IPlayer player)
		{
			return null;
		}

		public PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource currencySource)
		{
			return null;
		}

		public MysteryMachineCurrencyItemChainInfo GetChain(IPlayer player)
		{
			return null;
		}

		public MysteryMachineCurrencyItemInfo GetItem(IPlayer player)
		{
			return null;
		}

		public static string GetPoolTag(Currencies currency)
		{
			return null;
		}

		public string GetSkinName()
		{
			return null;
		}

		public string GetName(IPlayer player)
		{
			return null;
		}

		public int GetLevel(IPlayer player)
		{
			return 0;
		}

		public IStringId GetChainId(IPlayer player)
		{
			return null;
		}

		public IItemDefinition GetItemDefinition(IPlayer player)
		{
			return null;
		}

		public bool Matches(IMysteryMachineItem other)
		{
			return false;
		}
	}
}
