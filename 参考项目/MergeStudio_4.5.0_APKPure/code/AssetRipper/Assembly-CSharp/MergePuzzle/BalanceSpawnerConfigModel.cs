using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class BalanceSpawnerConfigModel
	{
		public bool IsDefault;

		public bool PreventRecharge;

		public List<BalanceSpawnerConfigModelItem> SpawnerConfigs;

		public List<BalancePerishableConfigModelItem> PerishableConfigs;

		public List<BalanceChargeModelItem> ChargeConfigs;

		public BalanceSpawnerConfigModel GetValue()
		{
			return null;
		}

		public static BalanceSpawnerConfigModel GetBalanceModel()
		{
			return null;
		}
	}
}
