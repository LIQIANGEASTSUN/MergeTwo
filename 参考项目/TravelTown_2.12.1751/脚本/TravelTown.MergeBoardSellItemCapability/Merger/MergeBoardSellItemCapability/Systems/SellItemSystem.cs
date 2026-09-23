using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoardSellItemCapability.Logic;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.Systems
{
	public class SellItemSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public ISellItemEligibilityValidator _sellItemEligibilityValidator;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}
	}
}
