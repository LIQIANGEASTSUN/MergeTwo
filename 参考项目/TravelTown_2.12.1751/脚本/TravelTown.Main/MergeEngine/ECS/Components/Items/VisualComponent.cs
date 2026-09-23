using System;
using DG.Tweening;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Data;
using MergeEngine.Model;
using Merger.Boosters.Declarations.Enums;
using RemoteSprites.Scripts.Runtime;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.ECS.Components.Items
{
	public class VisualComponent : ComponentBase<VisualCapability>, IVisualComponent
	{
		public bool ShowUnlockTimer;

		public bool ShowCooldownTimer;

		public bool IsCooldownBlocked;

		public bool IsLockTimerBlocked;

		public static bool DisplayDebugInfo;

		public string DebugInfo;

		[NonSerialized]
		public LockedComponent _lockedComponent;

		[NonSerialized]
		public MergeComponent _mergeComponent;

		[NonSerialized]
		public InteractionComponent _interactionComponent;

		[NonSerialized]
		public CombiningComponent _combiningComponent;

		[NonSerialized]
		public ITimeDurationComponent _timeDurationComponent;

		public float InteractionIconAlpha { get; set; }

		public bool ShowLock => false;

		public bool ShowBox => false;

		public bool LockedByLevel => false;

		public int LevelLock => 0;

		public bool Bubbled => false;

		public bool Meteor => false;

		public bool HasAnyLock => false;

		public bool OnlyLock => false;

		public bool IsSpecificItemMerge => false;

		public string SpecificItemID => null;

		public bool IsFeedingProducer => false;

		public int FeedingMaxLevel => 0;

		public int FeedingLevel => 0;

		public bool ShowOutline { get; set; }

		public bool ShowMergingParticles { get; set; }

		public bool ShowPossibleComboAnimation { get; set; }

		public MutableBindableProperty<bool> ShowCombinationInParticle { get; set; }

		public bool ShowTimer => false;

		public bool EnableDigitTimer { get; set; }

		public bool ShowDigitTimer => false;

		public double TimeLeft => 0.0;

		public bool ShowTimeDurationLocked => false;

		public float TimerProgressValue { get; set; }

		public BoardItemTimerColor TimerColor { get; set; }

		public bool ShowInteractionAvailable { get; set; }

		public bool InteractionCostResource { get; set; }

		public PlayerResourceEnum InteractionResourceCost { get; set; }

		public bool CanAffordInteractionCost { get; set; }

		public float TimerValue { get; set; }

		public bool Hinting { get; set; }

		public Vector2 HintingDirection { get; set; }

		public bool HintToLocalPosition { get; set; }

		public bool IsConsumeHint { get; set; }

		public bool IsProducerHint { get; set; }

		public bool IsDragged { get; set; }

		public OrderObjectiveHintMode ShowOrderObjectiveHint { get; set; }

		public bool IsDragLocked => false;

		public bool IsTweened { get; set; }

		public bool IsProduced { get; set; }

		public bool KeepManualSpriteScale { get; set; }

		public bool IsMaxBoosted { get; set; }

		public bool IsMaxBoostedItemLanded { get; set; }

		public bool ShouldHideItem { get; set; }

		public bool InventoryLandAnimationPlaying { get; set; }

		public bool TriggerEnterAnimation { get; set; }

		public float MergeAnimationMultiplier { get; set; }

		public RemoteSpriteLocation SaleBubbleIcon { get; set; }

		public int BlasterableTier => 0;

		public bool IsBlasterable => false;

		public bool CanPlayBoosterAnimation { get; set; }

		public bool ActivateBoosterSilently { get; set; }

		public bool PlayBoardItemOutAnimation { get; set; }

		public bool StartTimerFlying { get; set; }

		public Vector2 FlyingEndpoint { get; set; }

		public float FlyingTime { get; set; }

		public float FlyingDelay { get; set; }

		public float FakeTimerAppearanceDelay { get; set; }

		public Action BoosterPulse { get; set; }

		public Action OnLastTimerHit { get; set; }

		public BoosterType BoosterType { get; set; }

		public MutableBindableProperty<bool> PlaySwirlParticles { get; }

		public Ease FlyingEase { get; set; }

		public Func<bool> IsPowerBoostOn { get; set; }

		public bool IsPowerBoostable { get; set; }

		public MutableBindableProperty<bool> Shaking { get; }

		public AssetReferenceT<Sprite> InteractionCostIcon { get; set; }

		public ILockedComponent LockedComponent => null;

		public IIdComponent IdComponent => null;

		public ITimeLimitedActivationComponent TimeLimitedActivationComponent => null;

		public MergeComponent MergeComponent => null;

		public InteractionComponent InteractionComponent => null;

		public CombiningComponent CombiningComponent => null;

		public ITimeDurationComponent TimeDurationComponent
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public ICollectableComponent CollectableComponent => null;

		public AssetReferenceT<Sprite> SpriteAsset { get; set; }

		public GameObject AnimatedSprite { get; set; }

		public IAsset AnimatedAsset { get; set; }

		public IAsset PowerBoostAnimationPrefab { get; set; }

		public Action OnManualUnlock { get; set; }

		public bool DisableTrasitionIn { get; set; }

		public bool ShowCombinationProduce { get; set; }

		public string TransitionInName { get; set; }

		public string TransitionOutName { get; set; }

		public bool PlayMeteorInAnimation { get; set; }

		public bool PlayMeteorOutAnimation { get; set; }

		public bool PlayMeteorMergeAnimation { get; set; }

		public bool IsProducedExcitement { get; set; }

		public bool PlayProducedExcitementInAnimation { get; set; }

		public BoardItemPosition StartMeteorBoardItemPosition { get; set; }

		public AssetReferenceT<Sprite> ExcitementSprite { get; set; }

		public bool IsBooster => false;

		public VisualComponent(VisualCapability capability, Entity entity)
			: base((VisualCapability)default(_00210), (Entity)null)
		{
		}
	}
}
