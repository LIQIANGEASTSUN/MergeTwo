using strange.extensions.promise.api;

namespace Merger.Services.Backend.Sync
{
	public interface ISyncPayloadService
	{
		IPromise HandleSyncRequest(BackendSyncEntitiesWrapper backendSyncEntitiesWrapper, bool sendAsCheat);
	}
}
