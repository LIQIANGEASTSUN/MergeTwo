using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	public class ItemInfo : IGameConfigData<int>, IGameConfigData, IHasGameConfigKey<int>
	{
		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public int ItemId { get; set; }

		public int ConfigKey => 0;

		public static ItemInfo CreateFromItemDefinition(int itemId)
		{
			return null;
		}
	}
}
