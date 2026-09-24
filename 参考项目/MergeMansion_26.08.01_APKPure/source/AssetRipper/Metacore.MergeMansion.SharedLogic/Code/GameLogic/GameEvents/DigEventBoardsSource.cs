using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace Code.GameLogic.GameEvents
{
	public class DigEventBoardsSource : IConfigItemSource<DigEventBoards, DigEventBoardId>, IGameConfigSourceItem<DigEventBoardId, DigEventBoards>, IHasGameConfigKey<DigEventBoardId>
	{
		public int ExperimentPriority { get; set; }

		public DigEventBoardId ConfigKey { get; set; }

		public int BoardWidth { get; set; }

		public int BoardHeight { get; set; }

		public int CellSize { get; set; }

		public List<DigEventItemId> BoardItems { get; set; }

		public string RewardType { get; set; }

		public string RewardId { get; set; }

		public string RewardAux0 { get; set; }

		public string RewardAux1 { get; set; }

		public int RewardAmount { get; set; }

		public F32 CompensationChance { get; set; }

		public DigEventBoards ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public PlayerReward CreateReward(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
