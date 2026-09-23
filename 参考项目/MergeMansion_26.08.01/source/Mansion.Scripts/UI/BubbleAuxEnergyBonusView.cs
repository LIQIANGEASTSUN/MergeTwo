using System;
using GameLogic.Player;
using GameLogic.Player.Items.Bubble;
using TMPro;
using UnityEngine;

namespace UI
{
	public class BubbleAuxEnergyBonusView : MonoBehaviour
	{
		[Serializable]
		public struct EnergyIconData
		{
			public EnergyType EnergyType;

			public GameObject Icon;
		}

		[SerializeField]
		public EnergyIconData[] energyIconDatas;

		[SerializeField]
		public TextMeshProUGUI bonusText;

		public void Initialize(BubbleAuxEnergyBonus bonus)
		{
		}
	}
}
