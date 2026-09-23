using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.Game.Model;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class CollectItemSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		public void Tick(TickContext context)
		{
		}
	}
}
