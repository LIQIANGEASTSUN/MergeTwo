using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Events;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Requirements;
using GameLogic.Random;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace TimedMergeBoards
{
	[MetaSerializable]
	public class TimedMergeBoard : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>, IValidatable, IHasRequirements, IMergeBoardGenerator
	{
		public MergeBoardId ConfigKey => null;

		public IEnumerable<PlayerRequirement> Requirements => null;

		public IEnumerable<IPlayerRequirement> CompleteRequirements => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId Id { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MergeBoardGeneratorId GeneratorId { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> PlayerRequirements { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef FinalItemDef { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> CompletesRequirements { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> LevelInfos { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public TimedMergeBoard()
		{
		}

		public TimedMergeBoard(MergeBoardId id, MergeBoardGeneratorId generatorId, MetaDuration duration, ItemDef finalItemDef, List<PlayerRequirement> playerRequirements, List<PlayerRequirement> completesRequirements, List<MetaRef<EventLevelInfo>> levelInfos, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public EventLevelInfo GetLevelInfo(int index)
		{
			return null;
		}

		public IEnumerable<EventLevelInfo> GetRewardsUpToLevel(int index)
		{
			return null;
		}

		public int GetReachedLevelNdx(int progress)
		{
			return 0;
		}

		public int GetMaxProgress()
		{
			return 0;
		}

		public int GetLevelCount()
		{
			return 0;
		}

		public MergeBoard GenerateBoard(IPlayer player, IGenerationContext generationContext, IMergeMansionGameConfig gameConfig, MetaTime creationTime)
		{
			return null;
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
