using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 3 })]
	public class SinkFeatures : ISinkFeatures
	{
		public static readonly SinkFeatures NoSink;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsSink { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public ISinkStateFactory Factory { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool HideProgressBar { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public bool HideUndiscoveredItemsInHints { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool AllowReverseSinking { get; set; }

		public SinkFeatures()
		{
		}

		public SinkFeatures(bool isSinkItem, ISinkStateFactory sinkStateFactory, bool hideProgressBar, bool hideUndiscoveredItemsInHints, bool allowReverseSinking)
		{
		}
	}
}
