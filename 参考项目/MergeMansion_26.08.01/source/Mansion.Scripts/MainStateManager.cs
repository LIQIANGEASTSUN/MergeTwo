using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Analytics;
using Code.GameLogic.ExtraSpawns;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.TemporaryCardCollection;
using Code.InitFlow;
using Code.MainState;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Game.Cloud.Player;
using Game.Logic.Message;
using GameLogic;
using GameLogic.Banks;
using GameLogic.CardCollection;
using GameLogic.Config;
using GameLogic.Cutscenes;
using GameLogic.Decorations;
using GameLogic.Hotspots;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items.Bubble;
using GameLogic.Player.Modes;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using GameLogic.Story.SlideShows;
using GameLogic.Story.Videos;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.PlayerSupport;
using Metacore.MergeMansion.SystemGroups;
using Metacore.MergeMansion.ThirdParty.FirebaseService;
using Metaplay.Client.Messages;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.League;
using Metaplay.Core.League.Player;
using Metaplay.Core.Math;
using Metaplay.Core.Message;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Session;
using Metaplay.Unity;
using Offers;
using UnityEngine;

public class MainStateManager : MonoBehaviour, IPlayerModelClientListener, IPlayerDivisionModelClientListenerCore, IDivisionModelClientListenerCore, IServerNotificationsSource, ITickSystem, IApplicationQuitSystem
{
	public delegate void ConnectionUpdateEventHandler(bool isConnectionError);

	[StructLayout((LayoutKind)3)]
	[CompilerGenerated]
	public struct _003CWaitForCallbackAsync_003Ed__174 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float timeoutSeconds;

		public float intervalSeconds;

		public CancellationToken ct;

		public Func<bool> wasCalled;

		public Action timeout;

		[NonSerialized]
		public float _003CtimeLeft_003E5__2;

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
	public struct _003CWaitForPlayerDivisionAsync_003Ed__184 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float timeoutSeconds;

		public float intervalSeconds;

		public CancellationToken ct;

		public MainStateManager _003C_003E4__this;

		[NonSerialized]
		public float _003CtimeLeft_003E5__2;

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

	[NonSerialized]
	public LoginMainLoopDebugDiagnostics debugDiagnostics;

	[NonSerialized]
	public int lastActionedMailCount;

	[SerializeField]
	public bool connectOnAwake;

	[SerializeField]
	public int widthNativeResolution;

	[SerializeField]
	public float renderScaleLowerResult;

	[NonSerialized]
	public EventsInit eventsInit;

	[NonSerialized]
	public AnalyticsCollector analyticsCollector;

	[NonSerialized]
	public readonly Queue<Action> onPlaybackFinished;

	[NonSerialized]
	public PlayerSupportService playerSupportService;

	[NonSerialized]
	public bool waitingForWebShopAuthTokenResponse;

	[NonSerialized]
	public OffersManager offersManager;

	[NonSerialized]
	public MenuController menuController;

	[CanBeNull]
	[NonSerialized]
	public IMainStateBoardEvents _boardEvents;

	public MetaplayClient MetaplayClient { get; set; }

	public PlayerModel PlayerModel => null;

	public MetaplayConnection Connection => null;

	public bool ConnectionEstablished => false;

	public ConnectionErrorState ErrorState { get; set; }

	public static MainStateManager singleton => null;

	public static bool HasInstance => false;

	public bool IsConnectedToServer { get; set; }

	public event Action<StoryElementInfo, Action, Action> DialoguePlaybackInitializing
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

	public event Action<Video> VideoPlaybackInitializing
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

	public event Action<SlideShow> SlideShowPlaybackInitializing
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

	public event Action<SlideShow> SlideShowPlaybackRequested
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

	public event Action<SlideShow> SlideShowPlaybackFinished
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

	public event Action FlashSalesRollRequested
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

	public event Action<CutsceneInfo> CutscenePlaybackInitializing
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

	public event Action<BoultonLeagueEventId> BoultonLeagueEventDivisionJoined
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

	public event Action<BoultonLeagueEventId> BoultonLeagueEventFinalized
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

	public event Action<BoultonLeagueEventId, int> BoultonLeagueEventScoreChanged
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

	public event ConnectionUpdateEventHandler OnConnectionUpdate
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

	public event Action UpdateExtraRewards
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

	public LoginMainLoopDebugDiagnostics GetDebugDiagnostics()
	{
		return null;
	}

	public MainStateManager Init(ISafeRollback mainRollback, MetaplayClient metaplayClient, AnalyticsCollector analyticsCollector, EventsInit eventsInit, PlayerSupportService playerSupportService)
	{
		return null;
	}

	public void Tick()
	{
	}

	public void SetBoardEvents(IMainStateBoardEvents boardEvents)
	{
	}

	public void Init2(OffersManager offersManager, MenuController menuController, IMainStateBoardEvents boardEvents)
	{
	}

	public void PreInitializeAsync(FirebaseService firebaseService, MessageDispatcher messageDispatcher, MetaplayConnection metaplayConnection, ISafeRollback rollback)
	{
	}

	[PublicAPI]
	public void Connect()
	{
	}

	public void StartInner()
	{
	}

	public void UpdateInner()
	{
	}

	public void ProcessMailsThatNeedAutomaticActions()
	{
	}

	public bool TryHandleConnectionError(ConnectionState connectionState)
	{
		return false;
	}

	public void ClearConnectionErrorState()
	{
	}

	public void DidSetInitialState()
	{
	}

	void IPlayerModelClientListener.BoardActTriggered(MergeBoardId boardId, ICollection<MergeBoardAct> boardActs)
	{
	}

	void IPlayerModelClientListener.BoardActTriggered(MergeBoardId boardId, MergeBoardAct boardAct)
	{
	}

	void IPlayerModelClientListener.OnGarageCleanupPatternsClaimed(GarageCleanupEventId eventId, List<GarageCleanupPatternInfo> patterns, int lastClaimedRowIndex, int lastClaimedColumnIndex)
	{
	}

	void IPlayerModelClientListener.OnGarageCleanupEventModelLeveledUp(GarageCleanupEventId eventId)
	{
	}

	void IPlayerModelClientListener.OnGarageCleanupSlotClaimed(GarageCleanupEventId eventId, int rowIndex, int columnIndex)
	{
	}

	public void RunVisualEffect(IVisualEffect visualEffect)
	{
	}

	public void TriggerDialogue(StoryDefinitionId dialogueId)
	{
	}

	public void TriggerVideo(VideoId videoId)
	{
	}

	public void TriggerSlideShow(SlideShowId slideShowId)
	{
	}

	public void TriggerCutscene(CutsceneId cutsceneId)
	{
	}

	public void FinishSlideShow(SlideShowId slideShowId)
	{
	}

	public void ForceCompleteDirectorGroup(DirectorGroupId directorGroupId)
	{
	}

	public void TriggerPopup(string popupId, List<ISerializableArg> args)
	{
	}

	public void FlashSalesRolled()
	{
	}

	public void MarkDirectorGroupEnded(DirectorGroupId directorGroupId)
	{
	}

	public void ResolveDecorationRewardsDirectorEvents(List<DecorationId> decorationRewards)
	{
	}

	public void CleanupLayeredDecorationsDirectors(DecorationId decorationId)
	{
	}

	public void CleanupDirectorGroup(DirectorGroupId groupId)
	{
	}

	public void HideEventHotspot(string eventId)
	{
	}

	public void TriggerSong(string songAlias)
	{
	}

	void IPlayerModelClientListener.OnAddedBankCurrencyAfterCompleteDailyTask(int addedAmount)
	{
	}

	void IPlayerModelClientListener.OnAddedBankCurrencyAfterCompleteEventTask(int addedAmount)
	{
	}

	void IPlayerModelClientListener.OnAddedBankCurrencyAfterCompleteHotspotMergeGoalTask(int addedAmount, IHotspotDefinition hotspotDefinition, float[] originPosition)
	{
	}

	void IPlayerModelClientListener.OnAddedBankCurrencyAfterMerge(int addedAmount, Coordinate coordinate)
	{
	}

	void IPlayerModelClientListener.OnAddedBankCurrencyAfterSpawnItemUsingEnergy(int addedAmount, Coordinate coordinate)
	{
	}

	void IPlayerModelClientListener.OnConsumedCurrencyBank(CurrencyBankId currencyBankId, long consumedAmount)
	{
	}

	void IPlayerModelClientListener.OnCurrencyBankStartedActivation(CurrencyBankId currencyBankId)
	{
	}

	void IPlayerModelClientListener.OnCurrencyBankFinalizedActivation(CurrencyBankId currencyBankId)
	{
	}

	void IPlayerModelClientListener.OnUpdatedCurrencyBank(CurrencyBankId currencyBankId, bool forceFullRefreshImmediatelyState)
	{
	}

	void IPlayerModelClientListener.OnLeaderboardEventScoreChanged(int scoreChange)
	{
	}

	void IPlayerModelClientListener.OnLeaderboardEventJoined(LeaderboardEventId eventId)
	{
	}

	void IPlayerModelClientListener.OnBoultonLeagueEventDivisionJoined(BoultonLeagueEventId eventId)
	{
	}

	void IPlayerModelClientListener.OnBoultonLeagueEventFinalized(BoultonLeagueEventId eventId)
	{
	}

	void IPlayerModelClientListener.OnBoultonLeagueEventScoreChanged(BoultonLeagueEventId eventId, int amount)
	{
	}

	void IPlayerModelClientListener.OnBubbleBonusGranted(Coordinate sourceCoordinate, IBubbleBonus bonus)
	{
	}

	void IPlayerModelClientListener.OnEnergyModeEventStatesChanged()
	{
	}

	public void PollClassicRacesDivisionStatus(ClassicRacesMinigameModel classicRacesMinigameModel)
	{
	}

	public void EndClassicRacesRace(ClassicRacesMinigameModel classicRacesMinigameModel)
	{
	}

	void IPlayerModelClientListener.OnExtraSpawn(IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Option<List<(Currencies, long)>> spawnCurrenciesOption, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption)
	{
	}

	public void ShowTutorialDrag(F32 delay, int itemTypeFrom, int itemTypeTo)
	{
	}

	void IPlayerModelClientListener.ShowTutorialFinger(string targetId)
	{
	}

	void IPlayerModelClientListener.OnMergeItemRewardsClaimed(Coordinate coordinate, IEnumerable<IPlayerReward> rewards)
	{
	}

	public void OnFishCaught()
	{
	}

	public void OnWeightStarRewardClaimed()
	{
	}

	public void OnLevelEventLevelUp(IStringId eventId)
	{
	}

	public void OnLevelEventLevelClaimed(IStringId eventId)
	{
	}

	public void OnSideBoardEventLevelClaimed()
	{
	}

	public void OnGemCut()
	{
	}

	public void OnGemWeightRewardClaimed()
	{
	}

	public void OnRentableInventoryExpired()
	{
	}

	public void SetTab(string targetId, int tabIndex)
	{
	}

	public void OnMailInboxUpdated()
	{
	}

	public void OnSetPlayerModeActive(PlayerModeId playerModeId, bool active)
	{
	}

	public void OnSetPlayerModeActive(PlayerModeId playerModeId, MergeBoardId boardId, bool active)
	{
	}

	public void OnDailyTaskStatusChanged()
	{
	}

	public void OnMysteryMachineHeatLevelUp(MysteryMachineEventId eventId)
	{
	}

	public void OnMysteryMachineLevelUp(MysteryMachineEventId eventId)
	{
	}

	public void OnCardCollectionOpenCardPack(TemporaryCardCollectionEventId eventId, List<CardCollectionPackId> openedPackIds, List<List<(CardCollectionCardId cardId, bool duplicate)>> cardsPerPack)
	{
	}

	public void OnCardCollectionOpenWildCard(TemporaryCardCollectionEventModel eventModel, bool isSpecial)
	{
	}

	public void OnDebugCardPackSimulationComplete(DebugCardPackOpeningResult result)
	{
	}

	public void OnPlayerClaimedGenericRewardFromPocket(List<IPlayerReward> rewards, IRewardContext rewardContext, Action onAnimatedRewardsCompletion)
	{
	}

	void IPlayerModelClientListener.OnShortLeaderboardEventScoreChanged(int scoreChange)
	{
	}

	public void OnMetaJourneyRequestFromServer(MetaJourneyPayload content)
	{
	}

	public void OnCoreSupportEventStartedOrFinalized()
	{
	}

	public void OnAutoMergeAvailabilityChanged()
	{
	}

	public void OnAutoMergeDurationChanged()
	{
	}

	public void OnAutoMergeBoosterReceived(MetaDuration durationSeconds)
	{
	}

	void IPlayerModelClientListener.OnShortLeaderboardEventDivisionJoined()
	{
	}

	public void OnClassicRacesEventDivisionJoined()
	{
	}

	public void OnClassicRacesRaceEnded()
	{
	}

	public static void RecheckEventBoardButtonRedDotIndicator()
	{
	}

	public static ProgressionEventModel ParseProgressionEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static CollectibleBoardEventModel ParseCollectibleBoardEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static LeaderboardEventModel ParseLeaderboardEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static MysteryMachineEventModel ParseMysteryMachineEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static BoultonLeagueEventModel ParseBoultonLeagueEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static ShortLeaderboardEventModel ParseShortLeaderboardEventModel(List<ISerializableArg> args)
	{
		return null;
	}

	public static TModel ParseEventModel<TId, TInfo, TModel>(MetaActivableSet<TId, TInfo, TModel> set, List<ISerializableArg> args) where TId : StringId<TId>, new() where TInfo : IMetaActivableInfo<TId> where TModel : MetaActivableState
	{
		return null;
	}

	public static string GetConnectionErrorDisplayMessage(ConnectionState state, ConnectionStatistics connStatistic)
	{
		return null;
	}

	public ActionAfterError FigureOutActionAfterError(ConnectionState state)
	{
		return default(ActionAfterError);
	}

	public void LogConnectionSuccessEvent(ConnectionStatistics statistics)
	{
	}

	public void LogConnectionErrorEvent(ConnectionState state, ConnectionStatistics statistics)
	{
	}

	public void OnPlayerChecksumMismatch(PlayerChecksumMismatch mismatch)
	{
	}

	public void OnConnectedToServer(ConnectedToServer ev)
	{
	}

	public void OnDisconnectedFromServer(DisconnectedFromServer ev)
	{
	}

	public void OnPlayerNameValidationCompleted(string newName, PlayerNameValidationResult result, bool dryRun)
	{
	}

	public void SendWebShopAuthTokenRequest(bool redirect, string code = null)
	{
	}

	public void OnPlayerWebShopAuthTokenResponse(PlayerWebShopAuthTokenResponse response)
	{
	}

	public void OnWebShopAuthTokenRequestTimeout()
	{
	}

	[AsyncStateMachine(typeof(_003CWaitForCallbackAsync_003Ed__174))]
	public UniTask WaitForCallbackAsync(float intervalSeconds, float timeoutSeconds, Func<bool> wasCalled, Action timeout, CancellationToken ct)
	{
		return default(UniTask);
	}

	public void ExecuteAction(PlayerActionBase action)
	{
	}

	public MetaActionResult DryExecuteAction(PlayerActionBase action)
	{
		return null;
	}

	public void OnDestroyInner()
	{
	}

	[ContextMenu("Disconnect with error")]
	[Conditional("DEBUG")]
	public void DebugTriggerDisconnection()
	{
	}

	public void FirebaseTokenReceived(FirebaseTokenArgs firebaseTokenArgs)
	{
	}

	[ContextMenu("Display connection status")]
	public void DisplayConnectionStatus()
	{
	}

	public void ReloadGame()
	{
	}

	public void OnApplicationQuit()
	{
	}

	public void OnSeasonConcluded(int leagueId)
	{
	}

	[AsyncStateMachine(typeof(_003CWaitForPlayerDivisionAsync_003Ed__184))]
	public UniTask WaitForPlayerDivisionAsync(float intervalSeconds, float timeoutSeconds, CancellationToken ct)
	{
		return default(UniTask);
	}

	public bool RefreshPlayerDivisionClientListener()
	{
		return false;
	}

	public bool TryRefreshBoultonLeagueDivisionModelClientListener()
	{
		return false;
	}

	public bool TryRefreshShortLeaderboardEventDivisionClientListener()
	{
		return false;
	}

	public bool TryRefreshClassicRacesEventDivisionClientListener()
	{
		return false;
	}

	public void OnOffersUpdated()
	{
	}

	public void OnShopItemPurchasedAds()
	{
	}

	void IPlayerModelClientListener.OnDebugForceSetActivablePhase(MetaActivableKindId kindId, string activableIdStr, MetaActivableState.DebugPhase? phase)
	{
	}

	public void OnEventProcessed<TEvent>(TEvent evt)
	{
	}
}
