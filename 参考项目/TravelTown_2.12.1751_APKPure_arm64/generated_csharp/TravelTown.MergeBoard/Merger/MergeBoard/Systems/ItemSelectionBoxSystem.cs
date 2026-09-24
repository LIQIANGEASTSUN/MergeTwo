using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Factories;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ItemSelectionBoxSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		public void Tick(TickContext context)
		{
		}
	}
}
