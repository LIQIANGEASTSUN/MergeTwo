using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Options.Unity;
using TMPro;
using UI;
using UI.Buttons;
using UI.Popups;
using UI.Shop;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

public class InboxMessagePopup : PopupBase<InboxMessagePopupMenuState>
{
	[Serializable]
	public struct References
	{
		[Header("UIElements")]
		public GameObject popup;

		public Image blueOverlay;

		public ScrollRect scrollRect;

		public TextMeshProUGUI headerLabel;

		public TextMeshProUGUI contentText;

		public GameObject timeRemainingParent;

		public TextMeshProUGUI timeLeftText;

		public TextMeshProUGUI labelButtonText;

		public GameObject contentParent;

		public GameObject contentRewardParent;

		public ScrollRect contentRewardScrollRect;

		public TextMeshProUGUI contentPackClaimedText;

		public ShopEntryIcon shopEntryIconPrefab;

		public ShopEntryMergeBoardItem shopEntryMergeBoardItemPrefab;

		public ShopSimpleRewardItem shopSimpleRewardPrefab;

		public SerializableUnityOption<Image> visualElement;

		[CanBeNull]
		public GameObject visualElementTimerParent;

		[CanBeNull]
		public TimerControl visualElementTimer;

		[CanBeNull]
		public GameObject socialMediaParent;

		[CanBeNull]
		public SocialMediaButton[] socialMediaButtons;
	}

	[Serializable]
	public class SocialMediaButton
	{
		public SocialMediaPlatform platform;

		public TweenedButton button;

		[NonSerialized]
		public string url;

		public MenuController MenuController => null;

		public bool TrySetupSocialMediaOnClick(PlayerModel playerModel)
		{
			return false;
		}

		public void OnClick()
		{
		}
	}

	[CompilerGenerated]
	public sealed class _003CAnimateRewards_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public InboxMessagePopup _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CAnimateRewards_003Ed__31(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CLoadVisualElement_003Ed__34 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public InboxMessagePopup _003C_003E4__this;

		public string imageId;

		public CancellationToken ct;

		[NonSerialized]
		public Image _003Cimage_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<Sprite>>.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	[SerializeField]
	public References refs;

	[SerializeField]
	public float animateRewardsDuration;

	[NonSerialized]
	public readonly List<(GameObject instance, IPlayerReward reward)> instantiatedRewards;

	[NonSerialized]
	public Coroutine animateRewardsRoutine;

	[NonSerialized]
	public bool showTimeRemaining;

	[NonSerialized]
	public Option<IDisposableAssetHandle<Sprite>> _visualsAssetHandle;

	public override string MenuTag => null;

	public override GameObject Popup => null;

	public override Image BlueOverlay => null;

	public override ScrollRect ScrollRect => null;

	public override InboxMessagePopupMenuState MenuState { get; set; }

	public Option<GameObject> InstantiateMergeBoardItem(IItemDefinition itemDefinition, int amount, Transform parent)
	{
		return default(Option<GameObject>);
	}

	public Option<GameObject> InstantiateCurrencyItem(Currencies currency, int amount, Transform parent)
	{
		return default(Option<GameObject>);
	}

	public Option<GameObject> InstantiateSimpleRewardItem(IPlayerReward reward, Transform parent)
	{
		return default(Option<GameObject>);
	}

	public override bool NeedsBlockingLayer()
	{
		return false;
	}

	public override bool DoesSupportHardwareBackButton()
	{
		return false;
	}

	public override void PopulateContent()
	{
	}

	public override void DisposeContent(DisposeContentReason reason)
	{
	}

	public void ResetTexts()
	{
	}

	[PublicAPI]
	public void PositiveButtonAction()
	{
	}

	public bool CollectRewardIfNotYetCollected()
	{
		return false;
	}

	public void StartAnimateRewards()
	{
	}

	[IteratorStateMachine(typeof(_003CAnimateRewards_003Ed__31))]
	public IEnumerator AnimateRewards()
	{
		return null;
	}

	public void OnAnimateRewardsComplete()
	{
	}

	public void StopAnimateRewardsIfExists()
	{
	}

	[AsyncStateMachine(typeof(_003CLoadVisualElement_003Ed__34))]
	public UniTask LoadVisualElement(string imageId, CancellationToken ct)
	{
		return default(UniTask);
	}
}
