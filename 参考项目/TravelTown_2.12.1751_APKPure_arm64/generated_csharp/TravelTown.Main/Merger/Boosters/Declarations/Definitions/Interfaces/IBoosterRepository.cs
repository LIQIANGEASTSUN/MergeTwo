using Merger.Boosters.Declarations.Data.Interfaces;
using Merger.Boosters.Declarations.Payloads;
using Merger.Boosters.Declarations.Response;
using Merger.Boosters.Declarations.Response.Interfaces;
using strange.extensions.promise.api;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterRepository
	{
		IPromise<BoosterConfigResponse> GetBoostersConfig();

		IPromise<BoosterPullResponse> GetActiveBoosters();

		IPromise<BoosterEventsResponse> GetBoosterEvents();

		IPromise<BoosterInteractResponse<TResultData>> InteractBooster<TData, TResultData>(InteractBoosterPayload<TData> payload) where TData : IBoosterInteractData where TResultData : IBoosterInteractResponseData;
	}
}
