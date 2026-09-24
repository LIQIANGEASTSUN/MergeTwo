using System;
using System.Collections.Generic;
using Paxie;

namespace MergePuzzle
{
	public class BoardItemDictionaryHandler
	{
		[NonSerialized]
		public readonly SerializableDictionary<int, BoardItemSetData> _boardItemDictionary;

		[NonSerialized]
		public readonly SerializableDictionary<int, BoardItemSetData> _boardItemDictionaryVariant;

		public List<BoardItemSetData> Values => null;

		public List<SerializableDictionary<int, BoardItemSetData>> RemoteBoardItemDictionaries => null;

		public BoardItemDictionaryHandler(SerializableDictionary<int, BoardItemSetData> boardItemDictionary, SerializableDictionary<int, BoardItemSetData> boardItemDictionaryVariant)
		{
		}

		public bool TryGetBalanceBoardItemDictionary(out SerializableDictionary<int, BoardItemSetData> boardDic)
		{
			boardDic = null;
			return false;
		}

		public bool TryGetFromRemoteBoardItemDictionary(int setID, out BoardItemSetData setData)
		{
			setData = null;
			return false;
		}

		public bool TryGetValueFromBothGroups(int setID, out BoardItemSetData setDataRes)
		{
			setDataRes = null;
			return false;
		}

		public bool TryGetValue(int setID, out BoardItemSetData setData)
		{
			setData = null;
			return false;
		}

		public bool ContainsKey(int setID)
		{
			return false;
		}
	}
}
