using System.Collections.Generic;
using Code.Bot.Model;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using UnityEngine;

namespace Code.Bot.Filter
{
	public abstract class FilterBase : ScriptableObject
	{
		[SerializeField]
		public bool inverse;

		public virtual string FilterName => null;

		public abstract IEnumerable<(Coordinate, MergeItem)> Filter(RuntimeModel runtimeModel, IEnumerable<(Coordinate, MergeItem)> Items);

		public abstract IEnumerable<MergeItem> Filter(RuntimeModel runtimeModel, IEnumerable<MergeItem> Items);

		public FilterBase()
		{
		}
	}
}
