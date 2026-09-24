using System;
using MergePuzzle;

namespace Paxie.MergeStudio.Features.MiniBoard
{
	[Serializable]
	public class MiniBoardRewardEntity
	{
		public int SetID;

		public int Level;

		public GameMainReward GameMainReward;

		public MiniBoardItemEntity ItemEntity;

		public MiniBoardRewardEntity()
		{
		}

		public MiniBoardRewardEntity(int setID, int level)
		{
		}

		public MiniBoardRewardEntity(int setID, int level, GameMainReward gameMainReward)
		{
		}

		public MiniBoardRewardEntity(int setID, int level, MiniBoardItemEntity itemEntity)
		{
		}
	}
}
