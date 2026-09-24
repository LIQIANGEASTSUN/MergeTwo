using System;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using MergeEngine.Model.Configuration;
using Merger.MergeBoard.Factories;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.Systems
{
	public class UndoSellItemSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		[Inject]
		[NonSerialized]
		public IEntityFactory _entityFactory;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public void Tick(TickContext context)
		{
		}
	}
}
