using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public class OverrideItemFeatures
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration? TimeContainerInitialTime { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int? ChargesInitialCharges { get; set; }

		public OverrideItemFeatures()
		{
		}

		public OverrideItemFeatures(MetaDuration? timeContainerInitialTime, int? chargesInitialCharges)
		{
		}

		public static OverrideItemFeatures FromString(string str)
		{
			return null;
		}

		public static MetaDuration ParseTimeContainerTime(string value)
		{
			return default(MetaDuration);
		}

		public static int ParseCharges(string value)
		{
			return 0;
		}
	}
}
