namespace FAT.Merge
{
	public class BubbleMergeBonusHandler : IMergeBonusHandler
	{
		int IMergeBonusHandler.priority => 0;

		void IMergeBonusHandler.Process(MergeBonusContext context)
		{
		}

		void IMergeBonusHandler.OnRegister()
		{
		}

		void IMergeBonusHandler.OnUnRegister()
		{
		}

		public Item _CheckSpawnBubble(MergeGrid[] mGrids, Item srcItem, bool isTutorial)
		{
			return null;
		}
	}
}
