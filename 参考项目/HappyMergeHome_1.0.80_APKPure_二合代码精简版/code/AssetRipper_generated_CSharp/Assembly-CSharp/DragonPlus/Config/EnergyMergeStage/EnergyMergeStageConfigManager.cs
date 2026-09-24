using System;
using System.Collections;
using System.Collections.Generic;

namespace DragonPlus.Config.EnergyMergeStage
{
	public class EnergyMergeStageConfigManager : Manager<EnergyMergeStageConfigManager>
	{
		public bool ConfigFromRemote;

		public List<EnergyMSConfig> EnergyMSConfigList;

		public List<EnergyMSRoundReward> EnergyMSRoundRewardList;

		public List<EnergyMSReward> EnergyMSRewardList;

		public List<EnergyMSRobot> EnergyMSRobotList;

		public List<EnergyMSScore> EnergyMSScoreList;

		public List<EnergyMSOrder> EnergyMSOrderList;

		public List<EnergyMSItem> EnergyMSItemList;

		[NonSerialized]
		public readonly Dictionary<Type, string> typeToEnum;

		public bool CheckTable(Hashtable table)
		{
			return false;
		}

		public List<T> GetConfig<T>()
		{
			return null;
		}

		public void InitConfig(string configJson = null)
		{
		}
	}
}
