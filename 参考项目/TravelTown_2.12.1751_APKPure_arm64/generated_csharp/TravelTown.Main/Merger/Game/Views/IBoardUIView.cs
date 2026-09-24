using System;
using Framework.Core.View;
using MergeEngine.Data;

namespace Merger.Game.Views
{
	public interface IBoardUIView : IViewComponent
	{
		event Action<BoardItemPosition> ItemDroppedOnInventory;

		void StartInventoryButtonHinting();

		void StopInventoryButtonHinting();

		void DropItemOnInventory(BoardItemPosition boardItemPosition);

		void EnableUI();

		void DisableUI();
	}
}
