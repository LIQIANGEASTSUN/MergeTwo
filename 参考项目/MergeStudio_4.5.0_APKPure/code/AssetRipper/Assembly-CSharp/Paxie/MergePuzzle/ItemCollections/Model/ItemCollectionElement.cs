using System;
using MergePuzzle;

namespace Paxie.MergePuzzle.ItemCollections.Model
{
	public class ItemCollectionElement
	{
		public enum Type
		{
			Discovered = 0,
			RewardCollectable = 1,
			SeenElseWhere = 2,
			Unknown = 3
		}

		public class Delegates
		{
			public delegate void Initialize();

			public delegate void TypeChanged(Type oldType, ItemCollectionElement itemCollectionElement);

			public delegate void Claim();
		}

		[NonSerialized]
		public Type _discoverType;

		public Type DiscoverType
		{
			get
			{
				return default(Type);
			}
			set
			{
			}
		}

		public ItemInfo ItemInfo { get; set; }

		public bool IsVisibleInCollection { get; set; }

		public BoardItemData BoardItemData { get; set; }

		public Delegates.Initialize OnInitialize { get; set; }

		public Delegates.TypeChanged OnTypeChanged { get; set; }

		public Delegates.Claim OnClaim { get; set; }

		public ItemCollectionElement(Type discoverType, BoardItemData boardItemData)
		{
		}

		public void Paint()
		{
		}

		public void Claim()
		{
		}

		public bool IsDiscovered()
		{
			return false;
		}

		public bool IsRewardCollectable()
		{
			return false;
		}

		public bool IsSeenElseWhere()
		{
			return false;
		}

		public bool IsUnknown()
		{
			return false;
		}
	}
}
