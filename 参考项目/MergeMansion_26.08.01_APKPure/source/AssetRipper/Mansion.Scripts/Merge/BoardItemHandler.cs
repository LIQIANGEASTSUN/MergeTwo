using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using DG.Tweening;
using DebugTools.QR;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Items.Fishing;
using Haptics;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Utility;
using Pool;
using UI.Tooltips;
using UnityEngine;
using UnityEngine.UI;

namespace Merge
{
	public class BoardItemHandler : MonoBehaviour
	{
		public const string SetHalfFogEvent = "SetHalfFog";

		public const string TransitionFullFogToHalfFogEvent = "TransitionFullFogToHalfFog";

		public const string TransitionToHalfFogEvent = "TransitionToHalfFog";

		public const string TransitionFullFogToClearEvent = "TransitionFullFogToClear";

		public GameObject backGround;

		public static readonly HashSet<ItemEffect> blockedEffects;

		public static readonly string[] fogSkinNames;

		public static readonly int[] skinRandomIndexes;

		public static int globalFogSkinIndex;

		public static bool initializeQrImage;

		[NonSerialized]
		public readonly Dictionary<ItemEffect, ItemEffectHandler> itemEffectHandlers;

		[NonSerialized]
		public readonly Dictionary<ItemEffect, GameObject> itemImageEffectHandlers;

		[NonSerialized]
		public readonly Dictionary<ItemEffect, GameObject> itemChildEffectHandlers;

		[NonSerialized]
		public AnimationRunner itemActualAnimationRunner;

		[NonSerialized]
		public AnimationRunner possibleFogAnimationRunner;

		[NonSerialized]
		public SpineHandler itemActualSpineHandler;

		[NonSerialized]
		public SpineHandler possibleFogSpineHandler;

		[NonSerialized]
		public TooltippedObject possibleFogTooltip;

		[NonSerialized]
		public ItemEffectHandler activationParticleHandler;

		[NonSerialized]
		public Draggable draggable;

		[NonSerialized]
		public RectTransform rectTransform;

		[NonSerialized]
		public Text text;

		[NonSerialized]
		public ItemEffectsFollower actualItemEffectFollower;

		[NonSerialized]
		public BoardItemFlags flags;

		[NonSerialized]
		public IItemDefinition currentItemType;

		[NonSerialized]
		public ItemVisibility itemVisibility;

		[NonSerialized]
		public ItemInteractionState interactionState;

		[NonSerialized]
		public bool inBubble;

		[NonSerialized]
		public BoardDrawOrder boardDrawOrder;

		[NonSerialized]
		public bool isTagSinkItemOn;

		[NonSerialized]
		public string currentTagSinkItemKey;

		[NonSerialized]
		public ItemEffectBubbleBonus bubbleBonus;

		[NonSerialized]
		public Action onDragEnd;

		[NonSerialized]
		public HapticsController hapticsController;

		[NonSerialized]
		public PlayerClientCache _playerClientCache;

		[NonSerialized]
		public IMergeGoalItemQuery mergeGoalItemQuery;

		public static readonly ItemEffect[] tapHintAnimationItemEffects;

		[NonSerialized]
		public bool hasDecayWarningAnimation;

		[NonSerialized]
		public ShaderSaturationAnimation saturationAnimation;

		[NonSerialized]
		public Dictionary<ItemEffect, BounceTowardsAnimation> sinkTagEffectHandlers;

		[NonSerialized]
		public DragTowardsAnimation dragTowardsEffectHandler;

		public static bool DebugInitializeQrImage
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool IsActiveOnBoard { get; set; }

		public IPoolsManager PoolsManager { get; set; }

		public IItemDefinition CurrentItem => null;

		public static event Action<bool> QrImagesToggled
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void Awake()
		{
		}

		public void OnDestroy()
		{
		}

		public void DragEnded()
		{
		}

		public void SetStartCoordinate(int x, int y)
		{
		}

		public void StopDrag()
		{
		}

		public void ResetAndMoveTween(Vector2 uiPosition, float animationDuration, Ease animationEasing)
		{
		}

		public void ResetAndMoveTween(Vector2 uiPosition, float animationDuration, Ease animationEasing, Action action)
		{
		}

		public void InitTransform(Transform parent, Vector3 resolutionCorrectedItemBoardScale, Vector2 localPos)
		{
		}

		public ItemVisibility GetItemVisibility()
		{
			return default(ItemVisibility);
		}

		public BoardDrawOrder GetBoardDrawOrder()
		{
			return default(BoardDrawOrder);
		}

		public void Initialize(IPoolsManager poolsManager, IItemDefinition newItem, ItemVisibility visibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState, IPlayer player, PlayerClientCache playerClientCache, HapticsController hapticsController, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption, IMergeGoalItemQuery mergeGoalItemQuery = null)
		{
		}

		public static string GetSkinName(SpineHandler spineHandler, IItemDefinition item, BoardItemFlags flags)
		{
			return null;
		}

		public void SetupItemAnimations(IItemDefinition item)
		{
		}

		public void CreateItem(IItemDefinition newItem, BoardItemFlags flags)
		{
		}

		public void ChangeItemTo(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags)
		{
		}

		public void StartFromPartialVisibleToVisibleProcess(IItemDefinition itemDefinition, ItemVisibility newVisibility, BoardItemFlags flags)
		{
		}

		public void StartFromHiddenToPartialVisibleProcess(IItemDefinition itemDefinition, ItemVisibility newVisibility, BoardItemFlags flags)
		{
		}

		public SpineHandler InitializeItem(string tagToGetFromPool, Transform parentToThis)
		{
			return null;
		}

		public void Dismantle()
		{
		}

		public void UseRandomSkin()
		{
		}

		public void SetDraggable(bool isDraggable)
		{
		}

		public void SetSelectable(bool isSelectable)
		{
		}

		public void RemoveFromBubble()
		{
		}

		public void RefreshEffectHandlerDrawOrder(ItemEffect itemEffect)
		{
		}

		public void PlayAnimationOnce(ItemEffect itemEffect, Action callAfterRemove = null, float startDelay = 0f)
		{
		}

		public void PlayLoopingAnimation(ItemEffect itemEffect)
		{
		}

		public void StopLoopingAnimation(ItemEffect itemEffect)
		{
		}

		public void AddImageEffect(IPlayer player, ItemEffect itemEffect, MergeItem mergeItem = null)
		{
		}

		public void RemoveImageEffect(ItemEffect itemEffect)
		{
		}

		public void AddUIObjectEffect(ItemEffect itemEffect, MergeItem mergeItem = null)
		{
		}

		public void RemoveUIObjectEffect(ItemEffect itemEffect)
		{
		}

		public void AddChildEffect(ItemEffect itemEffect, MergeItem mergeItem = null)
		{
		}

		public void RemoveChildEffect(ItemEffect itemEffect)
		{
		}

		public void PlayAutoSpawnAnimation()
		{
		}

		public void PlayManuallySpawnAnimation()
		{
		}

		public void PlaySelectAnimation()
		{
		}

		public void PlayMergeAppear()
		{
		}

		public void PlayTimeSkip(float startDelay, Action onFinished = null)
		{
		}

		public void PlayMergeOut()
		{
		}

		public void PlayLevelUp()
		{
		}

		public void PlayDecay(Action callAfterRemove)
		{
		}

		public void PlaySell(Action callAfterRemove)
		{
		}

		public void PlayCollect(Action callAfterRemove)
		{
		}

		public void PlayTakenFromInventory()
		{
		}

		public void PlayRemoveDust()
		{
		}

		public void PlayBubbleOpened()
		{
		}

		public void PlayTransformAppear()
		{
		}

		public void PlayAutoSpawnedAnimation(bool dragIsOngoing = false)
		{
		}

		public void PlayManuallySpawnedAnimation(bool dragIsOngoing = false)
		{
		}

		public void PlayTapHintAnimation(TapHintAnimationType type, MergeItem mergeItem = null, Action transitionAction = null)
		{
		}

		public void StopTapHintAnimation()
		{
		}

		public void StopAllTapHinAnimations()
		{
		}

		public void PlayZeroCostActivationAnimation()
		{
		}

		public void StopZeroCostActivationAnimation()
		{
		}

		public bool TryGetActiveTapHintAnimation(out ItemEffect itemEffect, out ItemEffectHandler itemEffectHandler)
		{
			itemEffect = default(ItemEffect);
			itemEffectHandler = null;
			return false;
		}

		public void PlayReadyToAutoSpawnAnimation()
		{
		}

		public void StopReadyToAutoSpawnAnimation()
		{
		}

		public void PlayMergeGoalItemAnimation()
		{
		}

		public void StopMergeGoalItemAnimation()
		{
		}

		public void PlayDailyTaskItemAnimation(IPlayer player)
		{
		}

		public void StopDailyTaskItemAnimation()
		{
		}

		public void PlayBoardEventTaskItemAnimation(IPlayer player, MergeItem mergeItem = null)
		{
		}

		public void StopBoardEventTaskAnimation()
		{
		}

		public void PlaySeasonalBoardEventTaskItemAnimation(IPlayer player, MergeItem mergeItem = null)
		{
		}

		public void StopSeasonalBoardEventTaskAnimation()
		{
		}

		public void PlayGarageCleanupEventTaskItemAnimation(IPlayer player)
		{
		}

		public void StopGarageCleanupEventTaskAnimation()
		{
		}

		public void PlayInBubbleAnimation(BubbleState bubbleState, IPlayer player, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption, IItemDefinition definition)
		{
		}

		public void StopInBubbleAnimation()
		{
		}

		public void PlayBoostedAnimation()
		{
		}

		public void StopBoostedAnimation()
		{
		}

		public void PlayChestCanBeOpenedAnimation()
		{
		}

		public void StopChestCanBeOpenedAnimation()
		{
		}

		public void PlayChestCanBeLootedAnimation()
		{
		}

		public void StopChestCanBeLootedAnimation()
		{
		}

		public static string OpenChestToDefaultSkin(string openChestSkin)
		{
			return null;
		}

		public static bool IsOpenChestSkin(string skin)
		{
			return false;
		}

		public static bool IsDefaultSkin(string skin)
		{
			return false;
		}

		public void PlayCycleDelayAnimation(MergeItem mergeItem)
		{
		}

		public void StopCycleDelayAnimation()
		{
		}

		public void UpdateCycleDelayProgress(float progress)
		{
		}

		public bool IsCycleDelayAnimationOn()
		{
			return false;
		}

		public void PlayDecayTimerAnimation(MergeItem mergeItem)
		{
		}

		public void StopDecayTimerAnimation()
		{
		}

		public void UpdateDecayTimerProgress(float progress)
		{
		}

		public bool IsDecayTimerAnimationOn()
		{
			return false;
		}

		public void PlaySinkProgressBarAnimation()
		{
		}

		public void StopSinkProgressBarAnimation()
		{
		}

		public void UpdateSinkProgressBarProgress(float progress)
		{
		}

		public bool IsSinkProgressBarAnimationOn()
		{
			return false;
		}

		public void PlayArtifactProgressBarAnimation(IPlayer player, IMergeItem mergeItem = null)
		{
		}

		public void StopArtifactProgressBarAnimation()
		{
		}

		public void UpdateArtifactProgressBarProgress(float progress)
		{
		}

		public void UpdateArtifactProgressBarPreview(float previewValue)
		{
		}

		public void UpdateArtifactMinLevel(int level)
		{
		}

		public void UpdateArtifactLevel(int level)
		{
		}

		public bool IsArtifactProgressBarAnimationOn()
		{
			return false;
		}

		public void PlayArtifactParticleAnimation()
		{
		}

		public void StopArtifactParticleAnimation()
		{
		}

		public void PlayArtifactCanBeMergedAnimation(IPlayer player)
		{
		}

		public void StopArtifactCanBeMergedAnimation()
		{
		}

		public bool IsArtifactCanBeMergedAnimationOn()
		{
			return false;
		}

		public void PlayArtifactMergeCombine(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags)
		{
		}

		public void PlayMergeHintAnimation()
		{
		}

		public void StopMergeHintAnimation()
		{
		}

		public void PlaySinkHintAnimation()
		{
		}

		public void StopSinkHintAnimation()
		{
		}

		public void PlaySinkHintTowards(Vector3 targetPosition)
		{
		}

		public void StopSinkHintTowards()
		{
		}

		public void PlayDragTowardsHint(Vector3 startPosition, Vector3 targetPosition)
		{
		}

		public void StopDragTowardsHint()
		{
		}

		public void PlayTagSinkItemAnimation(IPlayer player, string key, MergeItem mergeItem)
		{
		}

		public void StopTagSinkItemAnimation()
		{
		}

		public bool HasDecayWarningAnimation()
		{
			return false;
		}

		public void PlayDecayWarningAnimation()
		{
		}

		public void StopDecayWarningAnimation()
		{
		}

		public void PlayMergeCombine(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags)
		{
		}

		public void PlayTransformOut()
		{
		}

		public void PlayTransformOutAndAppear(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags, MergeItem mergeItem = null)
		{
		}

		public void PlaySplash(SplashType splashType)
		{
		}

		public static ItemEffect GetSplashEffect(SplashType splashType)
		{
			return default(ItemEffect);
		}

		public void PlayFishCatch(FishRarity rarity, LuckyType luckyType)
		{
		}

		public void StopFishCatch(LuckyType luckyType)
		{
		}

		public bool IsFishCatchActive()
		{
			return false;
		}

		public void PlayFishingRodSpawn(FishingRodRarity rarity)
		{
		}

		public void StopFishingRodSpawn()
		{
		}

		public bool IsFishingRodSpawnActive()
		{
			return false;
		}

		public void PlayFishRarityTooltip(FishRarity rarity)
		{
		}

		public void StopFishRarityTooltip()
		{
		}

		public bool IsFishRarityTooltipActive()
		{
			return false;
		}

		public void SetLevelUpMergeChainActive(bool active)
		{
		}

		public bool IsLevelUpMergeChainActive()
		{
			return false;
		}

		public void SetAuxEnergyAttachmentActive(bool active)
		{
		}

		public bool IsAuxEnergyAttachmentActive()
		{
			return false;
		}

		public void UpdateAuxEnergyAttachment(EnergyType energyType)
		{
		}

		public EnergyType? GetActiveAuxEnergyAttachmentEnergyType()
		{
			return null;
		}

		public void SetItemSinkToolTipAttachmentActive(bool active)
		{
		}

		public bool IsItemSinkTooltipActive()
		{
			return false;
		}

		public void UpdateSinkItemToolTipContent(IPlayer player, MergeItem mergeItem, BoardItemHandler boardItemHandler, SinkItemToolTipContext? context)
		{
		}

		public void PassMergeItemToItemEffect(ItemEffect effect, MergeItem item, BoardItemHandler boardItemHandler, object context = null)
		{
		}

		public void UpdateDigEventEnergyContent(MergeItem mergeItem, BoardItemHandler boardItemHandler, bool active)
		{
		}

		public void SetEnergyDisplayActive(bool active)
		{
		}

		public void UpdateEnergyDisplay(EnergyType type, long amount)
		{
		}

		public void UpdateEnergyDisplay(IPlayer player, CoreSupportEventTokenId tokenId, long amount)
		{
		}

		public void SetEnergyDisplayUpdateStatus(bool ignoreUpdates)
		{
		}

		public bool IsEnergyDisplayActive()
		{
			return false;
		}

		public void SetLimitedItemCountDisplayActive(bool active)
		{
		}

		public void UpdateLimitedItemCountDisplay(IItemDefinition itemDefinition, int count, int limit)
		{
		}

		public bool IsLimitedItemCountDisplayActive()
		{
			return false;
		}

		public bool IsChargeCountTooltipActive()
		{
			return false;
		}

		public void SetChargeCountTooltipActive(bool active)
		{
		}

		public void UpdateChargeCountTooltip(int value)
		{
		}

		public void PlaySpawnEffect(ItemEffect effect)
		{
		}

		public void DeactivateSpawnEffect(ItemEffect effect)
		{
		}

		public void ActivateItemEffectBool(ItemEffect effect)
		{
		}

		public void DeactivateItemEffectBool(ItemEffect effect)
		{
		}

		public bool IsEffectOn(ItemEffect effect)
		{
			return false;
		}

		public bool IsTapHintAnimationOn()
		{
			return false;
		}

		public bool IsTapHintAnimationOn(TapHintAnimationType type)
		{
			return false;
		}

		public bool IsReadyToAutoSpawnAnimationOn()
		{
			return false;
		}

		public bool IsMergeGoalItemAnimationOn()
		{
			return false;
		}

		public bool IsTagSinkItemOn()
		{
			return false;
		}

		public bool IsBoostedAnimationOn()
		{
			return false;
		}

		public bool IsChestCanBeOpenedAnimationOn()
		{
			return false;
		}

		public bool IsChestCanBeLootedAnimationOn()
		{
			return false;
		}

		public bool IsZeroCostActivationAnimationOn()
		{
			return false;
		}

		public bool IsDailyTaskItemAnimationOn()
		{
			return false;
		}

		public bool IsSeasonalBoardEventTaskItemAnimationOn()
		{
			return false;
		}

		public bool IsBoardEventTaskItemAnimationOn()
		{
			return false;
		}

		public bool IsGarageCleanupEventTaskItemAnimationOn()
		{
			return false;
		}

		public void ReturnToNormalBoardDrawOrder()
		{
		}

		public void EmptyAllAnimations()
		{
		}

		public void PlayItemActivationEffect()
		{
		}

		public ItemEffectHandler InstantiateNewEffectIfNeeded(ItemEffect itemEffect)
		{
			return null;
		}

		public void DeinitEffect(ItemEffectHandler itemEffectHandler)
		{
		}

		public void InstantiateNewImageIfNeeded(IPlayer player, ItemEffect itemEffect, MergeItem mergeItem = null)
		{
		}

		public void DeinitImageEffect(ItemEffect itemEffect)
		{
		}

		public ItemEffectHandler InitiateNewItemEffectParticleObjectIfNeeded(string poolTag)
		{
			return null;
		}

		public ItemEffectHandler InstantiateNewEffectUIObjectIfNeeded(ItemEffect itemEffect, MergeItem mergeItem = null)
		{
			return null;
		}

		public void DeinitEffectUIObject(ItemEffect itemEffect)
		{
		}

		public BounceTowardsAnimation InstantiateNewSinkTagEffectIfNeeded(ItemEffect itemEffect)
		{
			return null;
		}

		public DragTowardsAnimation InstantiateNewDragTowardsEffectIfNeeded(ItemEffect itemEffect)
		{
			return null;
		}

		public ShaderSaturationAnimation InstantiateNewSaturationEffect(ItemEffect itemEffect)
		{
			return null;
		}

		public void InstantiateNewChildEffectIfNeeded(ItemEffect itemEffect)
		{
		}

		public void DeinitChildEffect(ItemEffect itemEffect)
		{
		}

		public void SetBackground()
		{
		}

		public void SetBackground(bool isEnabled)
		{
		}

		public void TryUpdateBubble(PlayerModel player, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption)
		{
		}
	}
}
