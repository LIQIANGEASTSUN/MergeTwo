using System.Collections.Generic;
using System.Runtime.InteropServices;
using Paxie;

namespace MergePuzzle
{
	public class EntityUpdateEvent
	{
		public struct CurrencyUpdate : IEvent
		{
			public int SetID;

			public int ChangeAmount;

			public string Trigger;
		}

		public struct CalculateEnergyChange : IEvent
		{
			public int ChangeAmount;

			public bool MakeImpactAnim;

			public bool Meta;

			public bool IsEventEnergy;

			public int EventIndex;
		}

		public struct CalculateGemChange : IEvent
		{
			public int ChangeAmount;

			public bool MakeImpactAnim;

			public bool Meta;
		}

		public struct CalculateCoinChange : IEvent
		{
			public int ChangeAmount;

			public bool MakeImpactAnim;

			public bool Meta;
		}

		public struct CalculateXPChange : IEvent
		{
			public int ChangeAmount;

			public bool MakeImpactAnim;

			public bool Meta;

			public bool IsGoingLevelUp;
		}

		public struct EnergyUpdateUI : IEvent
		{
			public int CurrentAmount;

			public int ChangeAmount;

			public bool MakeImpactAnim;

			public bool Meta;

			public bool IsEventEnergy;

			public int EventIndex;
		}

		public struct EnergyConsume : IEvent
		{
			public int Amount;
		}

		public struct GemUpdateUI : IEvent
		{
			public int CurrentAmount;

			public bool MakeImpactAnim;

			public bool Meta;
		}

		public struct CoinUpdateUI : IEvent
		{
			public int CurrentAmount;

			public bool MakeImpactAnim;

			public bool Meta;
		}

		public struct XPUpdateUI : IEvent
		{
			public int CurrentAmount;

			public bool MakeImpactAnim;

			public bool Meta;

			public bool IsGoingLevelUp;
		}

		public struct LevelXPUpdate : IEvent
		{
			public UserEntity UserEntity;

			public EventEntity EventEntity;

			public LevelItem Level;

			public RegularReward TaskItemReward;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct RewardAreaUIUpdate : IEvent
		{
		}

		public struct RewardAnimationStatusChange : IEvent
		{
			public bool IsStart;

			public bool IsLevelUp;

			public bool XPUpdate;

			public bool IsUseSecondFromLast;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct SeasonPassRewardUpdate : IEvent
		{
		}

		public struct LevelUpdateEntity : IEvent
		{
			public UserEntity UserEntity;

			public EventEntity EventEntity;

			public LevelItem NewLevelData;

			public int ExtraXp;

			public List<RegularReward> RegularRewards;

			public LevelUpReward LevelUpReward;

			public int NewLevel;

			public RegularReward TaskItemReward;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct InventoryUpdated : IEvent
		{
		}

		public struct BoardItemStatusChange : IEvent
		{
			public bool UpdateBoardTask;
		}

		public struct SaveBoard : IEvent
		{
			public bool Time;

			public int EventIndex;
		}

		public struct SaveDataToCloud : IEvent
		{
			public BoardEntity BoardEntity;
		}

		[StructLayout((LayoutKind)0, Size = 1)]
		public struct OnSelectedAvatarImageChanged : IEvent
		{
		}
	}
}
