using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Util.BlockingFlags;
using Merger.Services.Backend.WebSocket;

namespace Merger.MergeBoard.Services
{
	public interface IMergeBoardOperationTrackingService : IBlockingFlags<OperationTrackingFlags>, IDebugBlockingFlags
	{
		void SendOperationData(IList<OperationNotificationData> operationNotificationDatas, Dictionary<string, string> metadata = null);

		OperationNotificationData CreatePayload<TNotificationData>(string operationType, List<TNotificationData> itemNotificationData, ExtraData extraData = null) where TNotificationData : BaseNotificationData;
	}
}
