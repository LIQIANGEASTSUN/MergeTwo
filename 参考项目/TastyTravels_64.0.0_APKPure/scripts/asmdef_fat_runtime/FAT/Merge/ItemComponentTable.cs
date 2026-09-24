using System;
using System.Collections.Generic;
using fat.gamekitdata;

namespace FAT.Merge
{
	public static class ItemComponentTable
	{
		public delegate bool SerializeDeltaFunc(MergeItem newData, MergeItem oldData);

		public delegate bool ValidateFunc(ItemComConfig config);

		public static Dictionary<Type, ItemComponentType> mTypeEnumMap;

		public static Dictionary<ItemComponentType, Type> mEnumTypeMap;

		public static Dictionary<ItemComponentType, SerializeDeltaFunc> mSerializeDeltaFunc;

		public static Dictionary<ItemComponentType, ValidateFunc> mValidateFuncc;

		public static Dictionary<ItemComponentType, IItemComponentPool> mItemPools;

		static ItemComponentTable()
		{
		}

		public static void _Init()
		{
		}

		public static ItemComponentType GetEnumByType(Type type)
		{
			return default(ItemComponentType);
		}

		public static T CreateComponent<T>() where T : ItemComponentBase, new()
		{
			return null;
		}

		public static ItemComponentBase CreateComponentByType(ItemComponentType type)
		{
			return null;
		}

		public static ItemComponentBase ValidateAndAddComponent(Item item, ItemComConfig comConfig, ItemComponentType type)
		{
			return null;
		}

		public static bool CalculateSerializeDelta(MergeItem newData, MergeItem oldData)
		{
			return false;
		}

		public static bool IsComponentItemSource(ItemComponentType type)
		{
			return false;
		}

		public static void Free(ItemComponentType type, ItemComponentBase com)
		{
		}

		public static ItemComponentPool<T> _GetPool<T>() where T : ItemComponentBase, new()
		{
			return null;
		}

		public static void _RegisterItemComponent<T>(ItemComponentType type, SerializeDeltaFunc serializeDeltaFunc, ValidateFunc validateFunction) where T : ItemComponentBase, new()
		{
		}
	}
}
