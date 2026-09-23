using System;
using GameLogic.Player;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Options;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Indicators
{
	public class BoxInfoItem : PooledSpineUGUIMergeItem
	{
		[SerializeField]
		public Image background;

		[SerializeField]
		public GameObject oddsGroup;

		[SerializeField]
		public TextMeshProUGUI oddsLabel;

		[SerializeField]
		public GameObject amountGroup;

		[SerializeField]
		public TextMeshProUGUI amountLabel;

		[SerializeField]
		public GameObject infoButton;

		[NonSerialized]
		public GameObject loanedObject;

		[NonSerialized]
		public bool hasFog;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public IPlayer player;

		[NonSerialized]
		public IItemDefinition item;

		[NonSerialized]
		public Option<Action> _infoButtonPressedCallbackOption;

		public static readonly string setHalfFogEvent;

		public void Setup(IItemDefinition itemDefinition, bool showBackground, bool isDustyItem, IMenuController menuController, IPlayer player)
		{
		}

		public void Setup(IItemDefinition itemDefinition, bool showBackground, bool isDustyItem, IMenuController menuController, IPlayer player, float? odds = null, int? amount = null, bool amountSeparatedBySpace = true)
		{
		}

		public static string GetAmountText(IItemDefinition itemDefinition, int amount, bool amountSeparatedBySpace)
		{
			return null;
		}

		public void SetupInfoButton(IItemDefinition itemDefinition)
		{
		}

		public void SetupFog()
		{
		}

		[PublicAPI]
		public void InfoButtonPressed()
		{
		}

		public void DisposeFog()
		{
		}

		public override void DisposeSpine()
		{
		}
	}
}
