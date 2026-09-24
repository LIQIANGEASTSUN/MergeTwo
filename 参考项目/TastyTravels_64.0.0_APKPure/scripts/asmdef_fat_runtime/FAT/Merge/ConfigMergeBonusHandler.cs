namespace FAT.Merge
{
	public class ConfigMergeBonusHandler : IMergeBonusHandler
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
