using System;
using Merger.Services.User.Data.Profile.Game.StartingBoard;
using Newtonsoft.Json;

namespace Merger.MergeBoard.Data
{
	[Serializable]
	public class DynamicBoardCellConfiguration : StartingBoardCell
	{
		[JsonProperty("index")]
		public int Index;
	}
}
