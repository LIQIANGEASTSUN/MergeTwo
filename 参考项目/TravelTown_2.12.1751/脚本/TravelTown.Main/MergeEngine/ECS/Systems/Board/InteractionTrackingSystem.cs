using System;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.InteractionTracking;
using MergeEngine.ECS.Util;
using Merger.PowerBoost;

namespace MergeEngine.ECS.Systems.Board
{
	public class InteractionTrackingSystem : TickableSystem<InteractionTrackingComponent>
	{
		[InjectComponent]
		[NonSerialized]
		public InteractionTrackingComponent _interactionTrackingComponent;

		[InjectSystem]
		[NonSerialized]
		public PowerBoostSystem _powerBoostSystem;

		public override SystemPriorities Priority => default(SystemPriorities);

		public override void ProcessComponents(ReadOnlyCollection<InteractionTrackingComponent> components)
		{
		}

		public void TryToSendEvent()
		{
		}
	}
}
