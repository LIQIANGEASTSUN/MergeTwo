using GameLogic.Player.Items;
using TMPro;
using UnityEngine;

namespace UI
{
	public class InventoryItemFrameUsesLeft : MonoBehaviour
	{
		[SerializeField]
		public TextMeshProUGUI usesLeftText;

		public void Initialize(MergeItem item)
		{
		}
	}
}
