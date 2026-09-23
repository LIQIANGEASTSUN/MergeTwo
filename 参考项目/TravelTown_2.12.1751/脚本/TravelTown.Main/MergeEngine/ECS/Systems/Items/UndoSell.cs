using System;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Systems.Items
{
	public class UndoSell : UndoOperationBase<UndoSellData>
	{
		public UndoSell(UndoSellData data, Action<UndoSellData> performUndoCallback)
			: base((UndoSellData)default(_00210), (Action<UndoSellData>)null)
		{
		}

		public override bool ShouldClearUndoOnSelection(PositionComponent selectedItem)
		{
			return false;
		}

		public override string GetLocalisationString()
		{
			return null;
		}

		public override string[] GetLocalisationParameters()
		{
			return null;
		}

		public bool HasSellCost()
		{
			return false;
		}
	}
}
