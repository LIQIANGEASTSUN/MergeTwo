using System;
using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public class BoardMoveHandler
	{
		public enum BoardMoveType
		{
			None = 0,
			CycleUp = 1,
			CloudDown = 2,
			CycleMineUp = 3
		}

		public enum BoardMoveDirection
		{
			None = 0,
			Up = 1,
			Down = 2
		}

		[NonSerialized]
		public readonly IBoardMoveAdapter _adapter;

		[NonSerialized]
		public readonly IBoardActivityRowConf _confAdapter;

		[NonSerialized]
		public BoardMoveType _type;

		[NonSerialized]
		public int _curDepthIndex;

		[NonSerialized]
		public bool _isReadyToMove;

		[NonSerialized]
		public int _readyFrameCount;

		[NonSerialized]
		public bool _isBoardMoving;

		[NonSerialized]
		public Action _moveAction;

		[NonSerialized]
		public List<Item> collectItemList;

		public bool IsReadyToMove => false;

		public BoardMoveHandler(ActivityLike activity, BoardMoveType type, int depthIndex)
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void OnActivityUpdate(float deltaTime)
		{
		}

		public bool IsBoardMoving()
		{
			return false;
		}

		public void StartMoveBoard()
		{
		}

		public void _ProcessMoveAction()
		{
		}

		public void _TryExecuteMoveBoard()
		{
		}

		public bool _CheckCanMoveByType(Board board, int detailParam, out int realMoveCount)
		{
			realMoveCount = default(int);
			return false;
		}

		public BoardMoveDirection _CheckDirection()
		{
			return default(BoardMoveDirection);
		}

		public void _ExecuteMoveBoard(Board board, int realMoveCount, int detailParam)
		{
		}
	}
}
