using System;
using GameLogic.Area;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Options.Unity;
using TMPro;
using UI.Indicators;
using UnityEngine;

namespace UI.Popups
{
	public class HotspotAreaUnlocksAfterConsumableItemInfo : MonoBehaviour
	{
		[SerializeField]
		public SpineInfoItemIndicator discoverItem;

		[SerializeField]
		public Color discoverItemColor;

		[SerializeField]
		public GameObject buttonContainer;

		[SerializeField]
		public TextMeshProUGUI discoverItemLabel;

		[SerializeField]
		public TextMeshProUGUI discoverItemInstructionsLabel;

		[SerializeField]
		public GameObject questionMarkIcon;

		[SerializeField]
		public SerializableUnityOption<GameObject> travelButtonContainer;

		[NonSerialized]
		public AreaInfo areaInfoHint;

		[NonSerialized]
		public IItemDefinition itemToDiscover;

		[NonSerialized]
		public MergeChainDefinition mergeChainHint;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public PlayerModel player;

		public void Initialize(PlayerModel player, IItemDefinition itemToDiscover, MergeChainDefinition mergeChainHint, AreaInfo areaInfoHint, IMenuController menuController, bool requirementsFulfilled, bool itemDiscovered = false)
		{
		}

		public void ViewRequirementsFailedView(bool itemDiscovered = false)
		{
		}

		public string GetDiscoverItemInstructionsString(AreaInfo areaInfoHint, IItemDefinition itemToDiscover, MergeChainDefinition mergeChainHint)
		{
			return null;
		}

		public void ViewRequirementsCompletedView()
		{
		}

		[PublicAPI]
		public void ItemClicked()
		{
		}
	}
}
