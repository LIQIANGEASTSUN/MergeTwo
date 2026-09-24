using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class DigEventBoards : IGameConfigData<DigEventBoardId>, IGameConfigData, IHasGameConfigKey<DigEventBoardId>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public DigEventBoardId BoardId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int BoardWidth { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int BoardHeight { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int CellSize { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<DigEventItemId> Treasures { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward BoardReward { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public F32 CompensationChance { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public DigEventBoardId ConfigKey => null;

		public IPlayerReward GetBoardReward(IPlayer player)
		{
			return null;
		}

		public DigEventBoards()
		{
		}

		public DigEventBoards(DigEventBoardId configKey, int boardWidth, int boardHeight, int cellSize, List<DigEventItemId> boardItems, PlayerReward boardReward, F32 compensationChance, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
