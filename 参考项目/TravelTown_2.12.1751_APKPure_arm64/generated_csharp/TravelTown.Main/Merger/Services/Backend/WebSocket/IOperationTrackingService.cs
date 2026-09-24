using System.Collections.Generic;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Util.BlockingFlags;

namespace Merger.Services.Backend.WebSocket
{
	public interface IOperationTrackingService : IBlockingFlags<OperationTrackingFlags>, IDebugBlockingFlags
	{
		void SendOperationData<TNotificationData>(string type, TNotificationData itemData, Dictionary<string, string> metadata = null, ExtraData extraData = null) where TNotificationData : BaseNotificationData;

		void SendOperationData<TNotificationData>(string type, List<TNotificationData> itemsNotificationData, Dictionary<string, string> metadata = null) where TNotificationData : BaseNotificationData;

		OperationNotificationData CreatePayload<TNotificationData>(string operationType, TNotificationData itemNotificationData, ExtraData extraData = null) where TNotificationData : BaseNotificationData;

		OperationNotificationData CreatePayload<TNotificationData>(string operationType, List<TNotificationData> notificationDataList) where TNotificationData : BaseNotificationData;
	}
}
