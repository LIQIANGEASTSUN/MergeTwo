using System;
using System.Collections.Generic;
using ContextualizedECS;
using Framework.Core;
using Framework.Core.Services.ServerTime;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.Model.Configuration;
using Merger.DynamicMergeItems;
using Merger.MergeBoard.Components;
using Merger.MergeBoard.Logic.State.Updaters;
using Merger.Services.Backend.Sync.Data.Payloads.Board;
using Zenject;

namespace Merger.MergeBoard.Factories
{
	public class MergeBoardItemsEntityFactory : Base, IEntityFactory
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IServerTimeService _serverTimeService;

		[NonSerialized]
		public List<IBoardItemComponentStateUpdater> _componentUpdaters;

		public long CurrentServerTimeMS => 0L;

		public List<IBoardItemComponentStateUpdater> ComponentUpdaters => null;

		public Entity CreateEntity(string itemId, int position, ItemOrigin origin, bool isLocked, DynamicMergeItemConfig dynamicItemConfig = null)
		{
			return null;
		}

		public Entity CreateEntity(IMergeItem mergeItem, int position, ItemOrigin origin, bool isLocked, DynamicMergeItemConfig dynamicItemConfig = null)
		{
			return null;
		}

		public Entity CreateEntity(ItemPayloadBase itemState, int position)
		{
			return null;
		}

		public void TryAddComponent<TComponent>(Entity entity, CapabilityBase capability, Func<TComponent> componentFactory) where TComponent : struct, IComponent
		{
		}

		public Entity CreateBoardItemEntity(IMergeItem itemConfiguration, int position, ItemOrigin origin)
		{
			return null;
		}

		public ChargeableComponent CreateChargeableComponent(IMergeItem itemConfiguration)
		{
			return default(ChargeableComponent);
		}

		public Merger.MergeBoard.Components.ProducerComponent CreateProducerComponent(IMergeItem mergeItem)
		{
			return default(Merger.MergeBoard.Components.ProducerComponent);
		}

		public Merger.MergeBoard.Components.SpawnerComponent CreateSpawnerComponent(IMergeItem mergeItem)
		{
			return default(Merger.MergeBoard.Components.SpawnerComponent);
		}

		public Merger.MergeBoard.Components.ExpendableComponent CreateExpandableComponent(Entity entity, IMergeItem mergeItem)
		{
			return default(Merger.MergeBoard.Components.ExpendableComponent);
		}

		public Merger.MergeBoard.Components.TimeLimitedActivationComponent CreateTimeLimitedActivationComponent(Entity entity, Merger.MergeBoard.Components.ExpendableComponent expendableComponent)
		{
			return default(Merger.MergeBoard.Components.TimeLimitedActivationComponent);
		}

		public Merger.MergeBoard.Components.MergeComponent CreateMergeComponent(MergeCapability mergeCapability)
		{
			return default(Merger.MergeBoard.Components.MergeComponent);
		}

		public TimeCycleComponent CreateTimeCycleComponent(ProduceCapability produceCapability)
		{
			return default(TimeCycleComponent);
		}

		public TimeCycleComponent CreateTimeCycleComponent(SpawnCapability spawnCapability)
		{
			return default(TimeCycleComponent);
		}

		public Merger.MergeBoard.Components.TimeLockComponent CreateTimeLockComponent(IMergeItem itemConfiguration)
		{
			return default(Merger.MergeBoard.Components.TimeLockComponent);
		}

		public Merger.MergeBoard.Components.InteractionComponent CreateInteractionComponent(IMergeItem itemConfiguration)
		{
			return default(Merger.MergeBoard.Components.InteractionComponent);
		}

		public Merger.MergeBoard.Components.CollectableComponent CreateCollectableComponent(CollectableItemCapability collectableItemCapability)
		{
			return default(Merger.MergeBoard.Components.CollectableComponent);
		}

		public FeedingCombinationComponent CreateFeedingCombinationComponent()
		{
			return default(FeedingCombinationComponent);
		}

		public Merger.MergeBoard.Components.ToolSpawningComponent CreateToolSpawningComponent(ToolSpawningCapability capability)
		{
			return default(Merger.MergeBoard.Components.ToolSpawningComponent);
		}

		public void ResolveDynamicItemConfig(Entity entity, DynamicMergeItemConfig dynamicItemConfig)
		{
		}

		public void TryAddInteractionConstraint(Entity entity, InteractionConstraintCapability interactionConstraint)
		{
		}

		public void UpdateComponentsFromState(Entity entity, ItemPayloadBase itemState)
		{
		}

		public void CalculateUnlockTimeLeft(SerializedTimeLockComponent timeLockComponent)
		{
		}

		public void CalculateCyclesDelay(SerializedItemSpawningComponent itemSpawningComponent)
		{
		}

		public void UpdateLockComponent(Entity createdEntity, bool isLocked)
		{
		}

		public List<IBoardItemComponentStateUpdater> GetComponentUpdaterList()
		{
			return null;
		}
	}
}
