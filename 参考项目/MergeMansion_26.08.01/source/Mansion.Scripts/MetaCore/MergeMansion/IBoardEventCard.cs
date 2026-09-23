using Code.GameLogic.Config;
using UnityEngine;

namespace Metacore.MergeMansion
{
	public interface IBoardEventCard
	{
		bool IsVisibleOnTheSideBoards { get; }

		bool IsActive { get; }

		RectTransform RectTransform { get; }

		CanvasGroup CanvasGroup { get; }

		BoardEventCardState CurrentState { get; }

		int StaticPriority { get; }

		IPrioritizedEvent EventInfo { get; }

		bool UpdateAfterEveryBoardAct { get; }

		bool IsCardVisible { get; }

		bool UpdateState();

		void Dispose();

		void OnTapBase();
	}
}
