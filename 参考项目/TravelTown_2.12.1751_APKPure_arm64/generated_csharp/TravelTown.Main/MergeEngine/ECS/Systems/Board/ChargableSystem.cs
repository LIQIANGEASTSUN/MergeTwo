using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.Items;
using MergeEngine.ECS.Systems.Player;
using MergeEngine.ECS.Util;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.ECS.Systems.Board
{
	public class ChargableSystem : BaseItemSystem<ChargableComponent>
	{
		[InjectSystem]
		[NonSerialized]
		public ResourcesSystem _resourcesSystem;

		[InjectComponent]
		[NonSerialized]
		public BoardItemCountComponent _boardItemCountComponent;

		[InjectSystem]
		[NonSerialized]
		public InteractionSystem _interactionSystem;

		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override void InitializeSystem()
		{
		}

		public new void OnAllSystemsInitialized()
		{
		}

		public override void EntityCreated(Entity entity)
		{
		}

		public override IEnumerable<ChargableComponent> OnWillProcessComponents(ReadOnlyCollection<ChargableComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(ChargableComponent chargable)
		{
		}

		public void ChargeItem(ChargableComponent chargableComponent)
		{
		}

		public void UpdateSprite(ChargableComponent chargable)
		{
		}

		public void SendChargableAnalytics(ChargableComponent chargable)
		{
		}
	}
}
