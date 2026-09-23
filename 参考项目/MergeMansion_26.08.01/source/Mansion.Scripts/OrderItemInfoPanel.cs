using System;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using TMPro;
using UI;
using UI.Indicators;
using UI.Tweens;
using UnityEngine;
using UnityEngine.UI;

public class OrderItemInfoPanel : MonoBehaviour
{
	[Header("Group")]
	[SerializeField]
	public TweenedItem orderGroupTweenedItem;

	[Header("Title")]
	[SerializeField]
	public TextMeshProUGUI titleText;

	[SerializeField]
	public TweenedItem titleTextTweenedItem;

	[Header("Description")]
	[SerializeField]
	public TextMeshProUGUI descriptionText;

	[Header("Icon")]
	[SerializeField]
	public RectTransform itemIconContainer;

	[SerializeField]
	public TweenedItem itemIconContainerTweenedItem;

	[SerializeField]
	public RectTransform itemIconParent;

	[NonSerialized]
	public Vector2 itemIconContainerInitScale;

	[Header("Item Timer")]
	[SerializeField]
	public TimerControl itemTimer;

	[Header("Sink Items")]
	[SerializeField]
	public SpineInfoItemIndicator[] sinkItems;

	[Header("Reward Items")]
	[SerializeField]
	public TextMeshProUGUI rewardTitle;

	[SerializeField]
	public SpineInfoItemIndicator[] rewardItems;

	[Header("Panel Style")]
	[SerializeField]
	public Image paneBackground;

	[SerializeField]
	public Image headerBackground;

	[SerializeField]
	public ToDoTaskMergeGoalItemColorData normalColorData;

	[SerializeField]
	public ToDoTaskMergeGoalItemColorData orderComepletedColorData;

	[NonSerialized]
	public (GameObject go, string tag) instantiatedIcon;

	[NonSerialized]
	public Action infoButtonCallback;

	public TimerControl ItemTimer => null;

	public void Initialize(IMergeItem mergeItem, IPlayer player, IMenuController menuController, bool setEnabled, bool animate)
	{
	}

	public void SetPanelColor(ToDoTaskMergeGoalItemColorData colorData)
	{
	}

	public void SetTitle(IPlayer player, IMergeItem mergeItem, bool orderIsCompleted, bool animate)
	{
	}

	public void SetIcon(IMergeMansionGameConfig config, IMergeItem mergeItem, bool animate)
	{
	}

	public void TearDown()
	{
	}

	[PublicAPI]
	public void InfoButtonPressed()
	{
	}
}
