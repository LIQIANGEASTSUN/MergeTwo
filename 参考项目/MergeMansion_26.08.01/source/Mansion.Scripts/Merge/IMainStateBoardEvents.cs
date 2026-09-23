using System.Collections.Generic;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Board.Effects;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Modes;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.Common.Options;

namespace Merge
{
	public interface IMainStateBoardEvents
	{
		void OnBoardAct(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs);

		void OnBoardAct(MergeBoardId boardId, MergeBoardAct boardAct);

		void OnVisualEffectRequest(IBoardVisualEffect boardVisualEffect);

		void OnLeaderboardEventScoreChanged(int scoreChange);

		void OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus);

		void OnExtraSpawn(IExtraSpawnTrigger trigger, MergeBoardId boardId, Coordinate coordinate, IItemDefinition item, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption);

		void OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards);

		void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active);

		void OnSetPlayerModeActiveForBoard(PlayerModeId playerModeId, MergeBoardId boardId, bool active);

		void OnDailyTaskStatusChanged();

		void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId);

		void OnMysteryMachineLevelUp(MysteryMachineEventId eventId);

		void OnShortLeaderboardEventScoreChanged(int scoreChange);

		void UpdateAllBubbles();

		void OnPlayerNameChanged();

		void OnAutoMergeStateChanged();

		void OnAutoMergeDurationChanged();
	}
}
