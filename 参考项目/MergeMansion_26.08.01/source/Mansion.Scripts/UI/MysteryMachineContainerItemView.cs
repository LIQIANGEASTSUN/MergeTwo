using System;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.UI.Libraries;
using UI.Buttons;
using UI.Indicators;
using UnityEngine;

namespace UI
{
	public class MysteryMachineContainerItemView : MonoBehaviour
	{
		[SerializeField]
		public SpineRewardItemIndicator indicator;

		[SerializeField]
		public SpineRewardItemIndicator progressionEventItemIndicator;

		[SerializeField]
		public TweenedButton button;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public IMysteryMachineItem item;

		[NonSerialized]
		public IMenuController menuController;

		[NonSerialized]
		public PlayerReward indicatorReward;

		public TweenedButton Button => null;

		public IMysteryMachineItem Item => null;

		public PlayerReward IndicatorReward => null;

		public void Initialize(PlayerModel playerModel, MergeBoardId mergeBoardId, IMysteryMachineItem item, IMenuController menuController, IIconLibrary iconLibrary)
		{
		}

		public void TearDown()
		{
		}

		[PublicAPI]
		public void ButtonClicked()
		{
		}
	}
}
