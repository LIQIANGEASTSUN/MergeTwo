namespace FAT
{
	public class MBBoardOrderUtility
	{
		public static bool sDebugForceOrderV2;

		public static bool DebugForceOrderV2 => false;

		public static void SetDebugForceOrderV2(bool enabled)
		{
		}

		public static bool IsOrderV2Enabled()
		{
			return false;
		}

		public static string GetDefaultTypeKey()
		{
			return null;
		}

		public static string GetItemTypeKey(IOrderData order)
		{
			return null;
		}

		public static bool CanPresentOrder(IOrderData order)
		{
			return false;
		}

		public static bool CanApplyDelayedOrderBoxEffect(IOrderData currentOrder, IOrderData expectedOrder, int currentBindingVersion, int expectedBindingVersion)
		{
			return false;
		}

		public static bool CanApplyDelayedOrderReload(IOrderData order, object currentInstance, object expectedInstance)
		{
			return false;
		}
	}
}
