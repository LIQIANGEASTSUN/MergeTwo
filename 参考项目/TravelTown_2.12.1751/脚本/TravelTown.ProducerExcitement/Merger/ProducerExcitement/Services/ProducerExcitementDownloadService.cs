using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.Services;
using Framework.Core.Signal;
using Merger.ItemGenerator.Backend.Responses.ProducerExcitement;
using Merger.ProducerExcitement.Compatibility;
using Merger.RemoteSprite.Services;
using RemoteSprites.Scripts.Runtime;
using Zenject;

namespace Merger.ProducerExcitement.Services
{
	public class ProducerExcitementDownloadService : ServiceBase, IProducerExcitementDownloadService
	{
		[Inject]
		[NonSerialized]
		public IRemoteMergeItemsService _remoteMergeItemsService;

		[Inject]
		[NonSerialized]
		public IProducerExcitementModel _producerExcitementModel;

		[NonSerialized]
		public bool _isGameStarted;

		public RemoteSpriteLocation ExcitementSpriteLocation { get; set; }

		public override void SubscribeToSignals()
		{
		}

		public override void UnsubscribeFromSignals()
		{
		}

		public bool IsExcitementSpriteDownloaded()
		{
			return false;
		}

		public void OnGameStarted(GameStartedSignal gameStartedSignal)
		{
		}

		public void OnExcitementStatesChanged(CollectionChangedArgs<ProducerExcitementDataResponse> changedArgs)
		{
		}

		public void OnExcitementStatesChanged(IEnumerable<ProducerExcitementDataResponse> excitements)
		{
		}

		public void DownloadAssets(ProducerExcitementDataResponse response)
		{
		}
	}
}
