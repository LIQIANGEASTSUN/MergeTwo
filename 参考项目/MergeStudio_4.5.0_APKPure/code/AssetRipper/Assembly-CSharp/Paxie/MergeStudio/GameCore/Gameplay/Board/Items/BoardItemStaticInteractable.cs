using MergePuzzle;
using UnityEngine;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board.Items
{
	[CreateAssetMenu(fileName = "BoardItemStaticInteractable", menuName = "Scriptable/BoardItem/StaticInteractable", order = 3)]
	public class BoardItemStaticInteractable : BoardItemNonSpawnable
	{
		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public override bool IsMergeable(IItemRuntimeData itself, IItemRuntimeData other)
		{
			return false;
		}

		public override bool IsMergeable(IItemRuntimeData itself)
		{
			return false;
		}

		public override bool IsMergeable(IItemEntity itemEntity)
		{
			return false;
		}

		public override bool CanThrownIntoBoard()
		{
			return false;
		}

		public override bool IsDraggable()
		{
			return false;
		}

		public override bool IsClickable()
		{
			return false;
		}

		public override bool OpenBadgeAtMaxLevel()
		{
			return false;
		}
	}
}
