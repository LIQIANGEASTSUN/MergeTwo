using System;
using System.Collections.Generic;
using UnityEngine;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class GirdReward
	{
		[NonSerialized]
		public MergeWorld mWorld;

		[NonSerialized]
		public bool _hasConsume;

		[NonSerialized]
		public int _unlockLv;

		[NonSerialized]
		public Dictionary<Vector2Int, GirdRewardData> _girdRewardDataDict;

		[NonSerialized]
		public bool _isWaitAnim;

		public GirdReward(MergeWorld world)
		{
		}

		public bool CanRefreshGirdReward()
		{
			return false;
		}

		public bool IsWaitAnim()
		{
			return false;
		}

		public void EndWaitAnim()
		{
		}

		public bool TryGetGirdRewardData(Item itemData, out GirdRewardData data)
		{
			data = null;
			return false;
		}

		public bool TryConsumeWhenEnterBoard()
		{
			return false;
		}

		public void OnExecuteAnim(BoardGirdRewardIntroStep introStep)
		{
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void TryDeserialize(fat.gamekitdata.Merge data)
		{
		}

		public void _InitGirdRewardDataByConf(MergeMainTileRwd tileRwdConf)
		{
		}

		public void _InitGirdRewardDataByArchive(GirdRewardInfo info)
		{
		}

		public void _TryConsumeWhenLogin(MergeMainTileRwd tileRwdConf)
		{
		}

		public bool _IsLevelUnlock()
		{
			return false;
		}
	}
}
