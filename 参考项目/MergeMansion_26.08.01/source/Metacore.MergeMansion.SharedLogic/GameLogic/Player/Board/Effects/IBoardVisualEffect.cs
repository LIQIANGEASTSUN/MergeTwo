using Merge;

namespace GameLogic.Player.Board.Effects
{
	public interface IBoardVisualEffect : IVisualEffect
	{
		MergeBoardId BoardId { get; }
	}
}
