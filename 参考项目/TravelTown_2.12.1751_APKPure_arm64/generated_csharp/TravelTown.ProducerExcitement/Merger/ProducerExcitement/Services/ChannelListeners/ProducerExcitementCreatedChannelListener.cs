using System;
using Framework.Core.Services;
using Framework.Core.Services.Backend.Data;
using Merger.Game.Model;
using Merger.Services.Backend.WebSocket.Interfaces;
using Zenject;

namespace Merger.ProducerExcitement.Services.ChannelListeners
{
	public class ProducerExcitementCreatedChannelListener : IChannelListener
	{
		[NonSerialized]
		public readonly IJsonService _jsonService;

		[NonSerialized]
		public readonly ISignalBus _signalBus;

		[NonSerialized]
		public readonly IGameSessionModel _gameSessionModel;

		public string ChannelName => null;

		public ProducerExcitementCreatedChannelListener(ISignalBus signalBus, IJsonService jsonService, IGameSessionModel gameSessionModel)
		{
		}

		public void HandleMessage(BackendMessageNotification message)
		{
		}
	}
}
