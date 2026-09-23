using GameLogic.Player;
using GameLogic.Player.Items.Bubble;
using UnityEngine;

namespace UI
{
	public class BubbleBonusView : MonoBehaviour
	{
		[SerializeField]
		public BubbleProgressionEventProgressBonusView progressionEventProgressBonusView;

		[SerializeField]
		public BubbleAuxEnergyBonusView auxEnergyBonusView;

		public void Initialize(IPlayer player, IBubbleBonus bonus)
		{
		}
	}
}
