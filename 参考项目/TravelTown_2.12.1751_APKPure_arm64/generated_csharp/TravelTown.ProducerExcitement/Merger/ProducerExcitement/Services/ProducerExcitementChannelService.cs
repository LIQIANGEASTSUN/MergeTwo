using System;
using Framework.Core.Services;
using Merger.Game.Model;
using Merger.ProducerExcitement.Services.ChannelListeners;
using Merger.Services.Backend.WebSocket.Interfaces;
using Zenject;

namespace Merger.ProducerExcitement.Services
{
	public class ProducerExcitementChannelService : ServiceBase
	{
		[Inject]
		[NonSerialized]
		public IWebSocketChannelObservable _webSocketChannelObservable;

		[Inject]
		[NonSerialized]
		public IJsonService _jsonService;

		[Inject]
		[NonSerialized]
		public new ISignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[NonSerialized]
		public ProducerExcitementCreatedChannelListener _excitementReceivedChannelListener;

		public ProducerExcitementCreatedChannelListener ExcitementReceivedChannelListener => null;

		public override void InitializeService()
		{
		}

		public override void DisposeService()
		{
		}
	}
}
