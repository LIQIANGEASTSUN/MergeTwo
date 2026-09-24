using System.Collections.Generic;
using UnityEngine;

namespace MergePuzzle
{
	[CreateAssetMenu(fileName = "JellyGroupData", menuName = "Scriptable/Jelly/JellyGroupData", order = 1)]
	public class JellyGroupData : ScriptableObject
	{
		public List<int> JellyPriceList;
	}
}
