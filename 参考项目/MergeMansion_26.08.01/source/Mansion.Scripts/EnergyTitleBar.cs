using System;
using Animations;
using Audio;
using DG.Tweening;
using GameLogic.Player;
using GameLogic.Player.Board;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core;
using Metaplay.Core.Client;
using TMPro;
using UI;
using UI.Buttons;
using UnityEngine;
using UnityEngine.UI;

public class EnergyTitleBar : MonoBehaviour, IRewardDestination, ITitleBarCurrency
{
	[SerializeField]
	public TextMeshProUGUI amountText;

	[SerializeField]
	public TextMeshProUGUI timerText;

	[SerializeField]
	public GameObject timerBackground;

	[SerializeField]
	public GameObject infinityIcon;

	[SerializeField]
	public GameObject plusIcon;

	[SerializeField]
	public Image energyIconImage;

	[SerializeField]
	public CanvasGroupTweener canvasGroupTweener;

	[Header("Buttons")]
	[SerializeField]
	public TweenedButton elementButton;

	[SerializeField]
	public TweenedButton plusIconButton;

	[SerializeField]
	public SerializableUnityOption<EnergyModeButton> energyModeButton;

	[Header("Infinite Energy Activation Animation")]
	[SerializeField]
	public float animationScaleOutDuration;

	[SerializeField]
	public float animationTargetScale;

	[SerializeField]
	public float animationScaleBackDuration;

	[SerializeField]
	public float animationNormalScale;

	[SerializeField]
	public float animationInterval;

	[SerializeField]
	public Ease scaleOutEasing;

	[SerializeField]
	public Ease scaleBackEasing;

	[SerializeField]
	public SerializableUnityOption<GameObject> infiniteEnergyEffect;

	[NonSerialized]
	public PlayerModel playerModel;

	[NonSerialized]
	public IAudioPlayer audioPlayer;

	[NonSerialized]
	public int targetAmount;

	[NonSerialized]
	public MetaTime? targetTimerValue;

	[NonSerialized]
	public long currentTimeInSeconds;

	[NonSerialized]
	public bool isReceiving;

	[NonSerialized]
	public bool infiniteEnergy;

	[NonSerialized]
	public float fill;

	[NonSerialized]
	public int receiveAmount;

	public CanvasGroupTweener CanvasGroupTweener => null;

	public TweenedButton ElementButton => null;

	public SerializableUnityOption<EnergyModeButton> EnergyModeButton => null;

	public Vector3 AnimateTarget => default(Vector3);

	public void InitEnergyModeButton(PlayerModel playerModel, IPlayerClientContext playerContext, Option<MergeBoard> mergeBoardOption, EnergyModeIconLibrary energyModeIconLibrary, IAudioPlayer audioPlayer)
	{
	}

	public void Update()
	{
	}

	public void UpdateAmount(int amount)
	{
	}

	public void UpdateTimer()
	{
	}

	public void SetTargetTimer(MetaTime? targetValue)
	{
	}

	public void SetAmount(int amount, bool animateDeduction = false)
	{
	}

	public int GetAmount()
	{
		return 0;
	}

	public void AnimateInfiniteEnergyEnabled(bool energyEnabled)
	{
	}

	public void SetInfiniteEnergyEnabled(bool enabled)
	{
	}

	public void StartReceiving(int amount)
	{
	}

	public void FinishReceiving(bool updateToTargetAmount = true, bool playAudio = true)
	{
	}

	public void SetPlusIconEnabled(bool enabled)
	{
	}

	public void UpdateCompletion(float fillPercentage, bool increaseVisibleValue = false)
	{
	}

	public void SetEnergyType(EnergyType energyType, IIconLibrary iconLibrary)
	{
	}

	public void SetButtonAction(Action action)
	{
	}
}
