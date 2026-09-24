using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class PickBoxSelectedEntity
	{
		public List<RewardEntity> RewardEntities;

		public PickBoxSelectedEntity()
		{
		}

		public PickBoxSelectedEntity(List<RewardEntity> rewardEntities)
		{
		}
	}
}
