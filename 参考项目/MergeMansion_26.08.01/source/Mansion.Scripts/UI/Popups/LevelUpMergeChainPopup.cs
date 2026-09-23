using System;
using JetBrains.Annotations;
using Pool;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class LevelUpMergeChainPopup : PopupBase<LevelUpMergeChainMenuState>
	{
		[Serializable]
		public struct References
		{
			[Header("UIElements")]
			public GameObject popup;

			public Image blueOverlay;

			public Transform visualParent;

			public Vector3 imageScale;
		}

		[SerializeField]
		public References refs;

		[NonSerialized]
		public string spineItemTag;

		[NonSerialized]
		public ObjectPoolElement pooledObject;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override LevelUpMergeChainMenuState MenuState { get; set; }

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override void PopulateContent()
		{
		}

		public void SetupSpine()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		[PublicAPI]
		public void ButtonClicked()
		{
		}
	}
}
