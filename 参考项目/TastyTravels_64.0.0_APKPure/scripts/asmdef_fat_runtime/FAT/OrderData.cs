using System;
using System.Collections.Generic;
using Config;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class OrderData : IOrderData
	{
		public List<ItemCountInfo> _innerRequires { get; set; }

		public List<RewardConfig> _innerRewards { get; set; }

		public OrderState State { get; set; }

		public int Id { get; set; }

		public int OrderType { get; set; }

		public int ProviderType { get; set; }

		public int RoleId { get; set; }

		public int UnlockLevel { get; set; }

		public IReadOnlyList<ItemCountInfo> Requires => null;

		public IReadOnlyList<RewardConfig> Rewards => null;

		public bool Displayed
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public int DffyStrategy
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public OrderRandomer ConfRandomer { get; set; }

		public int FallbackItemId { get; set; }

		public (int min, int max) RewardDffyRange { get; set; }

		public int MagicHourTimeLifeMilli { get; set; }

		public int MagicHourTimeDurationMilli { get; set; }

		public int BonusID { get; set; }

		public int BonusEndTime { get; set; }

		public int BonusPhase { get; set; }

		public int BonusEventID { get; set; }

		public bool needBonusAnim { get; set; }

		public bool HasScrollRequest { get; set; }

		public bool IsNewOrder { get; set; }

		public bool ShouldNotChange { get; set; }

		public Func<IOrderData, bool> RemoteOrderResolver { get; set; }

		public IList<int> RequireIds => null;

		public IList<int> RequireNums => null;

		public IList<int> RewardIds => null;

		public IList<int> RewardNums => null;

		public OrderRecord Record { get; set; }

		public int GetValue(OrderParamType paramKey)
		{
			return 0;
		}

		public void SyncFromRecord()
		{
		}

		public void AddRequire(int id, int targetCount)
		{
		}

		public void MergeRequire(int id, int targetCount)
		{
		}

		public void ClearRequires()
		{
		}

		public void SortRequires()
		{
		}

		public void InsertReward(int index, RewardConfig reward)
		{
		}

		public void AddReward(int id, int count)
		{
		}

		public void RemoveRewardByIdx(int idx)
		{
		}

		public void ClearRewards()
		{
		}

		public AnyState GetState(int id)
		{
			return null;
		}

		public void AddTag(OrderTag flag)
		{
		}

		public void RemoveTag(OrderTag flag)
		{
		}
	}
}
