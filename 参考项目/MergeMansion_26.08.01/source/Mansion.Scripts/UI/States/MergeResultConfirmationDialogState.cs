using System;
using Analytics;
using Audio;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI.States
{
	public class MergeResultConfirmationDialogState : IMenuState
	{
		public IMenuController MenuController { get; }

		public IAnalyticsCollector Analytics { get; }

		public IAudioPlayer Audio { get; }

		public string TitleLocalizationId { get; }

		public string QuestionLocalizationId { get; }

		public string ConfirmationButtonTextLocalizationId { get; }

		public string CancellationButtonTextLocalizationId { get; }

		public Option<AssetReferenceT<Sprite>> WarningIconSpriteReference { get; }

		public string WarningTextLocalizationId { get; }

		public Action ActionToConfirm { get; }

		public Action ActionToCancel { get; }

		public MergeResult MergeResult { get; }

		public MergeItem MergeItemFrom { get; }

		public MergeItem MergeItemTo { get; }

		public float ConfirmButtonEnableDelay { get; }

		public PlayerModel Player => null;

		public MergeResultConfirmationDialogState(IMenuController menuController, IAnalyticsCollector analytics, string titleLocalizationId, string questionLocalizationId, string confirmationButtonTextLocalizationId, string cancellationButtonTextLocalizationId, string warningTextLocalizationId, AssetReferenceT<Sprite> warningIconSpriteReference, Action actionToConfirm, Action actionToCancel, MergeResult mergeResult, MergeItem mergeItemFrom, MergeItem mergeItemTo, IAudioPlayer audio, float confirmButtonEnableDelay)
		{
		}
	}
}
