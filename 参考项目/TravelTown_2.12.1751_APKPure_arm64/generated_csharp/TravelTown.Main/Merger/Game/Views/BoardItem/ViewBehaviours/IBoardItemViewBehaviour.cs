using MergeEngine.ECS.Components.Items;
using UnityEngine;

namespace Merger.Game.Views.BoardItem.ViewBehaviours
{
	public interface IBoardItemViewBehaviour
	{
		GameObject gameObject { get; }

		void Initialise(IVisualComponent visualComponent, BoardItemView2 boardItemView);

		void BehaviourAdded();

		void Dispose();

		bool TryConsumeTap();
	}
}
