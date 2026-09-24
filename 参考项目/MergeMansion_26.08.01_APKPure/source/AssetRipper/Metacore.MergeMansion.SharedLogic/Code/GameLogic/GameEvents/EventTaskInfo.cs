using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class EventTaskInfo : IGameConfigData<EventTaskId>, IGameConfigData, IHasGameConfigKey<EventTaskId>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EventTaskId EventTaskId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public List<PlayerReward> Rewards { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<PlayerItemRequirement> Requirements { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<MetaRef<EventTaskInfo>> UnlockTaskRefs { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string TaskTitleLocId { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool IsDynamicTask { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public string DifficultyCurve_Item1 { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public string DefaultDifficultyCurve_Item1 { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public F32 RangeMin_Item1 { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public F32 RangeMax_Item1 { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public F32 LeftoversWeightMultiplier_Item1 { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public string DifficultyCurve_Item2 { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public string DefaultDifficultyCurve_Item2 { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public F32 RangeMin_Item2 { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public F32 RangeMax_Item2 { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public F32 LeftoversWeightMultiplier_Item2 { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public List<IDirectorAction> CompleteActions { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public int? EventLevelMin { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public int? EventLevelMax { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public bool ForceHideOnEventLevelMax { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		[IgnoreDataMember]
		public IEnumerable<EventTaskInfo> UnlockTasks => null;

		public EventTaskId ConfigKey => null;

		public void ConvertRequirements(out IEnumerable<int>[] itemTypes, out int[] itemCounts)
		{
			itemTypes = null;
			itemCounts = null;
		}

		public IEnumerable<(IEnumerable<IItemDefinition>, int)> RequiredItems(IPlayer player)
		{
			return null;
		}

		public EventTaskInfo()
		{
		}

		public EventTaskInfo(EventTaskId eventTaskId, string displayName, string description, List<PlayerReward> rewards, List<PlayerItemRequirement> requirements, List<MetaRef<EventTaskInfo>> unlocksTasks, string taskTitleLocId, bool isDynamicTask, string difficultyCurveItem1, string defaultDifficultyCurveItem1, F32 rangeMinItem1, F32 rangeMaxItem1, F32 leftoversWeightMultiplier_Item1, string difficultyCurveItem2, string defaultDifficultyCurveItem2, F32 rangeMinItem2, F32 rangeMaxItem2, F32 leftoversWeightMultiplier_Item2, int experimentPriority, List<IDirectorAction> completeActions = null, int? eventLevelMin = null, int? eventLevelMax = null, bool forceHideOnEventLevelMax = false)
		{
		}

		public override string ToString()
		{
			return null;
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void OnComplete(IPlayer player, bool wasCompletedBefore, bool skipCompleteActions = false)
		{
		}

		public bool CanMakeTaskAvailable(int eventLevel, bool completedAtLeastOnce)
		{
			return false;
		}

		public bool CanShowAsAvailable(int eventLevel, bool completedAtLeastOnce)
		{
			return false;
		}
	}
}
