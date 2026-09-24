using System;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.TimeLimitedItems.Decorators
{
	public class TimeLimitedItemsSystemDecorator : IBoardControllerDecorator
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void DecorateSystems(SystemsBuilder systemsBuilder)
		{
		}
	}
}
