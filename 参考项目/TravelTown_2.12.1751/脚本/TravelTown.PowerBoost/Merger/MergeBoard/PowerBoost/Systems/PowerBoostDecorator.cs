using System;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.Systems
{
	public class PowerBoostDecorator : IBoardControllerDecorator
	{
		[Inject]
		[NonSerialized]
		public DiContainer _container;

		public void DecorateSystems(SystemsBuilder systemsBuilder)
		{
		}
	}
}
