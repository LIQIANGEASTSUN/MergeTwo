using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Merger.ItemGenerator.Types.ProducerExcitement;
using Merger.ProducerExcitement.Compatibility.Payloads;

namespace Merger.ProducerExcitement.Compatibility.Tests
{
	public class ProducerExcitementModelTests : IProducerExcitementModel
	{
		[NonSerialized]
		public readonly ObservableList<ProducerExcitementDataResponse> _excitementStates;

		[NonSerialized]
		public readonly List<int> _claimedExcitementIds;

		public ObservableList<ProducerExcitementDataResponse> ExcitementStates => null;

		public IReadOnlyList<int> ClaimedExcitementIds => null;

		public void RegisterAnalyticsData(ProducerExcitementAnalyticsDataPayload payload, int excitementId)
		{
		}

		public void AddClaimedExcitementId(int excitementId)
		{
		}

		public void ResetClaimedExcitements()
		{
		}

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
	}
}
