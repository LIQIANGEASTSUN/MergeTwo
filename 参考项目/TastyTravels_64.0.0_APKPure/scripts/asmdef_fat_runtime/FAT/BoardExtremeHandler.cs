using System;

namespace FAT
{
	public class BoardExtremeHandler
	{
		public enum BoardExtremeType
		{
			None = 0,
			CycleUp = 1,
			CloudDown = 2,
			Normal = 3
		}

		[NonSerialized]
		public readonly IBoardExtremeAdapter _adapter;

		[NonSerialized]
		public BoardExtremeType _type;

		[NonSerialized]
		public float _extremeCaseTime;

		[NonSerialized]
		public bool _isWaitExtremeCase;

		public BoardExtremeHandler(ActivityLike activity, BoardExtremeType type)
		{
		}

		public void OnBoardItemChange()
		{
		}

		public void OnActivityUpdate(float deltaTime)
		{
		}

		public void CheckBoardExtremeCase()
		{
		}

		public void _CheckBoardExtremeCase()
		{
		}

		public bool _CheckHasExtremeCase()
		{
			return false;
		}

		public void _ExecuteExtremeCase()
		{
		}

		public int _GetRowNumByType(int totalRow, int index)
		{
			return 0;
		}
	}
}
