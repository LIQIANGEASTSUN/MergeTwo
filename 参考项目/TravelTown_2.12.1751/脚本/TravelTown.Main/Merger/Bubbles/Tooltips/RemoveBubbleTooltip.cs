using System;
using Framework.Core.View.ReactiveComponents;
using Framework.UIFSM.View;
using Merger.UI.Tooltips;
using UnityEngine;

namespace Merger.Bubbles.Tooltips
{
	public class RemoveBubbleTooltip : TooltipView, IViewWithPayload<RemoveBubbleTooltipData>
	{
		[SerializeField]
		public ReactiveButton _removeButton;

		[NonSerialized]
		public RemoveBubbleTooltipData _payload;

		public override void Awake()
		{
		}

		public void OnRemoveClick()
		{
		}

		public void SetPayload(RemoveBubbleTooltipData payload)
		{
		}
	}
}
