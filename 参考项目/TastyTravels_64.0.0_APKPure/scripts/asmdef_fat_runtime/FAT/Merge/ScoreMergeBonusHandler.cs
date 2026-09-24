namespace FAT.Merge
{
	public class ScoreMergeBonusHandler : IMergeBonusHandler
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
	}
}
