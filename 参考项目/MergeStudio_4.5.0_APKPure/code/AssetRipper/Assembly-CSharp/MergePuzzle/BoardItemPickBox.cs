using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BoardItemPickBox", menuName = "Scriptable/BoardItem/BoardItemPickBox", order = 10)]
	public class BoardItemPickBox : BoardItemData, IConfigAdaptor<PickBoxSpawnerConfigAdaptor>, IConfigAdaptorBase
	{
		public List<SpawnedItem> SpawnedItems1;

		public List<SpawnedItem> SpawnedItems2;

		public List<SpawnedItem> SpawnedItems3;

		public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated)
		{
			return false;
		}

		public override int GetTimeRequiredToExitCharging()
		{
			return 0;
		}

		public PickBoxSpawnerConfigAdaptor GetConfigAdaptor()
		{
			return null;
		}

		public List<SpawnedItem> GetRandomItems()
		{
			return null;
		}

		public SpawnedItem GetRandomItemForOption1()
		{
			return null;
		}

		public SpawnedItem GetRandomItemForOption2(int option1SelectedSet)
		{
			return null;
		}

		public SpawnedItem GetRandomItemForOption3(int option1SelectedSet, int option2SelectedSet)
		{
			return null;
		}

		public SpawnedItem GetExceptionItem()
		{
			return null;
		}

		public SpawnedItem GetRandom(List<SpawnedItem> lst)
		{
			return null;
		}

		public AdaptorBase ConvertFromLocal()
		{
			return null;
		}
	}
}
