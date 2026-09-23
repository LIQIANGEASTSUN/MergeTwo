using System;
using Code.GameLogic.GameEvents;
using DG.Tweening;
using GameLogic.Player;
using Merge;
using Metacore.MergeMansion.UI.Libraries;
using TMPro;
using UI.Indicators;
using UnityEngine;

namespace UI
{
	public class MysteryMachineLevelInfoCanContainer : MonoBehaviour
	{
		public SpineRewardItemIndicator canIcon;

		public TMP_Text canRewardText;

		[SerializeField]
		public CanType canType;

		[SerializeField]
		public DOTweenAnimation rollingTween;

		[NonSerialized]
		public PlayerModel playerModel;

		[NonSerialized]
		public MysteryMachine machine;

		[NonSerialized]
		public int animationScoreStart;

		[NonSerialized]
		public int animationScoreEnd;

		[NonSerialized]
		public float animationDuration;

		[NonSerialized]
		public float animationTimer;

		[NonSerialized]
		public bool rollingTweenPlaying;

		public void Update()
		{
		}

		public void Initialize(PlayerModel playerModel, MysteryMachine machine, bool levelingUp, MergeBoardId mergeBoardId, IMenuController menuController, IconLibrary iconLibrary, float? duration = null, float? delay = null)
		{
		}

		public int GetItemScoreForLevel(IMysteryMachineItem item, int level)
		{
			return 0;
		}

		public void SetCanRewardText(int score)
		{
		}
	}
}
