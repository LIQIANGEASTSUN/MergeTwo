using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.MVVM.Model;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Merger.ItemGenerator.Types.ProducerExcitement;
using Merger.ProducerExcitement.Compatibility;
using Merger.ProducerExcitement.Compatibility.Payloads;
using Merger.ProducerExcitement.Signals;

namespace Merger.ProducerExcitement.Models
{
	public class ProducerExcitementModel : ModelBase, IProducerExcitementModel
	{
		[NonSerialized]
		public readonly ObservableList<ProducerExcitementDataResponse> _excitementStates;

		[NonSerialized]
		public readonly List<int> _claimedExcitementIds;

		[NonSerialized]
		public readonly Dictionary<int, ExcitementVisibility> _excitementIdsGhostModeDictionary;

		[NonSerialized]
		public readonly Dictionary<int, ProducerExcitementAnalyticsDataPayload> _excitementAnalyticsDictionary;

		public ObservableList<ProducerExcitementDataResponse> ExcitementStates => null;

		public IReadOnlyList<int> ClaimedExcitementIds => null;

		public void Update(ProducerExcitementDataResponse stateExcitements)
		{
		}

		public ExcitementVisibility GetVisibilityMode(int excitementClaimId)
		{
			return default(ExcitementVisibility);
		}

		public ProducerExcitementAnalyticsDataPayload GetAnalyticsDataPayload(int excitementClaimId)
		{
			return null;
		}

		public void RegisterAnalyticsData(ProducerExcitementAnalyticsDataPayload payload, int excitementId)
		{
		}

		public void AddClaimedExcitementId(int excitementId)
		{
		}

		public void ResetClaimedExcitements()
		{
		}

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public void OnProducerExcitementReceived(ProducerExcitementReceivedSignal signal)
		{
		}

		public void SetVisibilityMode(int excitementClaimId, ExcitementVisibility visibility)
		{
		}

		public void AddExcitementInternal(ProducerExcitementDataResponse stateExcitement)
		{
		}
	}
}
