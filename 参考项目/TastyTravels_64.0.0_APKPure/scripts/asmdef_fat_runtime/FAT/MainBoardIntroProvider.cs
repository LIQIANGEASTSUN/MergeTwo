using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public class MainBoardIntroProvider : BoardIntroProvider
	{
		public override List<BoardIntroStepBase> CreateSteps(MergeWorld world)
		{
			return null;
		}

		public override void OnIntroFinished()
		{
		}

		public void _003C_003EiFixBaseProxy_OnIntroFinished()
		{
		}
	}
}
