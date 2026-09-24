using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Animations;
using Animations.Flying;
using Audio;
using Banks.Scripts.UI;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.DailyChallenges;
using Code.GameLogic.IAP;
using Code.GameLogic.Player.Events.DailyScoopEvent;
using Code.InitFlow;
using Common;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DailyTasks;
using Decorations;
using Game.Cloud.Webshop;
using Game.Logic.Mail;
using GameAddressables;
using GameEvents;
using GameLogic;
using GameLogic.Area;
using GameLogic.Banks;
using GameLogic.CardCollection;
using GameLogic.Codex;
using GameLogic.Config;
using GameLogic.Config.Costs;
using GameLogic.Config.DecorationShop;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Config.Shop.Items;
using GameLogic.Decorations;
using GameLogic.GameFeatures;
using GameLogic.Hotspots;
using GameLogic.Inventory;
using GameLogic.MergeChains;
using GameLogic.MiniEvents;
using GameLogic.MixABooster;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Director;
using GameLogic.Player.Events;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Rewards;
using GameLogic.Seasonality;
using GameLogic.StatsTracking;
using GameLogic.Story;
using Hotspots;
using IAP;
using Mail;
using Merge;
using Metacore.Cutscenes;
using Metacore.MergeMansion.Analytics.UI;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.GameEvents;
using Metacore.MergeMansion.InputController;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.ThirdParty.FirebaseService;
using Metacore.MergeMansion.UI;
using Metacore.MergeMansion.UI.DailyTodo;
using Metacore.MergeMansion.UI.GarageCleanupEvent;
using Metacore.MergeMansion.UI.Libraries;
using Metacore.MergeMansion.Utility;
using Metacore.Rendering;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Math;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;
using Metaplay.Unity;
using Offers;
using Pool;
using ReEngagement;
using UI;
using UI.Areas;
using UI.Board;
using UI.CoreSupportingEvents.DailyScoop;
using UI.DailyTasksV2;
using UI.GameEvents;
using UI.GameEvents.Decorations;
using UI.GameEvents.MergeBoards;
using UI.Inbox;
using UI.Libraries;
using UI.Messaging;
using UI.MixABooster;
using UI.Offers;
using UI.Popups;
using UI.ProgressionPacks;
using UI.Rewards;
using UI.Seasonality;
using UI.Shop;
using UI.States;
using UI.TemporaryCardCollectionEvent;
using UnityEngine;
using UnityEngine.AddressableAssets;
using Webview;

public class MenuController : MonoBehaviour, IMenuController, ISharedMenuController, ITickSystem
{
	[Serializable]
	public class PopupData
	{
		public string Name;

		public UnityGameObjectReference PopupPrefabRef;

		public string MenuTag;
	}

	public class ShowAfterOthersHaveBeenHidden
	{
		public Func<IMenuSection> ConstructMenuSection { get; }

		public Func<IMenuState> ConstructMenuState { get; }

		public bool HideNavigation { get; }

		public string MenuTag { get; }

		public Option<AssetReferenceT<GameObject>> PrefabRef { get; }

		public string EventId { get; set; }

		public IDisposableAssetHandle<GameObject> PopupHandle { get; set; }

		public ShowAfterOthersHaveBeenHidden(Func<IMenuSection> constructMenuSection, Func<IMenuState> constructMenuState, bool hideNavigation, string eventId, IDisposableAssetHandle<GameObject> popupHandle = null)
		{
		}

		public ShowAfterOthersHaveBeenHidden(string menuTag, AssetReferenceT<GameObject> prefabRef, Func<IMenuState> constructMenuState, bool hideNavigation, string eventId = null)
		{
		}
	}

	[Serializable]
	public class Controllers
	{
		[SerializeField]
		public MailController mailController;

		[SerializeField]
		public FlightController flightController;

		[SerializeField]
		public RewardAnimationController rewardAnimationController;

		[SerializeField]
		public UnityBoardController boardController;

		[SerializeField]
		public OffersManager offersManager;

		[SerializeField]
		public NavigationController navigationController;

		[SerializeField]
		public CurrencyBankPurchaseManager currencyBankPurchaseManager;

		[SerializeField]
		public DialogueRunner dialogueRunner;

		[SerializeField]
		public GameEventExtensionPurchaseManager gameEventExtensionPurchaseManager;

		[SerializeField]
		public ProgressionEventPurchaseManager progressionEventPurchaseManager;

		[SerializeField]
		public ProgressionPackEventPurchaseManager progressionPackEventPurchaseManager;

		[SerializeField]
		public DecorationController decorationController;

		[SerializeField]
		public ReEngagementController reEngagement;

		public IHotspotProgressRefresher hotspotProgressRefresher;

		public IHotspotController hotspotController;

		public IHotspotCompletableQuery hotspotCompletableQuery;

		public IHotspotCompletionState hotspotCompletionState;

		public IMergeGoalItemQuery mergeGoalItemQuery;

		public IHotspotVisibilityHider hotspotVisibilityHider;

		public IEventHotspotRegistry eventHotspots;

		public IPetSelectionHotspots petSelectionHotspots;

		public IHotspotActivator hotspotActivator;

		public IAreaLockedHotspotActions areaLockedHotspotActions;

		public IAreaCompletionRewardHotspots areaCompletionRewardHotspots;

		public IDebugHotspots debugHotspots;

		public IHotspotPopupActions hotspotPopupActions;

		public IIllustrationTaskHotspots illustrationTaskHotspots;

		[SerializeField]
		public TutorialHandController tutorialHand;

		[SerializeField]
		public BoardViewTaskHandler boardViewTaskHandler;

		[SerializeField]
		public FirebaseService firebaseService;

		[SerializeField]
		public InputController inputController;

		public CollectibleBoardEventManager CollectibleBoardEventManager;

		public LeaderboardEventManager LeaderboardEventManager;

		public GarageCleanupEventManager GarageCleanupEventManager;

		[NonSerialized]
		public ProgressionEventManager ProgressionEventManager;

		[NonSerialized]
		public BoultonLeagueEventManager BoultonLeagueEventManager;
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003C_003Ec__DisplayClass336_0
	{
		public MenuController _003C_003E4__this;

		public bool isFirstShow;

		public OfferPopupTriggerPlacement offerPopupTriggerPlacement;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass341_0
	{
		public bool shouldReplaceMenu;

		public MenuController _003C_003E4__this;

		public OffersPopupViewModel menuState;

		public IActiveOfferGroup activeOfferGroup;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass451_0
	{
		public CollectibleBoardEventStartMenuState state;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass468_0
	{
		public LeaderboardEventStartMenuState state;
	}

	[CompilerGenerated]
	public sealed class _003C_003Ec__DisplayClass570_0
	{
		public Action onStart;

		public List<IPlayerReward> rewardsToClaim;

		public MenuController _003C_003E4__this;

		public List<IWalletState> walletStates;

		public List<RandomPCG> rewardContainerRandomCheckpoints;

		public Action onComplete;
	}

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CBatchRewardContainerClaimSequence_003Ed__570 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Action onStart;

		public List<IPlayerReward> rewardsToClaim;

		public MenuController _003C_003E4__this;

		public List<RandomPCG> rewardContainerRandomCheckpoints;

		public Action onComplete;

		public IWalletState startingWalletState;

		[NonSerialized]
		public _003C_003Ec__DisplayClass570_0 _003C_003E8__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CDelayedCall_003Ed__584 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float waitBeforeCall;

		public Action action;

		[NonSerialized]
		public Cysharp.Threading.Tasks.YieldAwaitable.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCameraTutorialPopup_003Ed__490 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventId relatedEventId;

		public CancellationToken ct;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCardGamePopupMenu_003Ed__504 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IHotspotDefinition hotspot;

		public MenuController _003C_003E4__this;

		public CancellationToken ct;

		public TaskSource taskSource;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public FullscreenLoadingScope _003C_003E7__wrap2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventEndPopup_003Ed__452 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public CollectibleBoardEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public UniTask<Option<CollectibleBoardEventPrefabs>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__2;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__3;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventExtendPopup_003Ed__456 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		public MetaTime? reviewEndAt;

		public bool automaticShow;

		public Action onFinalize;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventInfoPopup_003Ed__454 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventIntroPopup_003Ed__458 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventInfo eventInfo;

		public CancellationToken ct;

		public MetaActivableVisibleStatus.InPreview inPreview;

		[NonSerialized]
		public CollectibleBoardEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventProgressionPopup_003Ed__453 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		public bool hideCurrentFirst;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventStartPopup_003Ed__451 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass451_0 _003C_003E8__1;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowCollectibleBoardEventTeasePopup_003Ed__455 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventInfo eventInfo;

		public CancellationToken ct;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowDecorationOwnedPopup_003Ed__462 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public CollectibleBoardEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[CompilerGenerated]
	public sealed class _003CShowDownloadContentMenu_003Ed__487 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public MenuController _003C_003E4__this;

		public AddressablesDownloadProcess downloadProcess;

		[NonSerialized]
		public DownloadContentPopupMenuState _003CmenuState_003E5__2;

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
		public _003CShowDownloadContentMenu_003Ed__487(int _003C_003E1__state)
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
	public struct _003CShowExtendGameEventPopup_003Ed__338 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public IBoardEventModel boardEvent;

		public CancellationToken ct;

		public MetaTime? reviewEndAt;

		public bool automaticShow;

		public Action onFinalize;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowFishCatchPopup_003Ed__466 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventId collectibleBoardEventId;

		public CancellationToken ct;

		public ItemDefinition fishItemDefinition;

		public F32 fishWeight;

		public WeightCategory fishWeightCategory;

		public int flags;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowGarageCleanupEndPopup_003Ed__391 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GarageCleanupEventPrefabs eventPrefabs;

		public CancellationToken ct;

		public MenuController _003C_003E4__this;

		public GarageCleanupEventModel eventModel;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowGarageCleanupEventPopup_003Ed__388 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public GarageCleanupEventModel eventModel;

		public CancellationToken ct;

		public string source;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowGarageCleanupInfoPopup_003Ed__389 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public GarageCleanupEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowGarageCleanupStartPopup_003Ed__390 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GarageCleanupEventPrefabs eventPrefabs;

		public CancellationToken ct;

		public MenuController _003C_003E4__this;

		public GarageCleanupEventModel eventModel;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLayeredDecorationInfoPopup_003Ed__459 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public CollectibleBoardEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLayeredDecorationLockedPopup_003Ed__460 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public CollectibleBoardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public LayeredDecorationLockedMenuState _003CmenuState_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLeaderboardEventEndPopup_003Ed__472 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public LeaderboardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public UniTask<Option<LeaderboardEventPrefabs>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__2;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__3;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLeaderboardEventInfoPopup_003Ed__469 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public LeaderboardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLeaderboardEventRankingPopup_003Ed__470 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public LeaderboardEventModel eventModel;

		public CancellationToken ct;

		public Action buttonActionOverride;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLeaderboardEventRankingPopup_003Ed__471 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public LeaderboardEventModel eventModel;

		public CancellationToken ct;

		public (List<LeaderboardEventPlayerRankingEntry>, int) rankingsAndRankingPosition;

		public Action buttonActionOverride;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowLeaderboardEventStartPopup_003Ed__468 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public LeaderboardEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass468_0 _003C_003E8__1;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003Chandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowMenuAfterOthersHaveBeenHidden_003Ed__422 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public AssetReferenceT<GameObject> prefabRef;

		public CancellationToken ct;

		public MenuController _003C_003E4__this;

		public string eventID;

		public IMenuState menuState;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CassetHandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowNextTriggeredOfferPopupAsync_003Ed__336 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public OfferPopupTriggerPlacement offerPopupTriggerPlacement;

		public bool replaceUnderlyingMenu;

		public List<(OfferPopupTrigger, IActiveOfferGroup)> offerPopupTriggerGroups;

		public int startIndex;

		[NonSerialized]
		public _003C_003Ec__DisplayClass336_0 _003C_003E8__1;

		public CancellationToken ct;

		public bool wasActivatedViaFallback;

		public string showMethod;

		[NonSerialized]
		public int _003Cindex_003E5__2;

		[NonSerialized]
		public OfferPopupTrigger _003Ctrigger_003E5__3;

		[NonSerialized]
		public IActiveOfferGroup _003CofferGroupToShow_003E5__4;

		[NonSerialized]
		public MetaTime? _003CwaitUntil_003E5__5;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowOfferGroupPopupAsync_003Ed__341 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public bool shouldReplaceMenu;

		public MenuController _003C_003E4__this;

		public OffersPopupViewModel menuState;

		public IActiveOfferGroup activeOfferGroup;

		public CancellationToken ct;

		[NonSerialized]
		public _003C_003Ec__DisplayClass341_0 _003C_003E8__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowProgressionEventChallengeRewardPopup_003Ed__443 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public ProgressionEventModel eventModel;

		public CancellationToken ct;

		public int claimedLevelNumber;

		public Action rewardClaimedAction;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CassetHandle_003E5__2;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowProgressionEventEndPopup_003Ed__438 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public ProgressionEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public ProgressionEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CassetHandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowProgressionEventGenericInfoPopup_003Ed__436 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public ProgressionEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public ProgressionEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CassetHandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowProgressionEventProgressionPopup_003Ed__433 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public ProgressionEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public ProgressionEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CprogressionPopupHandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CShowProgressionEventStartPopup_003Ed__434 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public MenuController _003C_003E4__this;

		public ProgressionEventModel eventModel;

		public CancellationToken ct;

		[NonSerialized]
		public ProgressionEventPrefabs _003Cprefabs_003E5__2;

		[NonSerialized]
		public IDisposableAssetHandle<GameObject> _003CassetHandle_003E5__3;

		[NonSerialized]
		public UniTask<IDisposableAssetHandle<GameObject>>.Awaiter _003C_003Eu__1;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__2;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CTransitionWatchdogTask_003Ed__599 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken ct;

		public MenuController _003C_003E4__this;

		public string menuTag;

		public float timeoutSeconds;

		[NonSerialized]
		public float _003CstartTime_003E5__2;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitForClose_003Ed__230 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public IMenuSection section;

		public CancellationToken ct;

		[NonSerialized]
		public UniTask.Awaiter _003C_003Eu__1;

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

	public const string CleanPlayTestDebug = "CleanPlayTestDebug";

	[NonSerialized]
	public Controllers controllers;

	[NonSerialized]
	public IPurchaseManager purchaseManager;

	[NonSerialized]
	public readonly Stack<IMenuSection> menuStack;

	[NonSerialized]
	public readonly List<IMenuSection> menuNoStacked;

	[NonSerialized]
	public readonly HashSet<string> menuTransitions;

	[NonSerialized]
	public IDictionary<string, IMenuSection> menuSections;

	[NonSerialized]
	public bool doSomethingAfterLastMenuAnimatedAway;

	[NonSerialized]
	public ShowAfterOthersHaveBeenHidden showAfterOthersHaveBeenHidden;

	[NonSerialized]
	public DailyScoopTaskCompleteView dailyScoopTaskCompleteView;

	[NonSerialized]
	public ProgressionPackTaskCompleteView progressionPackTaskCompleteView;

	[NonSerialized]
	public bool _isMinigameOpening;

	public Action<IPlayer> OnShopItemPurchasedAds;

	[NonSerialized]
	public bool BackButtonEnabled;

	[NonSerialized]
	public MessageDispatcher messageDispatcher;

	[NonSerialized]
	public IActionsExecutor actionsExecutor;

	[NonSerialized]
	public IScheduler scheduler;

	[NonSerialized]
	public LocationLoader locationLoader;

	[NonSerialized]
	public AddressablesSession addressablesSession;

	[NonSerialized]
	public ModelRender modelRender;

	[NonSerialized]
	public LogErrorProvider logErrorProvider;

	[NonSerialized]
	public ICameraHotspotNavigator cameraHotspotNavigator;

	[NonSerialized]
	public ICameraMenuInput cameraMenuInput;

	[NonSerialized]
	public IDecorationCamera decorationCamera;

	[NonSerialized]
	public ICameraPanning cameraPanning;

	[NonSerialized]
	public ICameraProjection cameraProjection;

	[NonSerialized]
	public ICameraInputLock cameraInputLock;

	[NonSerialized]
	public ISafeRollback _safeRollback;

	[NonSerialized]
	public GameConfigClientCache _gameConfigClientCache;

	[NonSerialized]
	public PlayerClientCache _playerClientCache;

	[NonSerialized]
	public TitleBarController titleBarController;

	[NonSerialized]
	public ITitleBarRewardWidgets titleBarRewardWidgets;

	[NonSerialized]
	public ITitleBarInfiniteEnergy titleBarInfiniteEnergy;

	[NonSerialized]
	public ITitleBarWalletOverride titleBarWalletOverride;

	[NonSerialized]
	public Dictionary<MetaActivableState, HashSet<string>> popupsToCloseOnEventEnd;

	[NonSerialized]
	public readonly List<IMenuSection> _hideBuffer;

	[NonSerialized]
	public bool _isHidingAll;

	public static MenuController Instance => null;

	public static bool HasInstance => false;

	public static int MenusClosedVersion { get; set; }

	public GameObject[] menus => null;

	public PopupData[] menuPrefabDatas => null;

	public GameObject blockingLayer => null;

	public RectTransform popupContainer => null;

	public bool allowDirectorAccess => false;

	public ISafeRollback Rollback => null;

	public ProgressionPackEventPrefabLibrary ProgressionPackEventPrefabsLibrary => null;

	public MixABoosterEventPrefabsLibrary MixABoosterEventPrefabsLibrary => null;

	public AllCollectibleBoardEventsPrefabsLibrary CollectibleBoardEventPrefabsLibrary => null;

	public CoreSupportingEventsPrefabsLibrary CoreSupportingEventsPrefabsLibrary => null;

	public MysteryMachineEventPrefabsLibrary MysteryMachineEventPrefabsLibrary => null;

	public SoloMilestoneEventPrefabsLibrary SoloMilestoneEventPrefabsLibrary => null;

	public MiniEventPrefabsLibrary MiniEventPrefabsLibrary => null;

	public TemporaryCardCollectionEventPrefabsLibrary TemporaryCardCollectionEventPrefabsLibrary => null;

	public DecorationShopPrefabsLibrary DecorationShopPrefabsLibrary => null;

	public MergeBoardLibrary MergeBoardLibrary => null;

	public DecorationsLibrary DecorationsLibrary => null;

	public UIArtScriptableObject UiArt => null;

	public IOfferPopupsLibrary OfferPopupsLibrary => null;

	public IRewardVisuals RewardVisuals => null;

	public IRewardVisuals ShopRewardVisuals => null;

	public IRewardsAnimations RewardsAnimations => null;

	public IInputController InputController => null;

	public IMergeGoalItemQuery MergeGoalItemQuery => null;

	public IHotspotPopupActions HotspotPopupActions => null;

	public IHotspotCompletionState HotspotCompletionState => null;

	public IDebugHotspots DebugHotspots => null;

	public ICameraHotspotNavigator CameraHotspotNavigator => null;

	public ICameraMenuInput CameraMenuInput => null;

	public IDecorationCamera DecorationCamera => null;

	public ICameraPanning CameraPanning => null;

	public ICameraProjection CameraProjection => null;

	public ICameraInputLock CameraInputLock => null;

	public ArtifactLibrary ArtifactLibrary => null;

	public CharacterLibrary CharacterLibrary => null;

	public Prop3DLibrary Prop3DLibrary => null;

	public CurrencyBankLibrary CurrencyBankLibrary => null;

	public IIconLibrary DefaultIconLibrary => null;

	public IIconLibrary EventIconLibrary => null;

	public CutsceneGroupLibrary CutsceneGroupLibrary => null;

	public AnimationConfigLibrary AnimationConfigLibrary => null;

	public GraphicsConfigLibrary GraphicsConfigLibrary => null;

	public SeasonalityPrefabsLibrary SeasonalityPrefabsLibrary => null;

	public VFXConfigLibrary VFXConfigLibrary => null;

	public IllustrationLibrary IllustrationLibrary => null;

	public UICharacterContainer UICharacterContainer => null;

	public DailyTasksV2Library DailyTasksV2Library => null;

	public BoultonLeagueStageLibrary BoultonLeagueStageLibrary => null;

	public EnergyModeEventPrefabsLibrary EnergyModeEventPrefabsLibrary => null;

	public AnimationSettingsConfig AnimationSettingsConfig => null;

	public DailyScoopEventPrefabsLibrary DailyScoopEventPrefabsLibrary => null;

	public TemporaryCardCollectionEventSpritesLibrary TemporaryCardCollectionEventSpritesLibrary => null;

	public MiniGamesPrefabsLibrary MiniGamesPrefabsLibrary => null;

	public AreaIcons AreaIconsLibrary => null;

	public DailyScoopTaskCompleteView DailyScoopTaskCompleteView => null;

	public ProgressionPackTaskCompleteView ProgressionPackTaskCompleteView => null;

	public GameObject CloudsTransitionPrefab => null;

	public GameObject CloudsTransitionParent => null;

	public ShortLeaderboardEventPrefabsLibrary ShortLeaderboardEventPrefabsLibrary => null;

	public CardCollectionSupportingEventPrefabsLibrary CardCollectionSupportingEventPrefabsLibrary => null;

	public CoreSupportEventPrefabsLibrary CoreSupportEventPrefabsLibrary => null;

	public bool IsMenuOpen => false;

	public IMenuState OpenedPopupModel => null;

	public string OpenMenuTag => null;

	public FlightController FlightController => null;

	public MergeBoardId PlayerActiveMergeBoardId => null;

	public bool IsInTransition => false;

	public static Director Director => null;

	public PlayerModel Player { get; set; }

	public PlayerClientContext PlayerContext { get; set; }

	public IBoardController BoardController => null;

	public IAnalyticsCollector Analytics => null;

	public IAudioPlayer Audio => null;

	public IAudioSettings AudioSettings => null;

	public bool AnyPopupIsVisible => false;

	public LocationId CurrentLocation => default(LocationId);

	public event Action<bool> OnMenuVisibilityChange
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

	public event Action OnStackedMenuPushed
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

	public event Action<StatsObjective, TaskType, List<IPlayerReward>, Action, int> OnDailyScoopTaskCompleted
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

	public event Action<StatsObjective, TaskType, List<IPlayerReward>, Action, int, bool> OnProgressionPackTaskCompleted
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

	public IMenuSection GetCurrentMenu()
	{
		return null;
	}

	public void SetBackButtonEnabled(bool buttonEnabled)
	{
	}

	public void ProcessMenuTags()
	{
	}

	public void CheckIntegrity()
	{
	}

	public void SortPopupsByName()
	{
	}

	public void StartTransition(string menuTag)
	{
	}

	public void CompleteTransition(string menuTag)
	{
	}

	public TMenu TryGetMenu<TMenu>() where TMenu : IMenuSection
	{
		return default(TMenu);
	}

	public MenuController Init1(IScheduler scheduler, PlayerModel player, PlayerClientContext playerContext, MessageDispatcher messageDispatcher, Controllers controllers, IPurchaseManager purchaseManager, LocationLoader locationLoader, AddressablesSession addressablesSession, LogErrorProvider logErrorProvider, IActionsExecutor actionsExecutor, ICameraHotspotNavigator cameraHotspotNavigator, ICameraMenuInput cameraMenuInput, IDecorationCamera decorationCamera, ICameraPanning cameraPanning, ICameraProjection cameraProjection, ICameraInputLock cameraInputLock, ISafeRollback rollback, ModelRender modelRender, GameConfigClientCache gameConfigClientCache, PlayerClientCache playerClientCache)
	{
		return null;
	}

	public void OnEventReceived(PlayerEventBase evt)
	{
	}

	public void Init2(NavigationController navigationController, DialogueRunner dialogueRunner, BoardViewTaskHandler boardViewTaskHandler, TitleBarController titleBarController, ITitleBarRewardWidgets titleBarRewardWidgets, ITitleBarInfiniteEnergy titleBarInfiniteEnergy, ITitleBarWalletOverride titleBarWalletOverride)
	{
	}

	public void Init3(ReEngagementController reEngagement, IHotspotController hotspotController, IHotspotProgressRefresher hotspotProgressRefresher, IHotspotCompletableQuery hotspotCompletableQuery, IHotspotCompletionState hotspotCompletionState, IMergeGoalItemQuery mergeGoalItemQuery, IHotspotVisibilityHider hotspotVisibilityHider, IEventHotspotRegistry eventHotspots, IPetSelectionHotspots petSelectionHotspots, IHotspotActivator hotspotActivator, IAreaLockedHotspotActions areaLockedHotspotActions, IAreaCompletionRewardHotspots areaCompletionRewardHotspots, IDebugHotspots debugHotspots, IHotspotPopupActions hotspotPopupActions, IIllustrationTaskHotspots illustrationTaskHotspots, TutorialHandController tutorialHand, CollectibleBoardEventManager collectibleBoardEventManager, LeaderboardEventManager leaderboardEventManager, GarageCleanupEventManager garageCleanupEventManager, ProgressionEventManager progressionEventManager, BoultonLeagueEventManager boultonLeagueEventManager)
	{
	}

	public void AwakeInner()
	{
	}

	public void StartInner()
	{
	}

	public void UpdateInner()
	{
	}

	public void Tick()
	{
	}

	public IDictionary<string, IMenuSection> CollectPopups()
	{
		return null;
	}

	public void HandleBackButtonInputs()
	{
	}

	public void PushAndShow(IMenuSection menuToPush, bool hideCurrentFirst, IMenuState menuState = null, bool immediate = false, bool fadePanelBackground = true, string eventId = null, AnalyticsViewType viewType = AnalyticsViewType.Default, AnalyticsEventParameters analyticsEventParameters = null, IDisposableAssetHandle<GameObject> popupHandle = null)
	{
	}

	public UniTask PushAndShowWaitForClose(IMenuSection menuToPush, bool hideCurrentFirst, CancellationToken ct, IMenuState menuState = null, bool immediate = false, bool fadePanelBackground = true, string eventId = null, AnalyticsViewType viewType = AnalyticsViewType.Default, AnalyticsEventParameters analyticsEventParameters = null)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CWaitForClose_003Ed__230))]
	public UniTask WaitForClose(IMenuSection section, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void OnShownFinished(string menuTag)
	{
	}

	public void ShowNoStackedMenu(IMenuSection menuToShow, IMenuState menuState = null, bool immediate = false)
	{
	}

	public void ShowAfterOtherMenusHaveBeenHidden(Func<IMenuSection> menuToPush, Func<IMenuState> menuState, bool hideNavigation, string eventId = null, IDisposableAssetHandle<GameObject> popupHandle = null)
	{
	}

	public void ShowAfterOtherMenusHaveBeenHidden(string menuTag, AssetReferenceT<GameObject> prefabRef, Func<IMenuState> menuState, bool hideNavigation, string eventId = null)
	{
	}

	public void MakeVisible(IMenuSection menuToPush, bool fadePanelBackground = true, bool immediate = false, bool doPush = true, Action onShownCallback = null, string EventId = null, AnalyticsViewType viewType = AnalyticsViewType.Default, AnalyticsEventParameters analyticsEventParameters = null, IDisposableAssetHandle<GameObject> popupHandle = null)
	{
	}

	public void PopMenuAndShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod)
	{
	}

	public void ShowShop(ShopMenuContentBlock shopContext, bool forceOpenCoinsAndGems, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true)
	{
	}

	public void ShowBoardShop(ShopMenuContentBlock shopContext, string openingSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null, bool fadePanelBackground = true)
	{
	}

	public void ShowItemObtainedPopup(IEnumerable<IPlayerReward> rewards)
	{
	}

	public void RemoveFromMenuStackIfExists(string menuTag)
	{
	}

	public void RemoveFromMenuStack(string menuTag)
	{
	}

	public void ReplaceMenu(IMenuSection menuToShow, IMenuState menuState = null, string eventId = null, AnalyticsViewType viewType = AnalyticsViewType.Default)
	{
	}

	public bool CloseCurrentMenu(UnityEngine.Object from)
	{
		return false;
	}

	public bool CloseNoStackedMenu(IMenuSection from)
	{
		return false;
	}

	public void OnHiddenNoStackedMenu()
	{
	}

	public bool NavigateBack(UnityEngine.Object from, Action onFinish)
	{
		return false;
	}

	public bool NavigateBack(UnityEngine.Object from, bool showAllPrevious = false, bool showPreviousImmediately = false)
	{
		return false;
	}

	public void PopMenu()
	{
	}

	public void OnHiddenFinished(string menuTag)
	{
	}

	public void PopMenuAndShowAll()
	{
	}

	public void PopMenuAndShowPrevious(bool showImmediately = false)
	{
	}

	public bool TryHideCurrentMenuWithTag(string menuTag)
	{
		return false;
	}

	public void PopMenuAndShowPreviousIfCurrent(IMenuSection section)
	{
	}

	public void OnPopMenuAndShowAllHideCompleted(string menuTag)
	{
	}

	public void OnPopMenuAndShowPreviousHideCompleted(string menuTag, bool showImmediately)
	{
	}

	public void DoAfterLastMenuHasAnimatedAway(string menuTag)
	{
	}

	public void DoLastCloseStepsIfNeeded()
	{
	}

	public void MenuTransitionStarted(string menuTag)
	{
	}

	public void MenuTransitionCompleted(string menuTag)
	{
	}

	public void PopMenusBeforeShow(string menuTag, int maxPopCount = -1)
	{
	}

	public void ForceCloseAllPopups()
	{
	}

	public void OnTransitionFromMergeGrid()
	{
	}

	public string GetNameOfCurrentOpenMenu()
	{
		return null;
	}

	public void HideAllMenus(HideMenuReason hideMenuReason = HideMenuReason.HideAllMenus)
	{
	}

	public bool IsSpecificMenuInStack(string menuTag)
	{
		return false;
	}

	public bool IsSpecificMenuInStackContains(string menuTag)
	{
		return false;
	}

	public bool IsMenuInStack<TMenu>() where TMenu : IMenuSection
	{
		return false;
	}

	public bool IsAnyMenuInStack(Type[] menuTypes)
	{
		return false;
	}

	public IMenuSection FindMenuWithTag(string menuTag, GameObject dynamicPopup = null, bool useMenuTagParameterAsKey = false)
	{
		return null;
	}

	public void OnHideMenuComplete(IMenuSection menu, HideMenuReason reason)
	{
	}

	public void DestroyMenu(IMenuSection menu)
	{
	}

	public void ShowPlayerLevelPopupMenu(bool closeCurrentPopup = false)
	{
	}

	public void ShowEndOfContentPopupMenu()
	{
	}

	public void ShowSpecialOffers(bool hideCurrentFirst = false)
	{
	}

	public void ShowEventProgressPopupMenu(MergeBoardId storyEventBoardId = null, bool hideCurrentFirst = false)
	{
	}

	public void ShowCollectEventProgressRewardPopupMenu(bool hideCurrentFirst = false)
	{
	}

	public void ShowSettingsPopupMenu()
	{
	}

	public void ShowTemplatePopupMenu()
	{
	}

	public void ShowToDoPopupMenu(Option<DailyTodoPopupFocusTarget> focusTargetOption = default(Option<DailyTodoPopupFocusTarget>), bool allowOpeningOnTopOfAnother = false, bool hideCurrentFirst = false, Action onPopupShown = null)
	{
	}

	public void ShowDailyTasksRefreshPurchaseConfirmationPopup()
	{
	}

	public void ShowDailyTasksV2RefreshPurchaseConfirmationPopup(int taskIndex, Action tryToPurchase)
	{
	}

	public void ShowDailyTasksV2TimeExtensionOfferPopup()
	{
	}

	public void ShowDailyTasksV2InfoPopup()
	{
	}

	public void ShowMergeGoalsPopupMenu(HotspotId hotspotId, TaskSource taskSource)
	{
	}

	public void ShowCustomItemInfoPopupMenu(IItemDefinition itemDefinition, bool hideCurrentFirst = false)
	{
	}

	public void ShowItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false)
	{
	}

	public void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst = false)
	{
	}

	public void ShowItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, ItemInfoPopupFlags flags)
	{
	}

	public void ShowOrderItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false)
	{
	}

	public void ShowProgressionPackInfoPopup()
	{
	}

	public void ShowMergeItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false)
	{
	}

	public void ShowShopItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false)
	{
	}

	public void ShowPlayerRewardInfoPopupMenu(IPlayerReward playerReward, bool hideCurrentFirst = false, ItemInfoPopupFlags flags = ItemInfoPopupFlags.None)
	{
	}

	public void OnPetPreview(PetId previewPetId, DecorationId previewDecoration, int decorationLayer)
	{
	}

	public void OpenPetPreviewMenu(PetId previewPetId, DecorationId previewDecoration, int decorationLayer)
	{
	}

	public void ShowBasicItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool hideCurrentFirst, IActionsExecutor executor, IOffersManager offersManager, IPoolsManager poolsManager, IRewardsAnimations rewardsAnimations, PlayerModel player, IOfferPopupsLibrary offerPopupsLibrary, IRewardVisuals rewardVisuals, ItemInfoPopupFlags flags)
	{
	}

	public void ShowShopBoxItemInfoPopupMenu(IMergeChainDefinition mergeChain, IItemDefinition itemDefinition, bool forceShowOdds, bool hideCurrentFirst = false)
	{
	}

	public void ShowArtifactItemInfoPopupMenu(IMergeItem mergeItem, bool hideCurrentFirst = false)
	{
	}

	public void ShowNotEnoughSomethingPopupMenu((Currencies currency, int amount) missing, bool hideCurrentFirst = false)
	{
	}

	public void ShowAreaHotspotPopupMenuInventorySinkConfirmationPopup(Action<IHotspotDefinition> confirmationAction, IHotspotDefinition hotspot, (IItemDefinition Item, int Requirement)[] sinkItems)
	{
	}

	public void ShowRentableInventoryAdvertisementPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel)
	{
	}

	public void ShowRentableInventoryExtensionPopup(RentableInventorySettings settings, Action actionToConfirm, Action actionToCancel)
	{
	}

	public void ShowNotEnoughSomethingPopupMenu(ICost cost, int missingAmount)
	{
	}

	public void ShowNotEnoughSomethingMultiplesPopupMenu(List<(Currencies, int)> costs)
	{
	}

	public void ShowRatingPopupMenu()
	{
	}

	public void AskForFeedback()
	{
	}

	public void ShowEnergyPopupMenu(EnergyType type, bool tryShowOfferFirst, bool isMinigameLayerVisible = false)
	{
	}

	public void ShowOutOfCSETokensMenu(CoreSupportEventTokenId tokenId, AuxEnergyMenuLocalisationState localisationState, bool isMinigameLayerVisible = false)
	{
	}

	public void ShowBuyMoreEnergyPopup(EnergyItem energyItem, bool tryShowOfferAfter)
	{
	}

	public void ShowAuxEnergyPopup(EnergyType energyType, bool isMinigameLayerVisible = false)
	{
	}

	public bool TryShowTriggerActivatedOutOfEnergyOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, bool wasTriggeredFirst)
	{
		return false;
	}

	public void IncreaseOfferPopupTriggerActivationCounts(OfferPopupTrigger popupTrigger, IActiveOfferGroup offerGroup)
	{
	}

	public void ShowEventEnergyMainBoardInfoPopup(EnergyType energyType)
	{
	}

	public void ShowNotificationWhitelistPopupMenu()
	{
	}

	public void ShowSystemNotificationsPopupMenu()
	{
	}

	public void ShowWebViewPopup(IWebViewTarget webTarget)
	{
	}

	public void ShowInboxMainView()
	{
	}

	public void ShowInboxItem(IMailMessage inboxItem, IInboxVisualElementLibrary visualElementLibrary)
	{
	}

	public void ShowThirdPartySurveyInboxItem(IMailMessage inboxItem)
	{
	}

	public void DeleteInboxItem(IMailMessage inboxItem)
	{
	}

	public void ShowInboxItemDummy(IMailMessage inboxItem)
	{
	}

	public IMenuState GenerateShopMenuState(ShopMenuContentBlock focusContext, bool openedFromTitleBar, bool forceOpenCoinsAndGems, bool forceOpenGarageShop, bool forceOpenAnyBoardShop, string openSource, RedDotStatus redDotStatus, string showMethod, IActiveOfferGroup overrideOfferGroup = null)
	{
		return null;
	}

	public IMenuState GenerateShopOfferMenuState(bool automaticShow, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null)
	{
		return null;
	}

	public void ShowMergeGridShopPopupMenu(string shopOpeningSource, RedDotStatus redDotStatus, string showMethod, ShopMenuContentBlock focusCurrencies = ShopMenuContentBlock.None, bool openedFromTitleBar = false, bool forceOpenCoinsAndGems = false, bool forceOpenGarageShop = false, bool forceOpenAnyBoardShop = false)
	{
	}

	public void ShowShopOffersPopupMenu(bool hideCurrentFirst = false, IEnumerable<IActiveOfferGroup> overrideOfferGroups = null)
	{
	}

	public void TryShowAutoPopupAppLoading()
	{
	}

	public void TryShowAutoPopupLobbyReturn()
	{
	}

	public void TryShowAutoPopupMergeBoardEnter(MergeBoardId mergeBoardId)
	{
	}

	public void TryShowAutoPopupPopupOpen(OfferPopupTriggerPopupId id)
	{
	}

	public void TryShowAutoPopupPopupClose(OfferPopupTriggerPopupId id, IMenuSection closingPopup)
	{
	}

	public bool TryShowAutoPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, string showMethod)
	{
		return false;
	}

	public bool ShowActiveOfferPopupTriggers(OfferPopupTriggerPlacement offerPopupTriggerPlacement, string showMethod)
	{
		return false;
	}

	public UniTask ShowTriggeredOfferPopupsAsync(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<(OfferPopupTrigger, IActiveOfferGroup)> offerPopupTriggerGroups, string showMethod, bool wasActivatedViaFallback, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowNextTriggeredOfferPopupAsync_003Ed__336))]
	public UniTask ShowNextTriggeredOfferPopupAsync(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<(OfferPopupTrigger, IActiveOfferGroup)> offerPopupTriggerGroups, int startIndex, string showMethod, bool wasActivatedViaFallback, bool replaceUnderlyingMenu, CancellationToken ct)
	{
		return default(UniTask);
	}

	public UniTask ShowTriggeredOfferPopup(OfferPopupTriggerPlacement offerPopupTriggerPlacement, List<(OfferPopupTrigger, IActiveOfferGroup)> offerPopupTriggerGroups, int index, OfferPopupTrigger popupTrigger, IActiveOfferGroup offerGroup, string showMethod, bool wasActivatedViaFallback, bool shouldReplaceMenu, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowExtendGameEventPopup_003Ed__338))]
	public UniTask ShowExtendGameEventPopup(IBoardEventModel boardEvent, MetaTime? reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowOfferGroupPopup(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId)
	{
	}

	public UniTask ShowOfferGroupPopupInternalAsync(IActiveOfferGroup activeOfferGroup, bool wasShownAutomatically, string showMethod, Option<OfferPlacementId> overrideOfferPlacementId, bool shouldReplaceMenu, Action closeSequenceAction, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowOfferGroupPopupAsync_003Ed__341))]
	public UniTask ShowOfferGroupPopupAsync(IActiveOfferGroup activeOfferGroup, OffersPopupViewModel menuState, bool shouldReplaceMenu, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowDailyTasksMenu()
	{
	}

	public DailyTasksPopupMenuState GenerateDailyTasksPopupMenuState()
	{
		return null;
	}

	public void ShowEventCalendarPopupMenu(bool hideCurrentFirst = false, EventCalendarPopupMenuFlags flags = EventCalendarPopupMenuFlags.None)
	{
	}

	public void ShowShopWarningOrErrorPopupMenu(string title, string description, string button)
	{
	}

	public void ShowMergeGridInventoryPopupMenu()
	{
	}

	public void ShowCurrencyBankPopup()
	{
	}

	public void ShowCurrencyBankInfoPopup(CurrencyBankModel currencyBankModel)
	{
	}

	public void ShowCurrencyBankRewardPopup(GameLogic.Banks.CurrencyBankState currencyBankState, Currencies currencyType, long amount)
	{
	}

	public void ShowGoToAppStoreOrGooglePlayMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction)
	{
	}

	public void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction)
	{
	}

	public void ShowConnectionErrorMessage(string titleText, string descriptionText, string buttonText, Action positiveButtonAction, Func<string> livingError)
	{
	}

	public void ShowTieredOffersEndPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction)
	{
	}

	public void ShowMakeYourOwnOfferInfoPopup()
	{
	}

	public void ShowNoInternetConnectionPopup(Action positiveButtonAction)
	{
	}

	public void ShowNoPetsUnlockedPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction)
	{
	}

	public void PromptSellConfirmation(Action confirmationAction)
	{
	}

	public void PromptCollectConfirmation(Action confirmationAction, string questionLocalizationIdPrefix = null)
	{
	}

	public string GetCollectConfirmationQuestionLocalizationId(string prefix = null)
	{
		return null;
	}

	public void PromptBuyConfirmation(Action confirmationAction, ICost cost)
	{
	}

	public void ShowDeleteAccountConfirmation(Action confirmationAction)
	{
	}

	public void ShowResetAccountConfirmation(Action confirmationAction)
	{
	}

	public void ShowAccountSuccessfullyResettedPopup(Action continueAction)
	{
	}

	public void ShowSocialLoginSuccessMessage(AuthenticationPlatform authPlatform, string authUserId)
	{
	}

	public void ShowSocialLoginFailedMessage(string error)
	{
	}

	public void ShowNotEnoughCurrencyPopup(ICost cost, int missingAmount)
	{
	}

	public void ShowGenericPopupWithBoardItems(string title, string description, Action positiveAction, List<IItemDefinition> boardItems)
	{
	}

	public void ShowGameQuitConfirmationPopup(Action confirmationAction)
	{
	}

	public void EnforceHideBlockingLayer()
	{
	}

	public void ShowSocialLoginSelectGameStateMessage(ResolveSocialAuthConflictPopupMenuState.PlayerData localPlayerData, ResolveSocialAuthConflictPopupMenuState.PlayerData remotePlayerData, Action<ResolveSocialAuthConflictPopupMenuState.PlayerData> selectAction)
	{
	}

	public void ShowSocialLoginConfirmStateSelectionMessage(ResolveSocialAuthConflictPopupMenuState.PlayerData selectedPlayerData, Action confirmAction)
	{
	}

	public void ShowSocialLoginAlreadyLoggedInMessage(AuthenticationPlatform authenticationPlatform)
	{
	}

	public void ShowChooseLanguagePopupMenu()
	{
	}

	public void ShowMaintenanceModeUpcomingPopupMenu()
	{
	}

	public void ShowMaintenanceModeOngoingPopupMenu(Action positiveAction)
	{
	}

	public void ShowShopRefreshMessage(Action positiveAction, OfferPlacementId placementId)
	{
	}

	public void DisableBlockingLayer()
	{
	}

	public void EnableBlockingLayer()
	{
	}

	public void InputInBlockingLayer()
	{
	}

	public void NotifyDirector()
	{
	}

	public void ShowDecorationSelectionMenu(DecorationSelectionMenuState wantedState = null)
	{
	}

	public void ShowDecorationSelection(DecorationSelectionMenuState wantedState = null)
	{
	}

	public void ShowPetSelectionMenu(PetSelectionMenuState.PetSelectionMode petSelectionMode, PetId previewPetId, DecorationId previewDecorationId, int decorationLayer)
	{
	}

	public void ShowTOSv3PopupMenu()
	{
	}

	public void ShowAccountResetPopup()
	{
	}

	public void ShowAccountDeleteInformationPopup()
	{
	}

	public void ShowAccountDeleteScheduledPopup(bool userInitiated, bool fromGameLoading)
	{
	}

	[AsyncStateMachine(typeof(_003CShowGarageCleanupEventPopup_003Ed__388))]
	public UniTask ShowGarageCleanupEventPopup(GarageCleanupEventModel eventModel, string source, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowGarageCleanupInfoPopup_003Ed__389))]
	public UniTask ShowGarageCleanupInfoPopup(GarageCleanupEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowGarageCleanupStartPopup_003Ed__390))]
	public UniTask ShowGarageCleanupStartPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowGarageCleanupEndPopup_003Ed__391))]
	public UniTask ShowGarageCleanupEndPopup(GarageCleanupEventPrefabs eventPrefabs, GarageCleanupEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowCodexPopupMenu(CodexCategoryInfo category)
	{
	}

	public void ShowCodexCombinedPopupMenu()
	{
	}

	public void ShowSocialMediaPopupMenu(SocialMediaPlatform socialMediaPlatform, string source)
	{
	}

	public void ShowWebShopPurchasePopupMenu(WebshopPurchase webshopPurchase)
	{
	}

	public void ShowWebShopSecureCodePopupMenu()
	{
	}

	public void ShowWebShopSignInPopupMenu(string mergeMansionUrl, string code)
	{
	}

	public void ShowPetRewardPopup(PetInfo petInfo, Action onClose)
	{
	}

	public void ShowPetInfoPopup(PetInfo petInfo)
	{
	}

	public void ShowLimitedOfferInfoPopup()
	{
	}

	public void ShowMiniGameCompletedPopup(Action positiveButtonAction)
	{
	}

	public void HandleEventPopups()
	{
	}

	public HashSet<string> CollectEventEndTagsToClose(out bool forceCloseAll)
	{
		forceCloseAll = default(bool);
		return null;
	}

	public static bool HasEventEndedFromContentDepletion(PlayerModel player, MetaActivableState meta)
	{
		return false;
	}

	public void FilterAndRebuildMenuStack(HashSet<string> tagsToClose)
	{
	}

	public void EnsureValidCurrentMenu(HashSet<string> tagsToClose, bool forceCloseAllAndRedirectMansion)
	{
	}

	public void RegisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string menuTag)
	{
	}

	public void UnregisterPopupToCloseOnEventEnd(MetaActivableState eventModel, string menuTag)
	{
	}

	public void ShowHotspotPopupForType(IHotspotDefinition hotspotDefinition, TaskSource taskSource)
	{
	}

	public void ShowAreaLockedHotspotPopupMenu(HotspotId hotspotId, TaskSource taskSource)
	{
	}

	public void ShowAreaLockedHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource)
	{
	}

	public void ShowAreaHotspotPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, Action showHotspotFinished = null)
	{
	}

	public void ShowAreaHotspotPopupMenu(HotspotId hotspotId, TaskSource taskSource)
	{
	}

	public void ShowAreaUnlockedPopupMenu(IAreaInfo area)
	{
	}

	public void ShowAreaUnlockedPopupMenu(AreaId areaId)
	{
	}

	public void ShowAreaInfoPopupMenu(IAreaInfo area, AreaInfoStyle areaInfoStyle, bool showIsNavigateBack, TaskSource taskSource)
	{
	}

	public void ShowAreaCompleteRewardPopup(IAreaInfo area, IWalletState walletState, RandomPCG rewardContainerRandom)
	{
	}

	public void ShowAreaCompleteRewardPopup(AreaId areaId)
	{
	}

	public void AddMenuVisibilityCallback(Action<bool> addAction)
	{
	}

	public void AnyMenuGoesVisible()
	{
	}

	public void LastMenuGoesHidden()
	{
	}

	[AsyncStateMachine(typeof(_003CShowMenuAfterOthersHaveBeenHidden_003Ed__422))]
	public UniTask ShowMenuAfterOthersHaveBeenHidden(AssetReferenceT<GameObject> prefabRef, IMenuState menuState, string eventID, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowNotEnoughSomethingPopupMenu(Currencies currency, int amount)
	{
	}

	public void ShowDebugConfirmationPopup(string titleText, string descriptionText, string buttonText, Action positiveButtonAction)
	{
	}

	public Sprite GetTimeIcon()
	{
		return null;
	}

	public Sprite GetBubbleIcon()
	{
		return null;
	}

	public void PromptMergeConfirmation(MergeResult mergeResult, MergeItem fromItem, MergeItem toItem, Action confirmationAction = null, Action cancelAction = null, bool isAutoMergeEnabled = false)
	{
	}

	public void ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CShowProgressionEventProgressionPopup_003Ed__433))]
	public UniTask ShowProgressionEventProgressionPopup(ProgressionEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowProgressionEventStartPopup_003Ed__434))]
	public UniTask ShowProgressionEventStartPopup(ProgressionEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CShowProgressionEventGenericInfoPopup_003Ed__436))]
	public UniTask ShowProgressionEventGenericInfoPopup(ProgressionEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowProgressionEventEndPopup(ProgressionEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CShowProgressionEventEndPopup_003Ed__438))]
	public UniTask ShowProgressionEventEndPopup(ProgressionEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowProgressionEventPurchasePassPopup(ProgressionEventModel eventModel, string triggerType, ProgressionEventPurchasePassStyle style = ProgressionEventPurchasePassStyle.Default)
	{
	}

	public void ShowProgressionEventPassObtainedPopup(ProgressionEventModel eventModel, ProgressionEventTrack previousActiveTrack, ProgressionEventTrack purchasedTrack)
	{
	}

	public void ShowProgressionEventBackToBackPopup(ProgressionEventModel eventModel)
	{
	}

	public void ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction)
	{
	}

	[AsyncStateMachine(typeof(_003CShowProgressionEventChallengeRewardPopup_003Ed__443))]
	public UniTask ShowProgressionEventChallengeRewardPopup(ProgressionEventModel eventModel, int claimedLevelNumber, Action rewardClaimedAction, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowProgressionPackEventStartPopup(ProgressionPackEventModel eventModel)
	{
	}

	public void ShowProgressionPackEventProgressionPopup(ProgressionPackEventModel eventModel)
	{
	}

	public void ShowProgressionPackEventInfoPopup(ProgressionPackEventModel eventModel)
	{
	}

	public void ShowProgressionPackAfterPurchasePopup(ProgressionPackEventModel eventModel)
	{
	}

	public void ShowProgressionPackEventEndPopup(ProgressionPackEventModel eventModel)
	{
	}

	public void AnimateProgressionPackTaskCompleted(StatsObjective objective, TaskType taskType, List<IPlayerReward> rewards, Action onComplete, int levelProgress, bool isFullProgress)
	{
	}

	public void InitProgressionPackTaskRewardScreen(ProgressionPackTaskCompleteView progressionPackCompleteView, IHotspotCompletionState hotspotCompletionState, DialogueRunner dialogueRunner, MessagingController messagingController)
	{
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventStartPopup_003Ed__451))]
	public UniTask ShowCollectibleBoardEventStartPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventEndPopup_003Ed__452))]
	public UniTask ShowCollectibleBoardEventEndPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventProgressionPopup_003Ed__453))]
	public UniTask ShowCollectibleBoardEventProgressionPopup(CollectibleBoardEventModel eventModel, CancellationToken ct, bool hideCurrentFirst = false)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventInfoPopup_003Ed__454))]
	public UniTask ShowCollectibleBoardEventInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventTeasePopup_003Ed__455))]
	public UniTask ShowCollectibleBoardEventTeasePopup(CollectibleBoardEventInfo eventInfo, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventExtendPopup_003Ed__456))]
	public UniTask ShowCollectibleBoardEventExtendPopup(CollectibleBoardEventModel eventModel, MetaTime? reviewEndAt, bool automaticShow, Action onFinalize, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowCollectibleBoardEventTaskPopup(CollectibleBoardEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CShowCollectibleBoardEventIntroPopup_003Ed__458))]
	public UniTask ShowCollectibleBoardEventIntroPopup(CollectibleBoardEventInfo eventInfo, MetaActivableVisibleStatus.InPreview inPreview, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLayeredDecorationInfoPopup_003Ed__459))]
	public UniTask ShowLayeredDecorationInfoPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLayeredDecorationLockedPopup_003Ed__460))]
	public UniTask ShowLayeredDecorationLockedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowFallbackRewardInfoPopup(CollectibleBoardEventModel eventModel, PlayerModel playerModel, PlayerClientContext playerContext, int level, LevelEventLevelType levelType, IPlayerReward reward, IPlayerReward fallbackReward, IIconLibrary iconLibrary, Action<List<IPlayerReward>> onClaimed, IBoardController boardController, ITitleBarRewardWidgets titleBarRewardWidgets, Action claimCallback)
	{
	}

	[AsyncStateMachine(typeof(_003CShowDecorationOwnedPopup_003Ed__462))]
	public UniTask ShowDecorationOwnedPopup(CollectibleBoardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowLayeredDecorationMaxLevelPopup(DecorationInfo decoration, string headerLocId, string descriptionLocId)
	{
	}

	public void TryShowBoardEventAreaHotspotPopup(string eventId)
	{
	}

	public void TryShowCollectibleBoardEventAreaHotspotPopup(CollectibleBoardEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CShowFishCatchPopup_003Ed__466))]
	public UniTask ShowFishCatchPopup(CollectibleBoardEventId collectibleBoardEventId, ItemDefinition fishItemDefinition, F32 fishWeight, WeightCategory fishWeightCategory, int flags, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowLevelUpMergeChainPopup(IMergeChainDefinition mergeChain, int level)
	{
	}

	[AsyncStateMachine(typeof(_003CShowLeaderboardEventStartPopup_003Ed__468))]
	public UniTask ShowLeaderboardEventStartPopup(LeaderboardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLeaderboardEventInfoPopup_003Ed__469))]
	public UniTask ShowLeaderboardEventInfoPopup(LeaderboardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLeaderboardEventRankingPopup_003Ed__470))]
	public UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, CancellationToken ct, Action buttonActionOverride = null)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLeaderboardEventRankingPopup_003Ed__471))]
	public UniTask ShowLeaderboardEventRankingPopup(LeaderboardEventModel eventModel, (List<LeaderboardEventPlayerRankingEntry>, int) rankingsAndRankingPosition, CancellationToken ct, Action buttonActionOverride = null)
	{
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowLeaderboardEventEndPopup_003Ed__472))]
	public UniTask ShowLeaderboardEventEndPopup(LeaderboardEventModel eventModel, CancellationToken ct)
	{
		return default(UniTask);
	}

	public LeaderboardEventRankingPopup TryGetExistingLeaderboardEventRankingPopup(LeaderboardEventModel eventModel)
	{
		return null;
	}

	public void ShowLeaderboardEventDeterminingRewardsPopup()
	{
	}

	public void ShowBoultonLeagueEventStartPopup(BoultonLeagueEventModel eventModel)
	{
	}

	public void ShowBoultonLeagueEventInfoPopup(BoultonLeagueEventModel eventModel)
	{
	}

	public void ShowBoultonLeagueEventProgressionPopup(BoultonLeagueEventModel eventModel)
	{
	}

	public void ShowBoultonLeagueEventEndPopup(BoultonLeagueEventModel eventModel, BoultonLeagueEventEndPopupShowParams showParams = null)
	{
	}

	public void ShowBoultonLeagueDeterminingLeaderboardPlacementRewardsPopup()
	{
	}

	public void ShowMiniEventStartPopup(MiniEventModel eventModel)
	{
	}

	public void ShowMiniEventInfoPopup(MiniEventModel eventModel)
	{
	}

	public void ShowPlayerNameNotificationPopup(IPlayer playerModel, PlayerNamePopupFlags playerNamePopupFlags)
	{
	}

	public void ShowPlayerNamePopup(IPlayer playerModel, bool hideCurrentFirst = false, PlayerNamePopupFlags flags = PlayerNamePopupFlags.None)
	{
	}

	public void ShowReEngagementRewardPopup(ReEngagementSettings settings)
	{
	}

	public void ShowReportPlayerPopup(int? participantIdxToReport, Metaplay.Core.EntityId? entityIdToReport, string reportedPlayerName, bool hideCurrentFirst = false)
	{
	}

	public void ShowGenericRewardPopup(IPlayerReward reward, string headerLocalizationId, object[] headerLocalizationArgs, Action onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null)
	{
	}

	[IteratorStateMachine(typeof(_003CShowDownloadContentMenu_003Ed__487))]
	public IEnumerator ShowDownloadContentMenu(AddressablesDownloadProcess downloadProcess)
	{
		return null;
	}

	public bool MenuAlreadyShown(Type menuStateType)
	{
		return false;
	}

	public void ShowDownloadContentFloatingMenu(Action onClosePopupCallback)
	{
	}

	[AsyncStateMachine(typeof(_003CShowCameraTutorialPopup_003Ed__490))]
	public UniTask ShowCameraTutorialPopup(CollectibleBoardEventId relatedEventId, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void RepopulateMenusInStack()
	{
	}

	public void ShowSeasonStartPopup(SeasonInfo season, Action completeAction)
	{
	}

	public void SetTab(string targetId, int tabIndex)
	{
	}

	public bool IsDebugStatePreventing()
	{
		return false;
	}

	public void ShowDecorationShopPopup(DecorationShopModel decorationShopModel)
	{
	}

	public void ShowSkipTimePopup(MetaDuration skipDuration, Action onClosed)
	{
	}

	public void ShowInfiniteEnergyPopup(MetaDuration duration, bool showAfterMenusClosed = false, bool animateRewardClaim = true, Action onClosed = null)
	{
	}

	public void ShowAutoMergeBoosterPopup(MetaDuration durationSeconds)
	{
	}

	public void ShowCooldownRemoverRewardPopup(MetaDuration duration, Action onClosed)
	{
	}

	public void ShowOnFireRewardPopup(MetaDuration duration, Action onClosed)
	{
	}

	public void ShowOnFireInfoPopup(Action onImpact)
	{
	}

	public void ShowBoosterInfoPopup(IPlayerReward reward)
	{
	}

	public void ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource)
	{
	}

	[AsyncStateMachine(typeof(_003CShowCardGamePopupMenu_003Ed__504))]
	public UniTask ShowCardGamePopupMenu(IHotspotDefinition hotspot, TaskSource taskSource, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowConfirmationDialogPopup(string titleTextLocId, string questionTextLocId, string confirmButtonTextLocId, string cancelButtonTextLocId, Action confirmAction, Action cancelAction, ConfirmationDialogExtra extra)
	{
	}

	public void ShowLocationTravelPopup(LocationTravelInfo locationTravelInfo, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true)
	{
	}

	public void ShowLocationTravelPopup(IEnumerable<LocationTravelInfo> locationTravelInfos, TaskSource taskSource, Action onTravel = null, bool allowNegativeActions = true)
	{
	}

	public void ShowLocationTravelConfirmationPopup(LocationId locationId, bool forceTravel, string eventLocId = "", Action onTravel = null, IAreaInfo areaInfo = null, bool isAreaTeaser = false)
	{
	}

	public void ShowLocationTravelMinimapPopup(IEnumerable<LocationTravelInfo> locationTravelInfos = null)
	{
	}

	public void ShowIllustrationPopupMenu(IHotspotDefinition hotspot, TaskSource taskSource)
	{
	}

	public void TryReturnToMansionBeforeAction(Action onFinish)
	{
	}

	public void ShowMysteryMachineEventStartPopup(MysteryMachineEventModel eventModel)
	{
	}

	public void ShowMysteryMachineEventInfoPopup(MysteryMachineEventModel eventModel, bool enteringFirstTime = false)
	{
	}

	public void ShowMysteryMachineLevelInfoPopup(MysteryMachineEventModel eventModel, bool levelingUp)
	{
	}

	public void ShowMysteryMachineConfirmationPopup(MysteryMachineEventModel eventModel, MysteryMachineConfirmationData data, Action onCompleteAction)
	{
	}

	public void ShowCelebrationPopup(Action onRestart, string type)
	{
	}

	public void ShowMysteryMachineEventTaskProgressionPopup(MysteryMachineEventModel eventModel)
	{
	}

	public void ShowMysteryMachineEventEndOfRunPopup(MysteryMachineEventModel eventModel, MysteryMachineScoreView scoreView, Action onClose)
	{
	}

	public void ShowMysteryMachineEventEndPopup(MysteryMachineEventModel eventModel)
	{
	}

	public void ShowMysteryMachineItemOddsPopup(MysteryMachineEventModel eventModel)
	{
	}

	public void ShowMysteryMachineEventDeterminingRewardsPopup()
	{
	}

	public void ShowSoloMilestoneEventStartPopup(SoloMilestoneEventModel eventModel, bool isAuto = false)
	{
	}

	public void ShowSoloMilestoneEventEndPopup(SoloMilestoneEventModel eventModel)
	{
	}

	public void ShowSoloMilestonEventCompletionPopup(SoloMilestoneEventModel eventModel)
	{
	}

	public IMenuSection GetMenuWithTag(string menuTag)
	{
		return null;
	}

	public void RefreshProducerInventoryIndicators()
	{
	}

	public void ShowDownloadErrorPopup(Action positiveAction, Action negativeAction, string titleLocalizationId = "DownloadError_Popup_Title", string descriptionLocalizationId = "DownloadError_Popup_Description", string positiveButtonLocalizationId = "DownloadError_Popup_Retry", string negativeButtonTextLocalizationId = "DownloadError_Popup_Cancel")
	{
	}

	public void ShowDailyScoopEventStartPopup(DailyScoopEventModel eventModel, bool isAuto = false)
	{
	}

	public void ShowDailyScoopInfoPopup(bool isAuto = false)
	{
	}

	public void AnimateDailyScoopTaskCompleted(StatsObjective objective, TaskType taskType, List<IPlayerReward> rewards, Action endWalletOverrideCallback, int progressIndex)
	{
	}

	public void ShowEnergyModeFTUEPopup(EnergyModeEventModel eventModel)
	{
	}

	public void ShowEnergyModeEventStartPopup(EnergyModeEventModel eventModel)
	{
	}

	public void ShowEnergyModeEventEndPopup(EnergyModeEventModel eventModel)
	{
	}

	public void InitDailyScoopTaskRewardScreen(DailyScoopTaskCompleteView dailyScoopCompleteView, IHotspotCompletionState hotspotCompletionState, DialogueRunner dialogueRunner, MessagingController messagingController)
	{
	}

	public void ShowTemporaryCardCollectionOpenCardPackPopup(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List<(CardCollectionCardId cardId, bool duplicate)>> cardsPerPack)
	{
	}

	public void ShowTemporaryCardCollectionCardPopup(TemporaryCardCollectionEventModel eventModel, List<CardCollectionCardId> cardIds, CardCollectionCardId currentCardId)
	{
	}

	public void ShowTemporaryCardCollectionCardSetPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardSetId cardCollectionCardSetId, bool hideCurrentFirst)
	{
	}

	public void ShowTemporaryCardCollectionCollectedAllCardsPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowTemporaryCardCollectionOddsPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionPackId packId, bool hideCurrentFirst = false)
	{
	}

	public void ShowTemporaryCardCollectionProgressionPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowTemporaryCardCollectionRewardPopup(TemporaryCardCollectionEventModel eventModel, bool debug = false)
	{
	}

	public void ShowTemporaryCardCollectionInfoPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowTemporaryCardCollectionPrestigePopup(TemporaryCardCollectionEventModel eventModel, bool hideCurrentFirst, bool goToProgressionPopupOnDismiss = false)
	{
	}

	public void ShowTemporaryCardCollectionStartPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowTemporaryCardCollectionEndPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowActivateWildCardPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial, Action onTap)
	{
	}

	public void ShowTransformWildCardPopup(TemporaryCardCollectionEventModel eventModel, CardCollectionCardId cardId, bool discovered, bool wildCardIsSpecial)
	{
	}

	public void ShowTemporaryCardCollectionInformantPopup(TemporaryCardCollectionEventModel eventModel, bool isSpecial)
	{
	}

	public void PromptCraftCardConfirmation(TemporaryCardCollectionEventModel eventModel, TemporaryCardCollectionCardHolder cardHolder, bool discovered, bool wildCardIsSpecial)
	{
	}

	public void ShowTemporaryCardCollectionEvidenceRoomPopup(TemporaryCardCollectionEventModel eventModel)
	{
	}

	public void ShowTemporaryCardCollectionEvidenceBoxOpening(CardCollectionEvidenceBoxInfo boxInfo)
	{
	}

	public void ShowCardCollectionSupportingEventPopup(CardCollectionSupportingEventModel eventModel)
	{
	}

	public void ShowRewardContainerInfoPopup(RewardContainerInfo rewardContainer)
	{
	}

	public void ShowRewardContainerPopup(RewardContainerInfo rewardContainer, List<IPlayerReward> rewards, Option<Action> onClose, IWalletState customWalletState = null, RandomPCG rewardContainerRandomCheckpoint = null)
	{
	}

	public void ShowDailyChallengesMinigamePopup(IPlayer player, IDailyChallengesMinigameModel minigameModel, ICoreSupportEventModel eventModel)
	{
	}

	public void ShowDailyChallengesEventInfoPopup(bool isAuto, ICoreSupportEventModel eventModel)
	{
	}

	public void ShowShortLeaderboardEventStartPopup(ShortLeaderboardEventModel eventModel)
	{
	}

	public void ShowShortLeaderboardEventEndPopup(ShortLeaderboardEventModel eventModel)
	{
	}

	public void ShowShortLeaderboardEventInfoPopup(ShortLeaderboardEventModel eventModel)
	{
	}

	public void ShowShortLeaderboardEventProgressionPopup(ShortLeaderboardEventModel eventModel)
	{
	}

	public void ShowShortLeaderboardEventTeasePopup(ShortLeaderboardEventModel eventModel)
	{
	}

	public void ShowDigEventPrototype(ICoreSupportEventModel eventModel, bool enabled)
	{
	}

	public void ShowCloudTransitionEffect()
	{
	}

	public void ShowDigEventMuseumPopup(DigEventId digEventId, CoreSupportEventModel eventModel)
	{
	}

	public void ShowDigEventAddItemToCollectionDebugPopup()
	{
	}

	public void ShowMuseumInfoPopup(CoreSupportEventModel eventModel)
	{
	}

	public void ShowDigEventMinigameInfoPopup(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowDigEventItemDiscoveryPopup(CoreSupportEventModel eventModel, string treasureId, Vector2 spriteSize, bool isShinyItem, Action onPopupClosed)
	{
	}

	public void ShowDigEventCollectionCompletePopup(CoreSupportEventModel eventModel)
	{
	}

	[AsyncStateMachine(typeof(_003CBatchRewardContainerClaimSequence_003Ed__570))]
	public UniTask BatchRewardContainerClaimSequence(List<IPlayerReward> rewardsToClaim, IWalletState startingWalletState, List<RandomPCG> rewardContainerRandomCheckpoints, Action onStart, Action onComplete)
	{
		return default(UniTask);
	}

	public void ShowClassicRacesEventProgressionPopup(ClassicRacesMinigameModel minigameModel, ICoreSupportEventModel eventModel)
	{
	}

	public void ShowClassicRacesEventInfoPopup(ClassicRacesMinigameModel minigameModel, Action onClosedCallback)
	{
	}

	public void ShowClassicRacesExtraRacesPopup(ClassicRacesMinigameModel minigameModel)
	{
	}

	public void ShowClassicRacesRaceResultPopup(ClassicRacesMinigameModel minigameModel, CoreSupportEventModel eventModel, Action onCompletedCallback)
	{
	}

	public void ShowRollTheDiceMinigamePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel)
	{
	}

	public void ShowRollTheDiceMinigameInfoPopup(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowRollTheDiceRecipeCompletePopup(RollTheDice minigameModel, ICoreSupportEventModel eventModel, AssetReferenceSprite dishSpriteRef, string dishName, Action onPopupClosed)
	{
	}

	public void ShowBuilderEventMinigamePopup(BuilderEventMinigameModel minigameModel, ICoreSupportEventModel eventModel)
	{
	}

	public void ShowBuilderEventInfoPopup(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowBuilderEventScreenTransitionEffect(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowBuilderEventAllBuildsCompletedPopup(string titleText, string descriptionText, string buttonText)
	{
	}

	public void ShowBuilderEventOutOfTokensPopup(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowBuilderEventCompletionRewardPopup(IBuilderEventMinigame minigameModel, ICoreSupportEventModel eventModel, Action onCompletedCallback)
	{
	}

	[AsyncStateMachine(typeof(_003CDelayedCall_003Ed__584))]
	public static UniTask DelayedCall(Action action, float waitBeforeCall = -1f)
	{
		return default(UniTask);
	}

	public void ShowAutoMergeEventInfoPopup(ICoreSupportEventModel eventModel)
	{
	}

	public void ShowAutoMergeEventStartPopup(CoreSupportEventModel eventModel)
	{
	}

	public void ShowAutoMergeFeatureFTUEPopup(bool force = false)
	{
	}

	public void ShowCoreSupportEventStartPopup(CoreSupportEventModel eventModel)
	{
	}

	public void ShowCoreSupportEventEndPopup(CoreSupportEventModel eventModel)
	{
	}

	public void ShowCoreSupportEventTeasePopup(CoreSupportEventModel eventModel)
	{
	}

	public void ShowCoreSupportEventIntroPopup(ICoreSupportEventInfo eventInfo, MetaActivableVisibleStatus.InPreview inPreview)
	{
	}

	public void ShowMixABoosterEventPopup(MixABoosterEventModel eventModel, bool autoPopup)
	{
	}

	public void ShowMixABoosterStartPopup(MixABoosterEventModel eventModel, bool showEndVariant, bool autoPopup)
	{
	}

	public void ShowMixABoosterInfoPopup(MixABoosterEventModel eventModel, bool autoPopup)
	{
	}

	public void PlayDialogue(StoryDefinitionId storyDefinitionId, Action action)
	{
	}

	public void ShowWildItemRewardPopup(ItemDefinition item, Vector3 rewardTargetPosition)
	{
	}

	public void ShowWildItemInfoPopup(Action onPopupClosed = null)
	{
	}

	public void StartTransitionWatchdogForTag(string menuTag, float timeoutSeconds)
	{
	}

	[AsyncStateMachine(typeof(_003CTransitionWatchdogTask_003Ed__599))]
	public UniTask TransitionWatchdogTask(string menuTag, float timeoutSeconds, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ShowDebugCardCollectionRollCardPacksSimulationPopup()
	{
	}
}
