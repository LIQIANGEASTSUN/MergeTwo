using System;
using System.Collections.Generic;
using System.Threading;
using Code.GameLogic.GameEvents;
using Cysharp.Threading.Tasks;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Collectable;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Merge;
using Metacore.MergeMansion.UI.Board;
using Metacore.MergeMansion.Utility;
using Metaplay.Core;
using UI;
using UnityEngine;

namespace Merge
{
	public interface IBoardController : ISharedBoardController
	{
		Coordinate SelectedCoordinate { get; }

		MenuStatus VisualStatus { get; }

		IReadOnlyDictionary<BoardStepResult, MetaTime> LastBoardStepResultTimes { get; }

		CanvasScaleFactorStack CanvasScaleFactorStack { get; }

		RectTransform ItemParent { get; }

		Option<BoardCustomInit> BoardCustomInitOption { get; }

		GameObject CanvasGameObject { get; }

		event Action<MenuStatus> OnTransition;

		event Action<BoardStepResult> OnBoardStepResult;

		event Action<MergeResult> OnMergeResult;

		Vector2[,] GetUISlotPositions();

		Vector2 GetUISlotPosition(Coordinate coordinate);

		bool BoardIsVisible(MergeBoardId boardId = null);

		int GetSelectedItemType();

		void ReconstructBoard();

		void Show(MetaDuration loadDuration, Action onComplete, Action onReadyToPlay, BoardTransitionFlags transitionFlags);

		void Hide(bool instantHide, Action onComplete, bool ignoreScriptedEvents = false);

		void StopPlay(bool transitionToMansionView = false, bool ignoreScriptedEvents = false);

		UniTask<Option<GameObject>> LoadAndInstantiateBoardBackground(IBoardEventModel boardEventModel, MergeBoardId mergeBoardId, CancellationToken ct);

		void DestroyBackground(MergeBoardId mergeBoardId);

		void ToggleBackground(MergeBoard board);

		void SelectMergeBoard(PlayerModel playerModel, MergeBoard mb, bool legacyEventBoard, bool liveOpsEventBoard, Func<MergeBoard, bool> eventEndCheck, bool eventTimeUpdate, bool forceVisualRebuild = false);

		(bool, Coordinate) TryToMoveItemFromPocketToBoard(Vector2 buttonPos);

		void OnBoardTransition();

		IBoardEventModel GetCurrentBoardEventModel();

		void ShowCollectibleBoardEventInfoPanel();

		void RefreshCollectibleBoardEventInfoPanel();

		bool IsInTransition();

		void ShowAlert(string text, string hapticConfigId = "");

		void SelectItemAt(Coordinate c, bool showSinkItemTooltip = false, bool fromClick = false);

		void ProcessUsePortal(PlayerModel playerModel, IItemDefinition portalItem);

		void AnimateProgressionEventProgress(ProgressionEventModel progressionEvent, IProgressCollectAction collectAction, IItemDefinition item, Vector3 from, Option<Action> onCompletedOption);

		bool IsDraggingItem();

		Option<BoardItemHandler> GetBoardItemHandlerAtCoordinate(Coordinate coordinate);

		void CalculateDragLimits();

		void ClearExtraSpawns();
	}
}
