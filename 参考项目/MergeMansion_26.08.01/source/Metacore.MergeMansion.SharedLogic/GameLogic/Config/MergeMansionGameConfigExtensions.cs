using Code.GameLogic.GameEvents;
using Code.GameLogic.IAP;
using GameLogic.MergeChains;
using GameLogic.Player.Items;

namespace GameLogic.Config
{
	public static class MergeMansionGameConfigExtensions
	{
		public static ItemDefinition LookupItem(this IMergeMansionGameConfig sharedConfig, int itemId)
		{
			return null;
		}

		public static void CheckIsItemDefinition(IItemDefinition itemDefinition)
		{
		}

		public static ItemDefinition LookupItem(this IMergeMansionGameConfig sharedConfig, string itemType)
		{
			return null;
		}

		public static IMergeChainDefinition LookupChain(this IMergeMansionGameConfig sharedConfig, int itemId)
		{
			return null;
		}

		public static EventLevelInfo LookupEventLevel(this IMergeMansionGameConfig sharedGameConfig, EventLevelId id)
		{
			return null;
		}

		public static InAppProductInfo LookupProductInfo(this IMergeMansionGameConfig config, string productTag)
		{
			return null;
		}
	}
}
