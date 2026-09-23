using System;
using DG.Tweening;
using GameLogic.Config.Types;
using GameLogic.Player;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Board.BoardStatusEffect
{
	public class BoardStatusEffectUI : MonoBehaviour
	{
		[SerializeField]
		public Image effectIconImage;

		[SerializeField]
		public Image timerBorderImage;

		[SerializeField]
		public Image timerProgressFillImage;

		[SerializeField]
		public TimerControl timer;

		[NonSerialized]
		public PlayerModel _playerModel;

		[NonSerialized]
		public DOTweenAnimation[] _timerSlideAnimations;

		public DOTweenAnimation[] timerSlideAnimations => null;

		public void Initialize(Sprite iconSprite, Color effectColor, MetacoreTime effectStartTime, MetacoreTime effectEndTime, PlayerModel playerModel)
		{
		}

		public void OnUpdate()
		{
		}

		public void StopTimer()
		{
		}

		public void UpdateTimer(MetacoreTime effectStartTime, MetacoreTime effectEndTime)
		{
		}

		public void ShowTimerSlideAnimation()
		{
		}
	}
}
