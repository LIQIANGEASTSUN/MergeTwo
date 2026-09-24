using System.Collections.Generic;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.MergeChains;
using GameLogic.Player.Board;
using GameLogic.Utility.Debugging;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializableDerived(2)]
	public class BracketedBubbleLogic : IBubbleLogic, IProvidesDebugOutput
	{
		[MetaSerializable]
		public class Bracket
		{
			[MetaMember(1, MetaMemberFlags.None)]
			public MetaDuration? Min { get; set; }

			[MetaMember(2, MetaMemberFlags.None)]
			public MetaDuration? Max { get; set; }

			[MetaMember(3, MetaMemberFlags.None)]
			public F32 Quotient { get; set; }

			public Bracket()
			{
			}

			public Bracket(MetaDuration? min, MetaDuration? max, F32 quotient)
			{
			}

			public bool Matches(MetaDuration timestamp)
			{
				return false;
			}

			public static explicit operator Bracket((F32 quot, MetaDuration? min, MetaDuration? max) triplet)
			{
				return null;
			}

			public override string ToString()
			{
				return null;
			}
		}

		[MetaMember(1, MetaMemberFlags.None)]
		public List<Bracket> Brackets { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public F32 NonNeededPenalty { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public F32 HardestTaskBoost { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public F32 NormalizationQuot { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int MaxBubblesOnBoard { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixMergeChainRefList")]
		public List<MergeChainDef> ChainsWithSimplifiedLogic { get; set; }

		public BracketedBubbleLogic()
		{
		}

		public BracketedBubbleLogic(IEnumerable<(F32 quot, MetaDuration? min, MetaDuration? max)> brackets, F32 nonNeededPenalty, F32 hardestTaskBoost, F32 normalizationQuot, int maxBubblesOnBoard, IEnumerable<MergeChainId> chainsWithSimplifiedLogic)
		{
		}

		public IItemDefinition ShouldSpawn(IPlayer player, IBoard currentBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp)
		{
			return null;
		}

		public F32 ComputeSpawnChance(IPlayer player, IBoard mergeBoard, IItemDefinition itemDefinition, MetacoreTime metaTime, out Bracket selectedBracket, out bool mostDifficult, out bool neededForTask, out F32 taskQuot, out F32 baseChance, out F32 existingBubblesChance, out bool neededForSinkItem)
		{
			selectedBracket = null;
			mostDifficult = default(bool);
			neededForTask = default(bool);
			taskQuot = default(F32);
			baseChance = default(F32);
			existingBubblesChance = default(F32);
			neededForSinkItem = default(bool);
			return default(F32);
		}

		public void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime)
		{
		}

		public void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime)
		{
		}

		public bool HasSimplifiedLogic(IItemDefinition itemDefinition, IPlayer player)
		{
			return false;
		}

		public string DebugOutput(IPlayer playerState, ISharedBoardController boardController, MetaTime debugOutputTimestamp)
		{
			return null;
		}

		public static List<MergeChainDef> FixMergeChainRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
