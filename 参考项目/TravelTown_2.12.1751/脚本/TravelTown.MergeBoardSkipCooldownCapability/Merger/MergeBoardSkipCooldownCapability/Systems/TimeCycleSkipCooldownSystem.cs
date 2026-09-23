using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoardSkipCooldownCapability.Logic;
using Zenject;

namespace Merger.MergeBoardSkipCooldownCapability.Systems
{
	public class TimeCycleSkipCooldownSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public TimeCycleSkipCooldownStrategy _timeCycleSkipCooldownStrategy;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}
	}
}
