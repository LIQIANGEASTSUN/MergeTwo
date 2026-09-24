using System;
using System.Collections.Generic;
using EL;
using fat.gamekitdata;

namespace FAT
{
	public class MergeEnergyMan : IGameModule, IUserDataHolder, IUserDataInitializer
	{
		[NonSerialized]
		public readonly Dictionary<int, int> claimCount;

		[NonSerialized]
		public readonly EncryptInt vEnergy;

		[NonSerialized]
		public int recover;

		[NonSerialized]
		public long offlineTS;

		[NonSerialized]
		public int flying;

		[NonSerialized]
		public int interval;

		[NonSerialized]
		public bool IsFixEnergy;

		[NonSerialized]
		public long lastActiveTS;

		public bool DebugPauseTick;

		public int Energy => 0;

		public int EnergyAfterFly => 0;

		public int RecoverCD => 0;

		public int RecoverMax { get; set; }

		public void DebugAddEnergy(int amount, ReasonString reason)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public void ClearResetState()
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		public void InitUserData()
		{
		}

		public void ToBackground()
		{
		}

		public void ToForeground()
		{
		}

		public int FullRecoverCD()
		{
			return 0;
		}

		public void TickRecover(int s_)
		{
		}

		public bool TryRecover(ReasonString reason, int count_, int max_)
		{
			return false;
		}

		public void TryRecoverOffline()
		{
		}

		public void TryRecoverBySeconds_Fix(int seconds)
		{
		}

		public void AddFlyEnergy(int amount, ReasonString reason)
		{
		}

		public void FinishFlyEnergy(int amount)
		{
		}

		public bool CanUseEnergy(int amount)
		{
			return false;
		}

		public bool UseEnergy(int amount, ReasonString reason)
		{
			return false;
		}

		public int ClaimCount(int boardId_)
		{
			return 0;
		}

		public void ClaimEnergy(int boardId_)
		{
		}

		public void TryTrackEnergyUnbalance()
		{
		}

		void IGameModule.Reset()
		{
		}

		void IGameModule.LoadConfig()
		{
		}

		void IGameModule.Startup()
		{
		}

		public static int EnergyDbg_AgoSec(long now, long ts)
		{
			return 0;
		}

		public static string EnergyDbg_AgoStr(long now, long ts)
		{
			return null;
		}

		public void Energy_DumpState()
		{
		}

		public void Energy_CallToBackground()
		{
		}

		public void Energy_CallToForeground()
		{
		}

		public void Energy_TickOnce()
		{
		}

		public void Energy_ClearLifecycleState()
		{
		}

		public void Energy_SetOfflineAgoSeconds(int seconds)
		{
		}

		public void Energy_SetLastActiveAgoSeconds(int seconds)
		{
		}

		public void SwitchDebugPauseTick()
		{
		}
	}
}
