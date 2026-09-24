using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Merger.ItemGenerator.Types.ProducerExcitement;
using Merger.ProducerExcitement.Compatibility.Payloads;

namespace Merger.ProducerExcitement.Compatibility
{
	public interface IProducerExcitementModel
	{
		ObservableList<ProducerExcitementDataResponse> ExcitementStates { get; }

		IReadOnlyList<int> ClaimedExcitementIds { get; }

		void RegisterAnalyticsData(ProducerExcitementAnalyticsDataPayload payload, int excitementId);

		void AddClaimedExcitementId(int excitementId);

		void ResetClaimedExcitements();

		void Update(ProducerExcitementDataResponse stateExcitements);

		ExcitementVisibility GetVisibilityMode(int excitementClaimId);

		ProducerExcitementAnalyticsDataPayload GetAnalyticsDataPayload(int excitementClaimId);
	}
}
