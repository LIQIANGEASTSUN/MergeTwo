using GameLogic.Player.Items.Production;
using Merge;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items
{
	public class PortalFeaturesSource : IItemConfigPart<PortalFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public PortalType Type;

		public MergeBoardId TargetBoard;

		public string ConfigKey => null;

		public string ItemType => null;

		public PortalFeatures ToConfigData(IProducerFactory producerFactor)
		{
			return null;
		}
	}
}
