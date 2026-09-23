using System;
using GameLogic.Player;
using GameLogic.Player.Items;
using TMPro;
using UI.Tweens;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
	public class ArtifactInfoPanelItem : MonoBehaviour
	{
		[NonSerialized]
		public GameObject itemIcon;

		[NonSerialized]
		public Vector3 itemIconParentInitScale;

		[SerializeField]
		public TweenedItem itemIconTweenedItem;

		[Header("Icon")]
		[SerializeField]
		public Transform itemIconParent;

		[Header("Title")]
		[SerializeField]
		public TextMeshProUGUI titleText;

		[SerializeField]
		public TweenedItem titleTweenedItem;

		[Header("Description")]
		[SerializeField]
		public TextMeshProUGUI descriptionText;

		[SerializeField]
		public TweenedItem descriptionTweenedItem;

		[Header("Progress bar")]
		[SerializeField]
		public Slider progressBar;

		[SerializeField]
		public TextMeshProUGUI progressBarText;

		[Header("Level based visuals")]
		[SerializeField]
		public Image[] levelBorders;

		[SerializeField]
		public Image[] levelHeaders;

		[SerializeField]
		public Image[] levelItemBorders;

		[NonSerialized]
		public MergeItem MergeItem;

		[NonSerialized]
		public bool initialised;

		public void Initialise()
		{
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
		}

		public void Setup(MergeItem mergeItem)
		{
		}

		public void SetTitle(string value, bool animate = true)
		{
		}

		public void SetDescription(string value, bool animate = true)
		{
		}

		public void SetIcon(IPlayer player, MergeItem mergeItem, bool partiallyVisible = false, bool animate = true)
		{
		}

		public void ClearIcon(IPlayer player)
		{
		}

		public void SetProgressBarFill(int minValue, int maxValue, int value, string valueFormat)
		{
		}
	}
}
