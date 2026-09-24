using System.Collections.Generic;
using Merger.Boosters.Declarations.Data.Interfaces;
using Merger.Boosters.Declarations.Response;
using Merger.Boosters.Declarations.Response.Interfaces;
using strange.extensions.promise.api;

namespace Merger.Boosters.Declarations.Definitions.Interfaces.Services
{
	public interface IBoosterRemoteService
	{
		IPromise<List<RemoteBoosterItem>> GetBoostersConfiguration();

		IPromise<List<RemoteBoosterData>> GetActiveBoosters();

		IPromise<BoosterEventsResponse> GetBoosterEvents();

		IPromise<RemoteBoosterData> ActivateBooster<TData>(string uuId, TData activationData) where TData : IBoosterActivationData;

		IPromise<BoosterInteractResponse<TResultData>> InteractBooster<TData, TResultData>(string uuid, TData interactionData) where TData : IBoosterInteractData where TResultData : IBoosterInteractResponseData;
	}
}
