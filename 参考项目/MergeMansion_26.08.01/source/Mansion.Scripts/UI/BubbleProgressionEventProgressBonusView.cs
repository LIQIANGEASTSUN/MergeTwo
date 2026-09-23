using GameLogic.Player;
using GameLogic.Player.Items.Bubble;
using TMPro;
using UI.Indicators;
using UnityEngine;

namespace UI
{
	public class BubbleProgressionEventProgressBonusView : MonoBehaviour
	{
		[SerializeField]
		public SpineInfoItemIndicator itemIndicator;

		[SerializeField]
		public TextMeshProUGUI bonusText;

		public void Initialize(IPlayer player, BubbleProgressionEventProgressBonus bonus)
		{
		}
	}
}
