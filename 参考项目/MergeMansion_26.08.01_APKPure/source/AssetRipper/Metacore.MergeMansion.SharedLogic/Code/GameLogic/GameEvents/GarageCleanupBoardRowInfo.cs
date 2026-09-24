using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class GarageCleanupBoardRowInfo : IGameConfigData<GarageCleanupBoardRowId>, IGameConfigData, IHasGameConfigKey<GarageCleanupBoardRowId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public GarageCleanupBoardRowId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRefList")]
		public List<ItemDef> Items { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public GarageCleanupBoardRowInfo()
		{
		}

		public GarageCleanupBoardRowInfo(GarageCleanupBoardRowId boardId, List<int> items, int experimentPriority)
		{
		}

		public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
