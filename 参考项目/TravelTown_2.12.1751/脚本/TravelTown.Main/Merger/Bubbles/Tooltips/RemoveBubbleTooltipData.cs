using System;
using Merger.Game.Views.Tooltips;
using UnityEngine;

namespace Merger.Bubbles.Tooltips
{
	public class RemoveBubbleTooltipData : TooltipData
	{
		public Action ConfirmRemove;

		public RemoveBubbleTooltipData(MonoBehaviour parent)
			: base(null)
		{
		}
	}
}
