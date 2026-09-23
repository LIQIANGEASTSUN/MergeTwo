using System.Collections.Generic;
using GameLogic.Config;

public static class ItemConverter
{
	public const string ItemTypeNone = "None";

	public static byte[] Md5Hash(byte[] input)
	{
		return null;
	}

	public static int GenerateConfigKey(string itemType)
	{
		return 0;
	}

	public static int ConvertToConfigKey(string itemType)
	{
		return 0;
	}

	public static int ConvertToConfigKey(string itemType, bool ignoreCase = true)
	{
		return 0;
	}

	public static List<int> ConvertToConfigKeys(IEnumerable<string> itemTypes)
	{
		return null;
	}

	public static string ConvertToItemType(int itemId, IMergeMansionGameConfig gameConfig)
	{
		return null;
	}

	public static string ConvertToItemTypeFromConstants(int itemId)
	{
		return null;
	}
}
