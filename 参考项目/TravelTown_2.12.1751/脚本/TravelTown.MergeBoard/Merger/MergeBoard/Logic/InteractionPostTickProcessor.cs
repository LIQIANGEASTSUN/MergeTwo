using System;
using ContextualizedECS.Context;
using Merger.Audio.Services;
using Zenject;

namespace Merger.MergeBoard.Logic
{
	public class InteractionPostTickProcessor : IBoardControllerPostTickProcessor
	{
		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IAudioService _audioService;

		public void Process(TickArgs result)
		{
		}
	}
}
