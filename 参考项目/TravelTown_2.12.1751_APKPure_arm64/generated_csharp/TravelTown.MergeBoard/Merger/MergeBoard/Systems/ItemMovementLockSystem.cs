using System;
using System.Collections.Generic;
using ContextualizedECS.Context;
using ContextualizedECS.Systems;
using Merger.MergeBoard.Logic.CombineValidators;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public class ItemMovementLockSystem : ISystem
	{
		[Inject]
		[NonSerialized]
		public List<IItemCombinerValidator> _combinationValidators;

		public void Tick(TickContext context)
		{
		}
	}
}
