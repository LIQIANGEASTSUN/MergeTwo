using GameLogic.Player;
using GameLogic.Player.Items;
using UnityEngine;
using UnityEngine.UI;

public class SinkableItemChainIndicator : MonoBehaviour
{
	[SerializeField]
	public Image itemChainIcon;

	public void Awake()
	{
	}

	public void Refresh(IMergeItem mergeItem, IPlayer player)
	{
	}

	public void SetIconSprite(Sprite sprite)
	{
	}
}
