//Type is in global namespace

public static class ItemConverter
{
	public const string ItemTypeNone = "None"; //Field offset: 0x0

	public static int ConvertToConfigKey(string itemType) { }

	public static int ConvertToConfigKey(string itemType, bool ignoreCase = true) { }

	public static List<Int32> ConvertToConfigKeys(IEnumerable<String> itemTypes) { }

	public static string ConvertToItemType(int itemId, IMergeMansionGameConfig gameConfig) { }

	public static string ConvertToItemTypeFromConstants(int itemId) { }

	private static int GenerateConfigKey(string itemType) { }

	private static Byte[] Md5Hash(Byte[] input) { }

}

