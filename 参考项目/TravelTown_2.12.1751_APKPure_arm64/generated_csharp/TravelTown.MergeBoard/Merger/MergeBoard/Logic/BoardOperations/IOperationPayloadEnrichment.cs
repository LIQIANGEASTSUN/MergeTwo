using Framework.Core.Services.Backend.Data.Payload;

namespace Merger.MergeBoard.Logic.BoardOperations
{
	public interface IOperationPayloadEnrichment
	{
		OperationNotificationData Enrich(OperationNotificationData payload);
	}
}
