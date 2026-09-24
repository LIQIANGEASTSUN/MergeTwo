using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using UnityEngine;

namespace MergeEngine.Signal.Items
{
	public class ImmediateToolsCollectedSignal
	{
		public List<(IMergeItem tool, ResourceMultiple resourceGained)> ToolsWithAnimationData;

		public Vector3 StartPosition { get; }

		public Action OnAllToolsReachedTarget { get; }

		public ImmediateToolsCollectedSignal(List<(IMergeItem tool, ResourceMultiple resourceGained)> toolsWithAnimationData, Vector3 startPosition, Action onAllToolsReachedTarget)
		{
		}
	}
}
