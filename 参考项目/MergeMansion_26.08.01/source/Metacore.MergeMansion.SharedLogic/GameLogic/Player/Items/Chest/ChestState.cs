using System;
using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Chest
{
	[MetaSerializable]
	public sealed class ChestState : IChestState
	{
		public static readonly F64 oneMinuteGemCost;

		public static readonly F64 timeDiscountMin;

		public static readonly F64 timeDiscountMax;

		public static readonly F64 discountCurve;

		public static readonly F64 upperRangeOfTimeInSeconds;

		[MetaMember(1, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime openStartTime;

		[MetaMember(2, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime estimatedEndTime;

		[MetaMember(3, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaDuration relativeTimeSpendOnOpen;

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemListRef")]
		[NonSerialized]
		public List<ItemDef> remainingLoot;

		[MetaMember(5, MetaMemberFlags.None)]
		[NonSerialized]
		public bool hasBeenFilled;

		[MetaMember(6, MetaMemberFlags.None)]
		[NonSerialized]
		public MetaTime lastAbsoluteUpdateTime;

		[MetaMember(7, MetaMemberFlags.None)]
		public ulong ActivationCount { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public ChestContext ChestContext { get; set; }

		[IgnoreDataMember]
		public MetacoreTime OpenStartTime => default(MetacoreTime);

		[IgnoreDataMember]
		public MetacoreTime EstimatedEndTime => default(MetacoreTime);

		public void IncreaseActivationCount()
		{
		}

		public bool HasOpeningStarted()
		{
			return false;
		}

		public bool IsReadyForOpen(MetacoreTime timestamp)
		{
			return false;
		}

		public void StartChestOpenCountdown(MetacoreTime startTime, MetacoreDuration duration, F32 boostFactor)
		{
		}

		public void CalculateEstimatedOpenEndTime(MetacoreDuration duration, F32 boostFactor, MetacoreTime currentTimestamp)
		{
		}

		public void IncreaseRelativeTimeSpendOnOpen(MetacoreDuration add)
		{
		}

		public void AddAbsoluteTimeSpendOnOpen(MetacoreTime timestamp)
		{
		}

		public bool IsReadyForLooting()
		{
			return false;
		}

		public void ForceCompleteCountdown()
		{
		}

		public bool IsForceCompleted()
		{
			return false;
		}

		public void OpenAndFillRewards(IEnumerable<IItemDefinition> rewards, IPlayer player)
		{
		}

		public void InitChestContext(IPlayer player)
		{
		}

		public int GetLootCount()
		{
			return 0;
		}

		public IItemDefinition GetNextLoot(IPlayer player)
		{
			return null;
		}

		public IEnumerable<IItemDefinition> RemoveFromChest(Predicate<IItemDefinition> itemMatcher, IMergeMansionGameConfig config)
		{
			return null;
		}

		public (Currencies, int) CalculateFastOpenCost(MetacoreTime currentTime, MetacoreDuration maxDuration)
		{
			return default((Currencies, int));
		}

		public void SkipGameTime(MetacoreDuration numMillisecondToSkip)
		{
		}

		public static int GetDiscountedGemCostForTime(MetacoreDuration duration)
		{
			return 0;
		}

		public IEnumerable<IItemDefinition> GetRemainingLoot(IMergeMansionGameConfig config)
		{
			return null;
		}

		public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
