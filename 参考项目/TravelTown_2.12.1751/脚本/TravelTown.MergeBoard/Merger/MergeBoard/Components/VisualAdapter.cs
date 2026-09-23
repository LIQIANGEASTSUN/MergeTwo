using System;
using ContextualizedECS;
using DG.Tweening;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using MergeEngine.Data;
using MergeEngine.ECS.Components.Items;
using MergeEngine.Model.Configuration;
using Merger.Boosters.Declarations.Enums;
using Merger.EventEnergy.Model;
using Merger.Game.Model;
using Merger.MergeBoard.Logic;
using Merger.MergeBoard.Models;
using Merger.PowerBoost.Providers;
using RemoteSprites.Scripts.Runtime;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Zenject;

namespace Merger.MergeBoard.Components
{
	public class VisualAdapter : IVisualComponent
	{
		[Inject]
		[NonSerialized]
		public IItemInteractionAffordabilityChecker _itemInteractionAffordabilityChecker;

		[Inject]
		[NonSerialized]
		public IEventEnergyAssetsModel _eventEnergyAssetsModel;

		[Inject]
		[NonSerialized]
		public ICooldownTimerConfigurationModel _cooldownTimerConfigurationModel;

		[Inject]
		[NonSerialized]
		public IMergeBoardModel _mergeBoardModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		[NonSerialized]
		public Entity _entity;

		[NonSerialized]
		public AssetReferenceT<Sprite> _defaultSpriteAsset;

		[NonSerialized]
		public AssetReferenceT<Sprite> _spriteAsset;

		[NonSerialized]
		public bool _isMaxLevelItem;

		[NonSerialized]
		public LockAdapter _lockAdapter;

		[NonSerialized]
		public bool _showMergingParticles;

		[NonSerialized]
		public RemoteSpriteLocation[] _chargableSpriteStates;

		public bool CanSpawn => false;

		public bool CanExpend => false;

		public bool ShowInteractionAvailable => false;

		public AssetReferenceT<Sprite> InteractionCostIcon => null;

		public bool CanAffordInteractionCost => false;

		public float InteractionIconAlpha => 0f;

		public bool LockedByLevel => false;

		public int LevelLock => 0;

		public Action OnManualUnlock { get; set; }

		public bool IsCollectableItemAtMaxLevel => false;

		public bool IsImmediateTool => false;

		public bool ShowMergingParticles
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool StartTimerFlying { get; set; }

		public Vector2 FlyingEndpoint { get; }

		public float FlyingTime => 0f;

		public Ease FlyingEase => default(Ease);

		public float FlyingDelay => 0f;

		public float FakeTimerAppearanceDelay => 0f;

		public Action BoosterPulse => null;

		public Action OnLastTimerHit => null;

		public bool ShowTimer => false;

		public bool ShowUnlockTimer => false;

		public bool ShowCooldownTimer => false;

		public bool TimeLocked => false;

		public float TimerProgressValue => 0f;

		public BoardItemTimerColor TimerColor => default(BoardItemTimerColor);

		public FeedingCombinationComponent FeedingCombinationComponent => default(FeedingCombinationComponent);

		public InteractionComponent InteractionComponent => default(InteractionComponent);

		public bool IsFeedingProducer => false;

		public int FeedingMaxLevel => 0;

		public int FeedingLevel => 0;

		public bool ShowPossibleComboAnimation { get; set; }

		public bool ShowCombinationProduce { get; set; }

		public MutableBindableProperty<bool> ShowCombinationInParticle { get; set; }

		public IAsset AnimatedAsset { get; set; }

		public GameObject AnimatedSprite { get; set; }

		public AssetReferenceT<Sprite> SpriteAsset => null;

		public bool Hinting { get; set; }

		public Vector2 HintingDirection { get; set; }

		public bool HintToLocalPosition { get; set; }

		public bool IsConsumeHint { get; set; }

		public bool IsProducerHint { get; set; }

		public bool IsSpecificItemMerge => false;

		public string SpecificItemID => null;

		public float MergeAnimationMultiplier { get; set; }

		public bool IsProduced { get; set; }

		public string TransitionInName { get; set; }

		public string TransitionOutName { get; set; }

		public bool PlayMeteorInAnimation { get; set; }

		public bool PlayMeteorOutAnimation { get; set; }

		public bool PlayMeteorMergeAnimation { get; set; }

		public BoardItemPosition StartMeteorBoardItemPosition { get; set; }

		public bool IsProducedExcitement { get; set; }

		public bool PlayProducedExcitementInAnimation { get; set; }

		public AssetReferenceT<Sprite> ExcitementSprite { get; set; }

		public bool IsMaxBoosted { get; set; }

		public bool IsMaxBoostedItemLanded { get; set; }

		public bool EnableDigitTimer { get; set; }

		public bool ShowTimeDurationLocked => false;

		public bool ShowDigitTimer => false;

		public double TimeLeft => 0.0;

		public bool ShowBox => false;

		public bool OnlyLock => false;

		public bool HasAnyLock => false;

		public bool IsPowerBoostable => false;

		public Func<bool> IsPowerBoostOn => null;

		public IAsset PowerBoostAnimationPrefab { get; set; }

		public bool ShowOutline { get; set; }

		public MutableBindableProperty<bool> Shaking { get; }

		public bool IsTweened { get; set; }

		public bool IsDragged { get; set; }

		public ILockedComponent LockedComponent => null;

		public IIdComponent IdComponent => null;

		public ITimeLimitedActivationComponent TimeLimitedActivationComponent => null;

		public ITimeDurationComponent TimeDurationComponent => null;

		public ICollectableComponent CollectableComponent => null;

		public RemoteSpriteLocation SaleBubbleIcon => null;

		public int BlasterableTier => 0;

		public bool IsBlasterable => false;

		public bool ShouldHideItem { get; set; }

		public bool TriggerEnterAnimation { get; set; }

		public MutableBindableProperty<bool> PlaySwirlParticles { get; }

		public bool CanPlayBoosterAnimation { get; set; }

		public bool ActivateBoosterSilently { get; set; }

		public bool Bubbled => false;

		public bool InventoryLandAnimationPlaying { get; set; }

		public BoosterType BoosterType { get; set; }

		public bool KeepManualSpriteScale { get; set; }

		public bool PlayBoardItemOutAnimation => false;

		public OrderObjectiveHintMode ShowOrderObjectiveHint => default(OrderObjectiveHintMode);

		public bool IsDragLocked => false;

		public VisualAdapter(Entity entity, IMergingConfigurationModel mergingConfigurationModel)
		{
		}
	}
}
