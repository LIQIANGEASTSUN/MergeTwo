using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Systems
{
	public class PowerBoostSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		public void Tick(TickContext context)
		{
		}
	}
}
