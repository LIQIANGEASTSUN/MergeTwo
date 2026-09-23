using System;
using DG.Tweening;
using Framework.Core.Assets;
using Framework.Core.DataBinding;
using MergeEngine.Data;
using Merger.Boosters.Declarations.Enums;
using RemoteSprites.Scripts.Runtime;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.ECS.Components.Items
{
	public interface IVisualComponent
	{
		bool ShowInteractionAvailable { get; }

		AssetReferenceT<Sprite> InteractionCostIcon { get; }

		bool CanAffordInteractionCost { get; }

		float InteractionIconAlpha { get; }

		bool LockedByLevel { get; }

		int LevelLock { get; }

		Action OnManualUnlock { get; set; }

		bool ShowMergingParticles { get; set; }

		bool StartTimerFlying { get; set; }

		Vector2 FlyingEndpoint { get; }

		float FlyingTime { get; }

		Ease FlyingEase { get; }

		float FlyingDelay { get; }

		float FakeTimerAppearanceDelay { get; }

		Action BoosterPulse { get; }

		Action OnLastTimerHit { get; }

		bool ShowTimer { get; }

		bool EnableDigitTimer { get; set; }

		bool ShowDigitTimer { get; }

		double TimeLeft { get; }

		float TimerProgressValue { get; }

		BoardItemTimerColor TimerColor { get; }

		bool ShowTimeDurationLocked { get; }

		bool IsFeedingProducer { get; }

		int FeedingMaxLevel { get; }

		int FeedingLevel { get; }

		bool ShowPossibleComboAnimation { get; set; }

		bool ShowCombinationProduce { get; set; }

		MutableBindableProperty<bool> ShowCombinationInParticle { get; set; }

		IAsset AnimatedAsset { get; set; }

		GameObject AnimatedSprite { get; set; }

		AssetReferenceT<Sprite> SpriteAsset { get; }

		bool Hinting { get; set; }

		Vector2 HintingDirection { get; set; }

		bool HintToLocalPosition { get; set; }

		bool IsConsumeHint { get; set; }

		bool IsProducerHint { get; set; }

		RemoteSpriteLocation SaleBubbleIcon { get; }

		int BlasterableTier { get; }

		bool IsBlasterable { get; }

		bool IsSpecificItemMerge { get; }

		string SpecificItemID { get; }

		float MergeAnimationMultiplier { get; }

		bool IsProduced { get; set; }

		string TransitionInName { get; set; }

		string TransitionOutName { get; set; }

		bool PlayMeteorInAnimation { get; set; }

		bool PlayMeteorOutAnimation { get; set; }

		bool PlayMeteorMergeAnimation { get; set; }

		BoardItemPosition StartMeteorBoardItemPosition { get; set; }

		bool IsProducedExcitement { get; set; }

		bool PlayProducedExcitementInAnimation { get; set; }

		AssetReferenceT<Sprite> ExcitementSprite { get; set; }

		bool ShouldHideItem { get; set; }

		bool TriggerEnterAnimation { get; set; }

		MutableBindableProperty<bool> PlaySwirlParticles { get; }

		bool IsMaxBoosted { get; set; }

		bool IsMaxBoostedItemLanded { get; set; }

		bool CanPlayBoosterAnimation { get; }

		bool ActivateBoosterSilently { get; }

		bool ShowBox { get; }

		bool OnlyLock { get; }

		bool HasAnyLock { get; }

		bool IsPowerBoostable { get; }

		Func<bool> IsPowerBoostOn { get; }

		IAsset PowerBoostAnimationPrefab { get; }

		bool ShowOutline { get; set; }

		bool Bubbled { get; }

		bool InventoryLandAnimationPlaying { get; set; }

		MutableBindableProperty<bool> Shaking { get; }

		bool IsTweened { get; set; }

		BoosterType BoosterType { get; set; }

		bool KeepManualSpriteScale { get; set; }

		bool IsDragged { get; set; }

		ILockedComponent LockedComponent { get; }

		IIdComponent IdComponent { get; }

		ITimeLimitedActivationComponent TimeLimitedActivationComponent { get; }

		ITimeDurationComponent TimeDurationComponent { get; }

		ICollectableComponent CollectableComponent { get; }

		bool PlayBoardItemOutAnimation { get; }

		OrderObjectiveHintMode ShowOrderObjectiveHint { get; }

		bool IsDragLocked { get; }
	}
}
