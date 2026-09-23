using System;
using GameLogic.Player.Items;
using UnityEngine;

namespace UI.Indicators
{
	public abstract class PooledSpineUGUIMergeItem : MonoBehaviour
	{
		[SerializeField]
		public Transform visualParent;

		[NonSerialized]
		public string spineItemTag;

		[NonSerialized]
		public GameObject pooledObject;

		[NonSerialized]
		public IItemDefinition itemDefinition;

		[NonSerialized]
		public int itemLevel;

		public SpineHandler SpineHandler { get; set; }

		public AnimationRunner AnimationRunner { get; set; }

		public Transform GetVisualParent()
		{
			return null;
		}

		public void SetupSpine(IItemDefinition definitions)
		{
		}

		public virtual void DisposeSpine()
		{
		}

		public void OnDestroy()
		{
		}

		public PooledSpineUGUIMergeItem()
		{
		}
	}
}
