using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.CoinMultipliers.Services;
using Merger.MergeBoard.Components;
using Zenject;

namespace Merger.MergeBoard.CoinMultipliers.Systems
{
	public class CoinMultiplierApplySystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public ICoinMultiplierAmountResolver _coinMultiplierAmountResolver;

		public void Tick(TickContext context)
		{
		}

		public void ProcessAllComponents(TickContext context)
		{
		}

		public void ProcessComponent(Entity entity, CollectableComponent collectableComponent, string itemId)
		{
		}
	}
}
