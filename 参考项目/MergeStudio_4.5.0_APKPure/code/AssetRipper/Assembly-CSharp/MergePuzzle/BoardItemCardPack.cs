using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemCardPack", menuName = "Scriptable/BoardItem/BoardItemCardPack", order = 0)]
	public class BoardItemCardPack : BoardItemNonSpawnable
	{
		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public override bool IsCardCollectionItem()
		{
			return false;
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
	}
}
