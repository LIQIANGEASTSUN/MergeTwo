using System.Collections.Generic;
using GameLogic.Merge;
using Merge;
using Metaplay.Core;

namespace GameLogic.Player.Board.Effects
{
	public class SpreadMergeBoardActs : IBoardVisualEffect, IVisualEffect
	{
		public MergeBoardId BoardId { get; set; }

		public IList<MergeBoardAct> Acts { get; set; }

		public MetaDuration DurationToSpreadOver { get; set; }
	}
}
