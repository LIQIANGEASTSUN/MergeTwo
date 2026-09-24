using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;
using Merger.Boosters.Declarations.Data;
using Merger.Boosters.Declarations.Definitions;
using Merger.Boosters.Declarations.Definitions.Abstractions;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Boosters.Declarations.Enums;
using Merger.Boosters.Declarations.Signals.Workflow;

namespace Merger.Boosters.Declarations.Models
{
	public interface IBoosterModel
	{
		ReadOnlyCollection<IBoosterItem> Boosters { get; }

		List<RemoteBoosterData> RemoteActiveBoosters { get; set; }

		Dictionary<string, BoosterType> PendingQueueActivationBoosters { get; }

		HashSet<string> DeactivatedBoosters { get; }

		HashSet<string> LockedBoosters { get; }

		List<RemoteBoosterData> RemoteActiveBoostersCached { get; set; }

		bool ShouldForceProcessAllBoosters { get; set; }

		List<BoosterSendToActivationData> BoosterSendToActivationDatas { get; }

		bool IsSpecialChainCollectSequence { get; set; }

		List<BoosterActivatedSignal> PendingActivationSignal { get; }

		bool HasBlockToProcess { get; }

		IBoosterItem GetBooster(string uniqueId);

		bool HasBoosterById(string itemId);

		IBoosterItem GetBoosterByMergeItemId(string itemId);

		RemoteBoosterData GetRemoteActiveBoosterByUuid(string uuid);

		bool IsBooster(ComponentBase component);

		T GetBoosterProgress<T>(string uniqueId) where T : BoosterProgressBase;

		bool HasAnyBoosterPendingForActivation(BoosterType activationBoosterType);

		void AddBoosterToPendingActivationList(string uuid, BoosterType boosterType);
	}
}
