using System.Collections.Generic;

namespace Code.Bot.Model
{
	public class MainBoardData : ISpecificData
	{
		public List<HotspotId> Hotspots;

		public string GetTaskName(int index)
		{
			return null;
		}

		public void SortByPriority(List<string> tasksPriority)
		{
		}
	}
}
