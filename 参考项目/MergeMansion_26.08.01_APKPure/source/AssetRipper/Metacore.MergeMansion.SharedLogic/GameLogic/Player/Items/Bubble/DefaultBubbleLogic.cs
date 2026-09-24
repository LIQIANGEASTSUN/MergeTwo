using GameLogic.Config.Types;
using GameLogic.Player.Board;
using GameLogic.Utility.Debugging;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializableDerived(1)]
	public class DefaultBubbleLogic : IBubbleLogic, IProvidesDebugOutput
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int MaxBubblesOnBoard { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 FirstEncounterQuotient { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int RollScale { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int BubbleCountAdjustmentQuotient { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F32 GraceRecoverySpeed { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public F32 GraceChanceReduction { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public F32 MaxGraceChance { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public F32 MinGraceChance { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public F32 BehaviorChanceRecoverySpeed { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public F32 BehaviourChanceReduction { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public F32 MaxBubbleBehaviourChance { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public F32 MinBubbleBehaviourChance { get; set; }

		public DefaultBubbleLogic()
		{
		}

		public DefaultBubbleLogic(int maxBubblesOnBoard, F32 firstEncounterQuotient, int rollScale, int bubbleCountAdjustmentQuotient)
		{
		}

		public DefaultBubbleLogic(int maxBubblesOnBoard, F32 firstEncounterQuotient, int rollScale, int bubbleCountAdjustmentQuotient, F32 graceRecoverySpeed, F32 graceChanceReduction, F32 maxGraceChance, F32 minGraceChance, F32 behaviorChanceRecoverySpeed, F32 behaviourChanceReduction, F32 maxBubbleBehaviourChance, F32 minBubbleBehaviourChance)
		{
		}

		public IItemDefinition ShouldSpawn(IPlayer player, IBoard mergeBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp)
		{
			return null;
		}

		public void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime)
		{
		}

		public void UpdateBubbleGraceChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime)
		{
		}

		public F32 ComputeBubbleGraceChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime)
		{
			return default(F32);
		}

		public void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime)
		{
		}

		public void UpdateBubbleBehaviourChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime)
		{
		}

		public F32 ComputeBubbleBehaviourChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime)
		{
			return default(F32);
		}

		public int GetSpawnChance(IBoard mergeBoard, MetacoreTime currentTime)
		{
			return 0;
		}

		public string DebugOutput(IPlayer playerState, ISharedBoardController boardController, MetaTime debugOutputTimestamp)
		{
			return null;
		}
	}
}
