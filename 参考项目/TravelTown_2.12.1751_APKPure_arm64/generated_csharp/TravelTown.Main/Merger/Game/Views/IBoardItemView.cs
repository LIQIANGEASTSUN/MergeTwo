using System;
using System.Collections.Generic;
using DG.Tweening;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using Merger.Game.Views.BoardItem;
using Merger.Game.Views.BoardItem.ViewBehaviours;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Merger.Game.Views
{
	public interface IBoardItemView
	{
		RectTransform RectTransform { get; }

		BoardItemPosition Position { get; set; }

		IVisualComponent VisualComponent { get; }

		bool IsTweened { get; set; }

		bool IsLockedByFlyingAnimation { get; set; }

		GameObject gameObject { get; }

		Tween SlideItemTween { get; set; }

		int SelectorSiblingIndex { get; }

		event Action<IBoardItemView> Tapped;

		event Action<IBoardItemView, PointerEventData> Dragging;

		event Action<IBoardItemView, PointerEventData> DragEnded;

		event Action<IBoardItemView> DragCancelled;

		void Initialise(IVisualComponent visualComponent, IReadOnlyDictionary<string, BehaviourPrefabData> behaviourConfigs, string poolIdStringFormat = null);

		TViewBehaviour GetBehaviour<TViewBehaviour>() where TViewBehaviour : class, IBoardItemViewBehaviour;

		TViewBehaviour GetOrAttachBehaviour<TViewBehaviour>() where TViewBehaviour : class, IBoardItemViewBehaviour;

		void CancelDrag();
	}
}
