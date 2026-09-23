using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineExtraItemGrantingInfo : IGameConfigData<MysteryMachineExtraItemGrantingId>, IGameConfigData, IHasGameConfigKey<MysteryMachineExtraItemGrantingId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineExtraItemGrantingId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeChainId ChainId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRefs")]
		public List<ItemDef> ItemDefs { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<int> ExtraItemAmounts { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineExtraItemGrantingInfo()
		{
		}

		public MysteryMachineExtraItemGrantingInfo(MysteryMachineExtraItemGrantingId configKey, MergeChainId chainId, List<ItemDef> itemDefs, List<int> extraItemAmounts, int experimentPriority)
		{
		}

		public static List<ItemDef> FixRefs(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
