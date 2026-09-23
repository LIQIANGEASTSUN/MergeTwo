using System;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.Decorators
{
	public class SellItemSystemDecorator : IBoardControllerDecorator
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void DecorateSystems(SystemsBuilder systemsBuilder)
		{
		}
	}
}
