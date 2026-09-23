using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(3)]
	public class MysteryMachineProgressionEventProgressItem : IMysteryMachineItem
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineProgressionEventProgressItemChainId ChainId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ChainItemIndex { get; set; }

		public MysteryMachineProgressionEventProgressItem()
		{
		}

		public MysteryMachineProgressionEventProgressItem(MysteryMachineProgressionEventProgressItemChainId chainId, int chainItemIndex)
		{
		}

		public bool TryMerge(IPlayer player, IMysteryMachineItem other, out IMysteryMachineItem result)
		{
			result = null;
			return false;
		}

		public PlayerReward ToPlayerReward(IPlayer player, MergeBoardId mergeBoardId, CurrencySource source)
		{
			return null;
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

		public MysteryMachineProgressionEventProgressItemChainInfo GetChain(IPlayer player)
		{
			return null;
		}

		public MysteryMachineProgressionEventProgressItemInfo GetItem(IPlayer player)
		{
			return null;
		}

		public IItemDefinition GetVisualItem(IPlayer player, ProgressionEventModel progressionEvent)
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
