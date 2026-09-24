using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Player.Director.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.ItemsInPocket
{
	[MetaSerializable]
	public class ItemInPocketInfo : IGameConfigData<ItemInPocketId>, IGameConfigData, IHasGameConfigKey<ItemInPocketId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ItemInPocketId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRef")]
		public ItemDef ItemDef { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool IsNecessaryValidCoordinateToRunFromPocket { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool CanMoveToBoard { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int PriorityInPocket { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<IDirectorAction> ActionsToRunFromPocket { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ItemInPocketInfo()
		{
		}

		public ItemInPocketInfo(ItemInPocketId itemInPocketId, int itemRef, bool isNecessaryValidCoordinateToRunFromPocket, bool canMoveToBoard, int priorityInPocket, List<IDirectorAction> actionsToRunFromPocket, int experimentPriority)
		{
		}

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
