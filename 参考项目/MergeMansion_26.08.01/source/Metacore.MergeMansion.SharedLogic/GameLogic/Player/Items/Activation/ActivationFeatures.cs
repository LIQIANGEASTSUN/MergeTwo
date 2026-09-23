using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Requirements;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Activation
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 7 })]
	public class ActivationFeatures : IActivationFeatures
	{
		public static readonly ActivationFeatures NoActivation;

		[MetaMember(1, MetaMemberFlags.None)]
		public IItemSpawner ActivationSpawn { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IPlacement Placement { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public IActivationCycle ActivationCycle { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int StorageMax { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public IItemProducer DecayAfterLastCycleProducer { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public ItemVisibility SpawnVisibility { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool StartsFull { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> ActivationRequirements { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int? ActivationCost { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public bool ShowTapTextOnDiscovery { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public bool AllowCooldownRemover { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public bool AllowEnergyMode { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MetaDuration? DecayDelay { get; set; }

		public bool Activable => false;

		public bool DecayAfterLastCycleAndActivation => false;

		public MetaTime? ActivationStartTime => null;

		public bool HasDecayDelay => false;

		public ActivationFeatures()
		{
		}

		public ActivationFeatures(IItemSpawner activationSpawn, IPlacement placement, IActivationCycle cycle, int howManyCanStore, IItemProducer randomItemDecayProducer, bool startsFull, List<PlayerRequirement> activationRequirements, int? activationCost, bool showTapTextOnDiscovery, bool allowCooldownRemover, bool allowEnergyMode, MetaDuration? decayDelay, ItemVisibility itemVisibility = ItemVisibility.Visible)
		{
		}

		public F64 TimeSkipPriceGems(IGenerationContext context)
		{
			return default(F64);
		}

		public bool IsInInitialSequence(IGenerationContext generationContext, ProducerContext producerContext)
		{
			return false;
		}

		public IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, Option<ProducerContext> producerContextOption)
		{
			return null;
		}

		public int GetItemsPerActivation()
		{
			return 0;
		}

		public static IItemSpawner CreateProducer(int production)
		{
			return null;
		}

		public bool MatchesRequirements(IPlayer player)
		{
			return false;
		}

		public void SetReEngagementSettings(IActivationReEngagementSettings activationReEngagementSettings)
		{
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
