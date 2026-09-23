using System;
using UnityEngine;

namespace Code.Bot.Task
{
	[Serializable]
	public class BubbleItemPurchaseProbability
	{
		public string ItemType;

		[Range(0f, 1f)]
		public float probability;
	}
}
