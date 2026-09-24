using System;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using UnityEngine;

namespace MergeEngine.Configuration.Board
{
	[Serializable]
	public class MergeBoardItem
	{
		public LockedCapability LockedCapability;

		public string BlockerArt;

		[SerializeField]
		public MergeItemWeakReference _itemReference;

		public IMergeItem Item => null;

		public MergeItemWeakReference ItemReference
		{
			get
			{
				return null;
			}
			set
			{
			}
		}
	}
}
