using GameLogic.Player;
using GameLogic.Player.Board;
using Merge;
using UnityEngine;

namespace Metacore.MergeMansion.UI.Board
{
	public abstract class BoardCustomInit : MonoBehaviour
	{
		public abstract void Init(IPlayer player, IBoard board, IBoardController boardController);

		public BoardCustomInit()
		{
		}
	}
}
