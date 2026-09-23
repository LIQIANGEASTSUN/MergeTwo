using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class FramesFeatures : IFramesFeatures
	{
		public static readonly FramesFeatures NoFramesFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsFrames { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int WeightItem { get; set; }

		public FramesFeatures()
		{
		}

		public FramesFeatures(bool isFrames, int weightItem)
		{
		}
	}
}
