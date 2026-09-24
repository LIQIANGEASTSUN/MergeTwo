using System;
using System.Collections.Generic;
using fat.rawdata;

namespace FAT
{
	public class FeatureUnlockMan : IGameModule
	{
		[NonSerialized]
		public Dictionary<FeatureEntry, FeatureUnlock> mFeatureUnlockDict;

		[NonSerialized]
		public Dictionary<TempSwitch, TempSwitchInfo> mTempSwitchDict;

		public void OnConfigLoaded()
		{
		}

		public FeatureUnlock GetFeatureConfig(FeatureEntry entry)
		{
			return null;
		}

		public bool IsFeatureEntryShow(FeatureEntry entry)
		{
			return false;
		}

		public bool IsFeatureEntryUnlocked(FeatureEntry entry)
		{
			return false;
		}

		public TempSwitchInfo GetTempSwitchConfig(TempSwitch key)
		{
			return null;
		}

		public bool IsTempSwitchOn(TempSwitch key)
		{
			return false;
		}

		public bool _IsFeatureEntryUnlockedInner(FeatureEntry entry)
		{
			return false;
		}

		public bool IsEntryMatchRequire(FeatureEntry entry)
		{
			return false;
		}

		public bool IsFeatureEntrySuspended(FeatureEntry entry)
		{
			return false;
		}

		public int GetUnlockLevel(FeatureEntry entry)
		{
			return 0;
		}

		public void OnMergeLevelChange()
		{
		}

		public void OnMainOrderFinished()
		{
		}

		public void OnGuideFinished()
		{
		}

		public void _FeatureEntryStatusRefresh()
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
	}
}
