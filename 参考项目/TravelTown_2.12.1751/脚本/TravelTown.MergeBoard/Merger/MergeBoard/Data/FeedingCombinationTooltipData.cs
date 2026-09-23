using System;
using System.Collections.Generic;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Tooltips;
using UnityEngine;

namespace Merger.MergeBoard.Data
{
	public class FeedingCombinationTooltipData : TooltipData
	{
		public List<string> ConsumedItemIds;

		public List<Combination> Combinations;

		public List<Combination> CombinationInProgress;

		public IMergeItem CombiningItem;

		public Action<string> OnExtractCallback;

		public Action OnCombinationButtonClickCallback;

		public FeedingCombinationTooltipData(MonoBehaviour parent)
			: base(null)
		{
		}

		public override void DecorateClonedTooltipData(TooltipData tooltipData)
		{
		}
	}
}
