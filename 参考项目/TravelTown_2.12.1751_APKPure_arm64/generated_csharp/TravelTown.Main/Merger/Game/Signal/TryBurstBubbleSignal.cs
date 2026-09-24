using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using strange.extensions.promise.api;

namespace Merger.Game.Signal
{
	public class TryBurstBubbleSignal
	{
		public IPromise TryBurstBubblePromise;

		public BoardItemPosition BoardItemPosition { get; }

		public ResourceMultiple Price { get; }

		public bool BurstWithAd { get; }

		public TryBurstBubbleSignal(BoardItemPosition boardItemPosition, ResourceMultiple price, bool burstWithAd, IPromise tryBurstBubblePromise = null)
		{
		}
	}
}
