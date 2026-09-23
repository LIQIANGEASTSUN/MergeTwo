using GameLogic.Player.Items;
using TMPro;
using UnityEngine;

namespace UI.Indicators
{
	public class DiscoverableItem : PooledSpineUGUIMergeItem
	{
		[SerializeField]
		public TextMeshProUGUI infoLabel;

		[SerializeField]
		public GameObject levelUpIndicator;

		public void Setup(IItemDefinition itemDefinition, bool isNewItem = false)
		{
		}

		public void Cleanup()
		{
		}

		public void OnDisable()
		{
		}
	}
}
