using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Components;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class TimeCycleSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}

		public void ProcessTimeCheckIfLocked(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity)
		{
		}

		public void ProcessTime(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity)
		{
		}

		public void ProcessDelay(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity)
		{
		}

		public void ProcessCycles(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity)
		{
		}

		public bool SkipCooldownEntirely(TimeCycleComponent component)
		{
			return false;
		}

		public void ProcessCycle(TickContext context, double seconds, ref TimeCycleComponent component, Entity entity)
		{
		}

		public bool ShouldFireCooldownStartedEvent(TimeCycleState previousState, TimeCycleState currentState)
		{
			return false;
		}

		public void AddCooldownStartedResult(TickContext context, ref TimeCycleComponent timeCycleComponent, Entity entity)
		{
		}

		public void AddCooldownEndedResult(TickContext context, ref TimeCycleComponent timeCycleComponent, Entity entity)
		{
		}
	}
}
