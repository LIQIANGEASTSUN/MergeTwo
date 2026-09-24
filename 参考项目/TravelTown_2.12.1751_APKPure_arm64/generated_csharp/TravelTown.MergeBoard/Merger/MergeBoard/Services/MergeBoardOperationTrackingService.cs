using System;
using System.Collections.Generic;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data;
using Framework.Core.Services.Backend.Data.Payload;
using Framework.Util.BlockingFlags;
using Merger.Game.Model;
using Merger.MergeBoard.Logic.BoardOperations;
using Merger.MergeBoard.Providers;
using Merger.PowerBoost.Providers;
using Merger.RemoteLiveOps.Providers;
using Merger.Services.Backend.WebSocket;
using Merger.Services.Backend.WebSocket.DeliveryGuarantee;
using Zenject;

namespace Merger.MergeBoard.Services
{
	public class MergeBoardOperationTrackingService : BlockingFlagsService<OperationTrackingFlags>, IMergeBoardOperationTrackingService, IBlockingFlags<OperationTrackingFlags>, IDebugBlockingFlags
	{
		[Inject]
		[NonSerialized]
		public IWebSocketDeliveryGuaranteeService _webSocketSender;

		[Inject]
		[NonSerialized]
		public IResourcesModel _resourcesModel;

		[Inject]
		[NonSerialized]
		public IOperationTrackingMetadataProvider _operationTrackingMetadataProvider;

		[Inject]
		[NonSerialized]
		public IEventGlobalMetadata _eventGlobalMetadata;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[Inject(Optional = true)]
		[NonSerialized]
		public IOperationPayloadEnrichment[] _payloadEnhancers;

		public void SendOperationData(IList<OperationNotificationData> operationNotificationDatas, Dictionary<string, string> metadata = null)
		{
		}

		public OperationNotificationData CreatePayload<TNotificationData>(string operationType, List<TNotificationData> itemNotificationData, ExtraData extraData = null) where TNotificationData : BaseNotificationData
		{
			return null;
		}

		public ClientMessageNotification CreateClientMessageNotification(string topic, string action, object payload = null, Dictionary<string, string> metadata = null, string debugData = null)
		{
			return null;
		}

		public void SendTrackingData(ClientMessageNotification clientMsg)
		{
		}

		public OperationNotificationData ApplyEnhancers(OperationNotificationData payload)
		{
			return null;
		}
	}
}
