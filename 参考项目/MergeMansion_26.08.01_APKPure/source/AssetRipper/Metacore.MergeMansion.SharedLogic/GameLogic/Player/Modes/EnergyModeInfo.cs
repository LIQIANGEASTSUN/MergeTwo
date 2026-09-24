using System;
using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Player.Board;
using GameLogic.Player.Requirements;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Modes
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 2, 6, 7 })]
	public class EnergyModeInfo : IGameConfigData<PlayerModeId>, IGameConfigData, IHasGameConfigKey<PlayerModeId>, IValidatable, IComparable<EnergyModeInfo>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public PlayerModeId ConfigKey { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int EnergyConsumptionMultiplier { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int CapacityConsumptionMultiplier { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public F32 LevelUpChance { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public CurrencySink CurrencySink { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int LevelUpCount { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string NameLocId { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> EnableRequirements { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public bool DisableEnergyFallbacks { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public EnergyModeInfo()
		{
		}

		public EnergyModeInfo(PlayerModeId configKey, int energyConsumptionMultiplier, int capacityConsumptionMultiplier, F32 levelUpChance, int levelUpCount, string nameLocId, List<PlayerRequirement> enableRequirements, bool disableEnergyFallbacks, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public int GetFallbacks(IPlayer player, IBoard board, EnergyModeInfo[] resultBuffer)
		{
			return 0;
		}

		public bool MatchesEnableRequirements(IPlayer player)
		{
			return false;
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public int CompareTo(EnergyModeInfo other)
		{
			return 0;
		}
	}
}
