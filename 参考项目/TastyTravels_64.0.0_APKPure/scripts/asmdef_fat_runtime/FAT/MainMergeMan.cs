using System;
using System.Collections.Generic;
using FAT.Merge;
using fat.gamekitdata;

namespace FAT
{
	public class MainMergeMan : IGameModule, IUserDataHolder
	{
		[NonSerialized]
		public MergeWorld mWorld;

		[NonSerialized]
		public MergeWorldTracer mWorldTracer;

		public float mainBoardScale;

		public MergeWorld world => null;

		public MergeWorldTracer worldTracer => null;

		public void _AllocWorld()
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		public bool TryFindAndShowItem(int itemId, bool openBagWhenFound = true)
		{
			return false;
		}

		public bool IsChainExistUnLock(int chainId)
		{
			return false;
		}

		public void CheckMissingItem()
		{
		}

		public bool _ProcessSingleItem(int itemId, bool openBagWhenFound)
		{
			return false;
		}

		public bool _ProcessItemHashSet(HashSet<int> itemHashSet, bool openBagWhenFound)
		{
			return false;
		}

		public void OnMergeLevelChange()
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
