using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Audio.Attributes;

namespace MergeEngine.Signal.Items
{
	[SoundBoundSignal("Item Sell")]
	public class ItemSoldSignal : MergeItemSignalBase
	{
		public Reward RewardForSelling { get; }

		public ItemSoldSignal(IMergeItem item, int level, Reward reward)
			: base(null)
		{
		}
	}
}
