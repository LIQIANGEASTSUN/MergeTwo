using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using UnityEngine;

namespace MergeEngine.Signal.Board
{
	public class ConsumeMultipleBoardItemsSignal
	{
		public Dictionary<IMergeItem, List<Vector2>> PositionsMap { get; }

		public BoardItemPosition? PreferedPosition { get; }

		public IMergeItem PreferedMergeItem { get; }

		public Action CompleteCallback { get; }

		public Action FailCallback { get; }

		public IEnumerable<ItemMultiple> ItemsToConsume { get; }

		public bool SkipAnimations { get; }

		public List<IdComponent> SelectedItemsToConsume { get; }

		public OperationContext Context { get; }

		public float DurationMultiplier { get; }

		public ConsumeMultipleBoardItemsSignal(IEnumerable<ItemMultiple> itemsToConsume, Dictionary<IMergeItem, List<Vector2>> positionsMap, BoardItemPosition? preferedPosition, IMergeItem preferedMergeItem = null, List<IdComponent> selectedItemsToConsume = null, Action completeCallback = null, Action failCallback = null, OperationContext context = null, float durationMultiplier = 1f)
		{
		}

		public ConsumeMultipleBoardItemsSignal(List<ItemMultiple> itemsToConsume, List<IdComponent> selectedItemsToConsume, Action completeCallback = null, Action failCallback = null, OperationContext context = null)
		{
		}
	}
}
