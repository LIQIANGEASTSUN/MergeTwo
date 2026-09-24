using UnityEngine;

namespace Merger.RemoteBoardLiveOps.Views
{
	public interface IBoardWidgetContainer
	{
		bool ShouldShowWidget { get; }

		RectTransform RectTransform { get; }
	}
}
