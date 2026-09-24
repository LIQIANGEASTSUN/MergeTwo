using System;
using Merger.Rewards.Services;
using Zenject;

namespace Merger.MergeBoardQueue.Services
{
	public class MergeBoardItemRewardDequeueStrategyRegistrar : IInitializable, IDisposable
	{
		[Inject]
		[NonSerialized]
		public IBoardItemRewardDequeueProviderRegistry _registry;

		[Inject]
		[NonSerialized]
		public MergeBoardItemRewardDequeueStrategy _strategy;

		public void Initialize()
		{
		}

		public void Dispose()
		{
		}
	}
}
