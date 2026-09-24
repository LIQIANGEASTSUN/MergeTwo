using System.Collections.Generic;
using Merger.Boosters.Declarations.Data.Interfaces;
using Merger.Boosters.Declarations.Response;
using Merger.Boosters.Declarations.Response.Interfaces;
using Merger.Services.Analytics.Boosters.OrderSurpriseBox;
using strange.extensions.promise.api;

namespace Merger.Boosters.Declarations.Definitions.Interfaces.Services
{
	public interface IBoosterService
	{
		void ProcessBoosters();

		void ProcessBoosters(List<RemoteBoosterData> boostersData);

		void UpdateRemoteBoosterFromResponse(RemoteBoosterData boosterData);

		IPromise<BoosterInteractResponse<TResultData>> InteractWithBooster<TData, TResultData>(string uuId, TData interactionPayload) where TData : IBoosterInteractData where TResultData : IBoosterInteractResponseData;

		BoosterAnalyticsData GetActiveBoosterAnalyticsData(string boosterId);

		IPromise<List<RemoteBoosterData>> GetActiveBoosters(bool mustSucceed = false);
	}
}
