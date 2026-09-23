using System;
using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Utility;
using UI.Buttons;
using UnityEngine;

namespace UI.Popups
{
	public class SimpleExtraInventoryContainer : MonoBehaviour
	{
		[SerializeField]
		public TweenedButton infoButton;

		[SerializeField]
		public GameObject infoBubbleContainer;

		[SerializeField]
		public Transform infoBubbleItemFrameParent;

		[SerializeField]
		public ExtraInventoryItemFrame itemFramePrefab;

		[SerializeField]
		public List<Transform> itemFrameContainers;

		[SerializeField]
		public float bubbleTweenDuration;

		[SerializeField]
		public bool showCompletedIndicatorsOnItem;

		[NonSerialized]
		public readonly List<ExtraInventoryItemFrame> instantiatedItemFrames;

		[NonSerialized]
		public readonly List<ExtraInventoryItemFrame> instantiatedItemFramesInfoBubble;

		[NonSerialized]
		public MergeItem[] inventoryItems;

		[NonSerialized]
		public bool tweeningBubble;

		public void Awake()
		{
		}

		public void Update()
		{
		}

		public void Initialize(PlayerModel playerModel, PlayerClientCache playerClientCache, IBoardInventory inventory, MergeBoard targetBoard)
		{
		}

		public void TearDown()
		{
		}

		public ExtraInventoryItemFrame InstantiateItemFrame(int index)
		{
			return null;
		}

		public ExtraInventoryItemFrame InstantiateItemFrameToInfoBubble()
		{
			return null;
		}

		public void DestroyInstantiatedItemFrames()
		{
		}

		[PublicAPI]
		public void OnInfoButtonClicked()
		{
		}
	}
}
