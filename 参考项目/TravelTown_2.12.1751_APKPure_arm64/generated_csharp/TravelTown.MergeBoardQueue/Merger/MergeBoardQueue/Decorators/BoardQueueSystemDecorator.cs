using System;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoardQueue.Decorators
{
	public class BoardQueueSystemDecorator : IBoardControllerDecorator
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void DecorateSystems(SystemsBuilder systemsBuilder)
		{
		}
	}
}
