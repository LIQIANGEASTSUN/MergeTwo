using System;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Util;
using Merger.EventEnergy.Model;
using Merger.Game.Model;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace MergeEngine.ECS.Systems.Items
{
	public class VisualStateSystem : SystemBase, ITickableSystem
	{
		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[Inject]
		[NonSerialized]
		public ICooldownTimerConfigurationModel _cooldownTimerConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEventEnergyAssetsModel _eventEnergyAssetsModel;

		public SystemPriorities Priority => default(SystemPriorities);

		public override void InitializeSystem()
		{
		}

		public void Tick()
		{
		}

		public AssetReferenceT<Sprite> HandleInteractionCostIcon(InteractionComponent interactionComponent)
		{
			return null;
		}

		public void HandleInteractionCostsItemsState(InteractionComponent interactionComponent, VisualComponent visualComponent)
		{
		}

		public void HandleTimeLockedVisualState(TimeLockComponent timeLockComponent, VisualComponent visualComponent)
		{
		}

		public void HandleItemSpawningVisualState(IItemSpawningComponent component, VisualComponent visualComponent)
		{
		}

		public void HandleItemTimer(VisualComponent visualComponent, float progressValue, int totalSeconds)
		{
		}
	}
}
