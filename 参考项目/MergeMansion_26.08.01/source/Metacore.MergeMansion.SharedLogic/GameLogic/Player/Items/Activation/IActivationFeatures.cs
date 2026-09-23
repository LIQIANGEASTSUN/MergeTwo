using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Requirements;
using GameLogic.Random;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Activation
{
	public interface IActivationFeatures
	{
		IItemSpawner ActivationSpawn { get; }

		IPlacement Placement { get; }

		IActivationCycle ActivationCycle { get; }

		int StorageMax { get; }

		IItemProducer DecayAfterLastCycleProducer { get; }

		ItemVisibility SpawnVisibility { get; }

		bool StartsFull { get; }

		List<PlayerRequirement> ActivationRequirements { get; }

		int? ActivationCost { get; }

		bool ShowTapTextOnDiscovery { get; }

		bool AllowCooldownRemover { get; }

		bool AllowEnergyMode { get; }

		MetaDuration? DecayDelay { get; }

		bool Activable { get; }

		bool DecayAfterLastCycleAndActivation { get; }

		MetaTime? ActivationStartTime { get; }

		bool HasDecayDelay { get; }

		F64 TimeSkipPriceGems(IGenerationContext context);

		bool IsInInitialSequence(IGenerationContext generationContext, ProducerContext producerContext);

		IEnumerable<IItemDefinition> GetActivationSpawnItems(IGenerationContext generationContext, Option<ProducerContext> producerContextOption);

		int GetItemsPerActivation();

		bool MatchesRequirements(IPlayer player);
	}
}
