using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "BubbleGroupData", menuName = "Scriptable/Bubble/BubbleGroupData", order = 1)]
	public class BubbleGroupData : ScriptableObject
	{
		public List<BubbleItemData> BubbleItemList;
	}
}
