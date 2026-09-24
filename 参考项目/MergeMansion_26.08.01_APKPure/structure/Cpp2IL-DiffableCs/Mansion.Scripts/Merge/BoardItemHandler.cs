namespace Merge;

public class BoardItemHandler : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass100_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public bool dragIsOngoing; //Field offset: 0x20

		public <>c__DisplayClass100_0() { }

		internal void <PlayManuallySpawnedAnimation>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass102_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18

		public <>c__DisplayClass102_0() { }

		internal void <StopTapHintAnimation>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass103_0
	{
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x10
		public BoardItemHandler <>4__this; //Field offset: 0x18

		public <>c__DisplayClass103_0() { }

		internal void <StopAllTapHinAnimations>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass155_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public IItemDefinition itemDefinition; //Field offset: 0x20
		public ItemVisibility visibility; //Field offset: 0x28
		public BoardItemFlags flags; //Field offset: 0x2C
		public ItemEffectHandler fxEffectHandler; //Field offset: 0x30

		public <>c__DisplayClass155_0() { }

		internal void <PlayArtifactMergeCombine>b__0() { }

		internal void <PlayArtifactMergeCombine>b__1() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass171_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public IItemDefinition itemDefinition; //Field offset: 0x20
		public ItemVisibility visibility; //Field offset: 0x28
		public BoardItemFlags flags; //Field offset: 0x2C

		public <>c__DisplayClass171_0() { }

		internal void <PlayMergeCombine>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass173_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public IItemDefinition itemDefinition; //Field offset: 0x20
		public ItemVisibility visibility; //Field offset: 0x28
		public BoardItemFlags flags; //Field offset: 0x2C

		public <>c__DisplayClass173_0() { }

		internal void <PlayTransformOutAndAppear>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass76_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public Action callAfterRemove; //Field offset: 0x20

		public <>c__DisplayClass76_0() { }

		internal void <PlayAnimationOnce>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass78_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18

		public <>c__DisplayClass78_0() { }

		internal void <StopLoopingAnimation>b__0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass99_0
	{
		public BoardItemHandler <>4__this; //Field offset: 0x10
		public ItemEffectHandler itemEffectHandler; //Field offset: 0x18
		public bool dragIsOngoing; //Field offset: 0x20

		public <>c__DisplayClass99_0() { }

		internal void <PlayAutoSpawnedAnimation>b__0() { }

	}

	private const string SetHalfFogEvent = "SetHalfFog"; //Field offset: 0x0
	private const string TransitionFullFogToHalfFogEvent = "TransitionFullFogToHalfFog"; //Field offset: 0x0
	private const string TransitionToHalfFogEvent = "TransitionToHalfFog"; //Field offset: 0x0
	private const string TransitionFullFogToClearEvent = "TransitionFullFogToClear"; //Field offset: 0x0
	public static readonly HashSet<ItemEffect> blockedEffects; //Field offset: 0x0
	private static readonly String[] fogSkinNames; //Field offset: 0x8
	private static readonly Int32[] skinRandomIndexes; //Field offset: 0x10
	private static int globalFogSkinIndex; //Field offset: 0x18
	private static bool initializeQrImage; //Field offset: 0x1C
	[CompilerGenerated]
	private static Action<Boolean> QrImagesToggled; //Field offset: 0x20
	private static readonly ItemEffect[] tapHintAnimationItemEffects; //Field offset: 0x28
	public GameObject backGround; //Field offset: 0x20
	private readonly Dictionary<ItemEffect, ItemEffectHandler> itemEffectHandlers; //Field offset: 0x28
	private readonly Dictionary<ItemEffect, GameObject> itemImageEffectHandlers; //Field offset: 0x30
	private readonly Dictionary<ItemEffect, GameObject> itemChildEffectHandlers; //Field offset: 0x38
	private AnimationRunner itemActualAnimationRunner; //Field offset: 0x40
	private AnimationRunner possibleFogAnimationRunner; //Field offset: 0x48
	private SpineHandler itemActualSpineHandler; //Field offset: 0x50
	private SpineHandler possibleFogSpineHandler; //Field offset: 0x58
	private TooltippedObject possibleFogTooltip; //Field offset: 0x60
	private ItemEffectHandler activationParticleHandler; //Field offset: 0x68
	private Draggable draggable; //Field offset: 0x70
	private RectTransform rectTransform; //Field offset: 0x78
	private Text text; //Field offset: 0x80
	private ItemEffectsFollower actualItemEffectFollower; //Field offset: 0x88
	private BoardItemFlags flags; //Field offset: 0x90
	private IItemDefinition currentItemType; //Field offset: 0x98
	private ItemVisibility itemVisibility; //Field offset: 0xA0
	private ItemInteractionState interactionState; //Field offset: 0xA4
	private bool inBubble; //Field offset: 0xA8
	private BoardDrawOrder boardDrawOrder; //Field offset: 0xAC
	private bool isTagSinkItemOn; //Field offset: 0xB0
	private string currentTagSinkItemKey; //Field offset: 0xB8
	private ItemEffectBubbleBonus bubbleBonus; //Field offset: 0xC0
	[CompilerGenerated]
	private bool <IsActiveOnBoard>k__BackingField; //Field offset: 0xC8
	private Action onDragEnd; //Field offset: 0xD0
	[CompilerGenerated]
	private IPoolsManager <PoolsManager>k__BackingField; //Field offset: 0xD8
	private HapticsController hapticsController; //Field offset: 0xE0
	private PlayerClientCache _playerClientCache; //Field offset: 0xE8
	private IMergeGoalItemQuery mergeGoalItemQuery; //Field offset: 0xF0
	private bool hasDecayWarningAnimation; //Field offset: 0xF8
	private ShaderSaturationAnimation saturationAnimation; //Field offset: 0x100
	private Dictionary<ItemEffect, BounceTowardsAnimation> sinkTagEffectHandlers; //Field offset: 0x108
	private DragTowardsAnimation dragTowardsEffectHandler; //Field offset: 0x110

	private static event Action<Boolean> QrImagesToggled
	{
		[CompilerGenerated]
		private add { } //Length: 244
		[CompilerGenerated]
		private remove { } //Length: 244
	}

	public IItemDefinition CurrentItem
	{
		 get { } //Length: 8
	}

	public static bool DebugInitializeQrImage
	{
		 get { } //Length: 88
		 set { } //Length: 156
	}

	public private bool IsActiveOnBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private IPoolsManager PoolsManager
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static BoardItemHandler() { }

	public BoardItemHandler() { }

	private void ActivateItemEffectBool(ItemEffect effect) { }

	[CompilerGenerated]
	private static void add_QrImagesToggled(Action<Boolean> value) { }

	private void AddChildEffect(ItemEffect itemEffect, MergeItem mergeItem = null) { }

	private void AddImageEffect(IPlayer player, ItemEffect itemEffect, MergeItem mergeItem = null) { }

	private void AddUIObjectEffect(ItemEffect itemEffect, MergeItem mergeItem = null) { }

	private void Awake() { }

	private void ChangeItemTo(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags) { }

	private void CreateItem(IItemDefinition newItem, BoardItemFlags flags) { }

	private void DeactivateItemEffectBool(ItemEffect effect) { }

	public void DeactivateSpawnEffect(ItemEffect effect) { }

	private void DeinitChildEffect(ItemEffect itemEffect) { }

	private void DeinitEffect(ItemEffectHandler itemEffectHandler) { }

	private void DeinitEffectUIObject(ItemEffect itemEffect) { }

	private void DeinitImageEffect(ItemEffect itemEffect) { }

	public void Dismantle() { }

	public void DragEnded() { }

	private void EmptyAllAnimations() { }

	public IItemDefinition get_CurrentItem() { }

	public static bool get_DebugInitializeQrImage() { }

	[CompilerGenerated]
	public bool get_IsActiveOnBoard() { }

	[CompilerGenerated]
	private IPoolsManager get_PoolsManager() { }

	public Nullable<EnergyType> GetActiveAuxEnergyAttachmentEnergyType() { }

	public BoardDrawOrder GetBoardDrawOrder() { }

	public ItemVisibility GetItemVisibility() { }

	private static string GetSkinName(SpineHandler spineHandler, IItemDefinition item, BoardItemFlags flags) { }

	private static ItemEffect GetSplashEffect(SplashType splashType) { }

	public bool HasDecayWarningAnimation() { }

	public void Initialize(IPoolsManager poolsManager, IItemDefinition newItem, ItemVisibility visibility, ItemSource itemSource, BoardItemFlags flags, BubbleState bubbleState, IPlayer player, PlayerClientCache playerClientCache, HapticsController hapticsController, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption, IMergeGoalItemQuery mergeGoalItemQuery = null) { }

	private SpineHandler InitializeItem(string tagToGetFromPool, Transform parentToThis) { }

	private ItemEffectHandler InitiateNewItemEffectParticleObjectIfNeeded(string poolTag) { }

	public void InitTransform(Transform parent, Vector3 resolutionCorrectedItemBoardScale, Vector2 localPos) { }

	private void InstantiateNewChildEffectIfNeeded(ItemEffect itemEffect) { }

	private DragTowardsAnimation InstantiateNewDragTowardsEffectIfNeeded(ItemEffect itemEffect) { }

	private ItemEffectHandler InstantiateNewEffectIfNeeded(ItemEffect itemEffect) { }

	private ItemEffectHandler InstantiateNewEffectUIObjectIfNeeded(ItemEffect itemEffect, MergeItem mergeItem = null) { }

	private void InstantiateNewImageIfNeeded(IPlayer player, ItemEffect itemEffect, MergeItem mergeItem = null) { }

	private ShaderSaturationAnimation InstantiateNewSaturationEffect(ItemEffect itemEffect) { }

	private BounceTowardsAnimation InstantiateNewSinkTagEffectIfNeeded(ItemEffect itemEffect) { }

	public bool IsArtifactCanBeMergedAnimationOn() { }

	public bool IsArtifactProgressBarAnimationOn() { }

	public bool IsAuxEnergyAttachmentActive() { }

	public bool IsBoardEventTaskItemAnimationOn() { }

	public bool IsBoostedAnimationOn() { }

	public bool IsChargeCountTooltipActive() { }

	public bool IsChestCanBeLootedAnimationOn() { }

	public bool IsChestCanBeOpenedAnimationOn() { }

	public bool IsCycleDelayAnimationOn() { }

	public bool IsDailyTaskItemAnimationOn() { }

	public bool IsDecayTimerAnimationOn() { }

	private static bool IsDefaultSkin(string skin) { }

	private bool IsEffectOn(ItemEffect effect) { }

	public bool IsEnergyDisplayActive() { }

	public bool IsFishCatchActive() { }

	public bool IsFishingRodSpawnActive() { }

	public bool IsFishRarityTooltipActive() { }

	public bool IsGarageCleanupEventTaskItemAnimationOn() { }

	public bool IsItemSinkTooltipActive() { }

	public bool IsLevelUpMergeChainActive() { }

	public bool IsLimitedItemCountDisplayActive() { }

	public bool IsMergeGoalItemAnimationOn() { }

	private static bool IsOpenChestSkin(string skin) { }

	public bool IsReadyToAutoSpawnAnimationOn() { }

	public bool IsSeasonalBoardEventTaskItemAnimationOn() { }

	public bool IsSinkProgressBarAnimationOn() { }

	public bool IsTagSinkItemOn() { }

	public bool IsTapHintAnimationOn(TapHintAnimationType type) { }

	public bool IsTapHintAnimationOn() { }

	public bool IsZeroCostActivationAnimationOn() { }

	private void OnDestroy() { }

	private static string OpenChestToDefaultSkin(string openChestSkin) { }

	private void PassMergeItemToItemEffect(ItemEffect effect, MergeItem item, BoardItemHandler boardItemHandler, object context = null) { }

	private void PlayAnimationOnce(ItemEffect itemEffect, Action callAfterRemove = null, float startDelay = 0) { }

	public void PlayArtifactCanBeMergedAnimation(IPlayer player) { }

	public void PlayArtifactMergeCombine(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags) { }

	public void PlayArtifactParticleAnimation() { }

	public void PlayArtifactProgressBarAnimation(IPlayer player, IMergeItem mergeItem = null) { }

	public void PlayAutoSpawnAnimation() { }

	public void PlayAutoSpawnedAnimation(bool dragIsOngoing = false) { }

	public void PlayBoardEventTaskItemAnimation(IPlayer player, MergeItem mergeItem = null) { }

	public void PlayBoostedAnimation() { }

	private void PlayBubbleOpened() { }

	public void PlayChestCanBeLootedAnimation() { }

	public void PlayChestCanBeOpenedAnimation() { }

	public void PlayCollect(Action callAfterRemove) { }

	public void PlayCycleDelayAnimation(MergeItem mergeItem) { }

	public void PlayDailyTaskItemAnimation(IPlayer player) { }

	public void PlayDecay(Action callAfterRemove) { }

	public void PlayDecayTimerAnimation(MergeItem mergeItem) { }

	public void PlayDecayWarningAnimation() { }

	public void PlayDragTowardsHint(Vector3 startPosition, Vector3 targetPosition) { }

	public void PlayFishCatch(FishRarity rarity, LuckyType luckyType) { }

	public void PlayFishingRodSpawn(FishingRodRarity rarity) { }

	public void PlayFishRarityTooltip(FishRarity rarity) { }

	public void PlayGarageCleanupEventTaskItemAnimation(IPlayer player) { }

	private void PlayInBubbleAnimation(BubbleState bubbleState, IPlayer player, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption, IItemDefinition definition) { }

	public void PlayItemActivationEffect() { }

	public void PlayLevelUp() { }

	private void PlayLoopingAnimation(ItemEffect itemEffect) { }

	public void PlayManuallySpawnAnimation() { }

	public void PlayManuallySpawnedAnimation(bool dragIsOngoing = false) { }

	private void PlayMergeAppear() { }

	public void PlayMergeCombine(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags) { }

	public void PlayMergeGoalItemAnimation() { }

	public void PlayMergeHintAnimation() { }

	public void PlayMergeOut() { }

	public void PlayReadyToAutoSpawnAnimation() { }

	public void PlayRemoveDust() { }

	public void PlaySeasonalBoardEventTaskItemAnimation(IPlayer player, MergeItem mergeItem = null) { }

	public void PlaySelectAnimation() { }

	public void PlaySell(Action callAfterRemove) { }

	public void PlaySinkHintAnimation() { }

	public void PlaySinkHintTowards(Vector3 targetPosition) { }

	public void PlaySinkProgressBarAnimation() { }

	public void PlaySpawnEffect(ItemEffect effect) { }

	public void PlaySplash(SplashType splashType) { }

	public void PlayTagSinkItemAnimation(IPlayer player, string key, MergeItem mergeItem) { }

	public void PlayTakenFromInventory() { }

	public void PlayTapHintAnimation(TapHintAnimationType type, MergeItem mergeItem = null, Action transitionAction = null) { }

	public void PlayTimeSkip(float startDelay, Action onFinished = null) { }

	private void PlayTransformAppear() { }

	public void PlayTransformOut() { }

	public void PlayTransformOutAndAppear(IItemDefinition itemDefinition, ItemVisibility visibility, BoardItemFlags flags, MergeItem mergeItem = null) { }

	public void PlayZeroCostActivationAnimation() { }

	public void RefreshEffectHandlerDrawOrder(ItemEffect itemEffect) { }

	[CompilerGenerated]
	private static void remove_QrImagesToggled(Action<Boolean> value) { }

	private void RemoveChildEffect(ItemEffect itemEffect) { }

	public void RemoveFromBubble() { }

	private void RemoveImageEffect(ItemEffect itemEffect) { }

	private void RemoveUIObjectEffect(ItemEffect itemEffect) { }

	public void ResetAndMoveTween(Vector2 uiPosition, float animationDuration, Ease animationEasing, Action action) { }

	public void ResetAndMoveTween(Vector2 uiPosition, float animationDuration, Ease animationEasing) { }

	private void ReturnToNormalBoardDrawOrder() { }

	public static void set_DebugInitializeQrImage(bool value) { }

	[CompilerGenerated]
	private void set_IsActiveOnBoard(bool value) { }

	[CompilerGenerated]
	private void set_PoolsManager(IPoolsManager value) { }

	public void SetAuxEnergyAttachmentActive(bool active) { }

	public void SetBackground() { }

	public void SetBackground(bool isEnabled) { }

	public void SetChargeCountTooltipActive(bool active) { }

	public void SetDraggable(bool isDraggable) { }

	public void SetEnergyDisplayActive(bool active) { }

	public void SetEnergyDisplayUpdateStatus(bool ignoreUpdates) { }

	public void SetItemSinkToolTipAttachmentActive(bool active) { }

	public void SetLevelUpMergeChainActive(bool active) { }

	public void SetLimitedItemCountDisplayActive(bool active) { }

	public void SetSelectable(bool isSelectable) { }

	public void SetStartCoordinate(int x, int y) { }

	private void SetupItemAnimations(IItemDefinition item) { }

	public void StartFromHiddenToPartialVisibleProcess(IItemDefinition itemDefinition, ItemVisibility newVisibility, BoardItemFlags flags) { }

	public void StartFromPartialVisibleToVisibleProcess(IItemDefinition itemDefinition, ItemVisibility newVisibility, BoardItemFlags flags) { }

	public void StopAllTapHinAnimations() { }

	public void StopArtifactCanBeMergedAnimation() { }

	public void StopArtifactParticleAnimation() { }

	public void StopArtifactProgressBarAnimation() { }

	public void StopBoardEventTaskAnimation() { }

	public void StopBoostedAnimation() { }

	public void StopChestCanBeLootedAnimation() { }

	public void StopChestCanBeOpenedAnimation() { }

	public void StopCycleDelayAnimation() { }

	public void StopDailyTaskItemAnimation() { }

	public void StopDecayTimerAnimation() { }

	public void StopDecayWarningAnimation() { }

	public void StopDrag() { }

	public void StopDragTowardsHint() { }

	public void StopFishCatch(LuckyType luckyType) { }

	public void StopFishingRodSpawn() { }

	public void StopFishRarityTooltip() { }

	public void StopGarageCleanupEventTaskAnimation() { }

	private void StopInBubbleAnimation() { }

	private void StopLoopingAnimation(ItemEffect itemEffect) { }

	public void StopMergeGoalItemAnimation() { }

	public void StopMergeHintAnimation() { }

	public void StopReadyToAutoSpawnAnimation() { }

	public void StopSeasonalBoardEventTaskAnimation() { }

	public void StopSinkHintAnimation() { }

	public void StopSinkHintTowards() { }

	public void StopSinkProgressBarAnimation() { }

	public void StopTagSinkItemAnimation() { }

	public void StopTapHintAnimation() { }

	public void StopZeroCostActivationAnimation() { }

	private bool TryGetActiveTapHintAnimation(out ItemEffect itemEffect, out ItemEffectHandler itemEffectHandler) { }

	public void TryUpdateBubble(PlayerModel player, Option<ExtraSpawnBoardData> extraSpawnBoardDataOption) { }

	public void UpdateArtifactLevel(int level) { }

	public void UpdateArtifactMinLevel(int level) { }

	public void UpdateArtifactProgressBarPreview(float previewValue) { }

	public void UpdateArtifactProgressBarProgress(float progress) { }

	public void UpdateAuxEnergyAttachment(EnergyType energyType) { }

	public void UpdateChargeCountTooltip(int value) { }

	public void UpdateCycleDelayProgress(float progress) { }

	public void UpdateDecayTimerProgress(float progress) { }

	public void UpdateDigEventEnergyContent(MergeItem mergeItem, BoardItemHandler boardItemHandler, bool active) { }

	public void UpdateEnergyDisplay(IPlayer player, CoreSupportEventTokenId tokenId, long amount) { }

	public void UpdateEnergyDisplay(EnergyType type, long amount) { }

	public void UpdateLimitedItemCountDisplay(IItemDefinition itemDefinition, int count, int limit) { }

	public void UpdateSinkItemToolTipContent(IPlayer player, MergeItem mergeItem, BoardItemHandler boardItemHandler, Nullable<SinkItemToolTipContext> context) { }

	public void UpdateSinkProgressBarProgress(float progress) { }

	public void UseRandomSkin() { }

}

