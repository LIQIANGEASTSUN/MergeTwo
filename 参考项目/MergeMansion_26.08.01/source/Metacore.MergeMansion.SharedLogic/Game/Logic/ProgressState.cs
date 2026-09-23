using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using Code.GameLogic.Hotspots;
using Code.GameLogic.ProgressionTracks;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Config.Types;
using GameLogic.Decorations;
using GameLogic.Hotspots;
using GameLogic.Hotspots.CardStack;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Fishing;
using GameLogic.Player.Items.Merging;
using GameLogic.Player.Rewards;
using GameLogic.Seasonality;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Game.Logic
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[]
	{
		1, 10, 11, 15, 16, 20, 21, 23, 28, 35,
		36, 37, 38, 39, 41, 44, 48, 50, 62, 69,
		70, 71, 73, 75, 84, 87, 88, 89, 90, 91,
		92, 94
	})]
	public sealed class ProgressState
	{
		public delegate void EventDecorationRemovedEvent(DecorationId decorationId);

		public delegate void EventDecorationSetEvent(DecorationId decorationId);

		public delegate void EventHotspotRemovedEvent(string eventId);

		[CompilerGenerated]
		public sealed class _003CGetAllClaimableWeightStarRewards_003Ed__436 : IEnumerable<PlayerReward>, IEnumerable, IEnumerator<PlayerReward>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public PlayerReward _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			public ProgressState _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<ConfigLookupValue<IItemDefinition>> _003C_003E7__wrap1;

			[NonSerialized]
			public IItemDefinition _003CitemDef_003E5__3;

			[NonSerialized]
			public IReadOnlyList<IWeightStarRewardData> _003CweightStarRewards_003E5__4;

			[NonSerialized]
			public int _003Ccount_003E5__5;

			[NonSerialized]
			public int _003Ci_003E5__6;

			PlayerReward IEnumerator<PlayerReward>.Current
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
			public _003CGetAllClaimableWeightStarRewards_003Ed__436(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<PlayerReward> IEnumerable<PlayerReward>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetProgressionTracksWithArg_003Ed__294 : IEnumerable<ProgressionTrack>, IEnumerable, IEnumerator<ProgressionTrack>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public ProgressionTrack _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ProgressState _003C_003E4__this;

			[NonSerialized]
			public string arg;

			public string _003C_003E3__arg;

			[NonSerialized]
			public MetaDictionary<ProgressionTrackId, ProgressionTrack>.ValueCollection.ValueEnumerator _003C_003E7__wrap1;

			ProgressionTrack IEnumerator<ProgressionTrack>.Current
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
			public _003CGetProgressionTracksWithArg_003Ed__294(int _003C_003E1__state)
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

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<ProgressionTrack> IEnumerable<ProgressionTrack>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetStoredAnimationStates_003Ed__345 : IEnumerable<(string, string, string)>, IEnumerable, IEnumerator<(string, string, string)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string gameObjectName, string animationTrackName, string state) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ProgressState _003C_003E4__this;

			[NonSerialized]
			public MetaDictionary<string, string>.Enumerator _003C_003E7__wrap1;

			(string, string, string) IEnumerator<(string, string, string)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, string, string));
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
			public _003CGetStoredAnimationStates_003Ed__345(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<(string, string, string)> IEnumerable<(string, string, string)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		public sealed class _003CGetStoredUnityAnimationStates_003Ed__346 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string gameObjectName, string state) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ProgressState _003C_003E4__this;

			[NonSerialized]
			public MetaDictionary<string, string>.Enumerator _003C_003E7__wrap1;

			(string, string) IEnumerator<(string, string)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, string));
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
			public _003CGetStoredUnityAnimationStates_003Ed__346(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<(string, string)> IEnumerable<(string, string)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public Action OnUndoSellItemCleared;

		public ItemDiscoveredEvent ItemDiscovered;

		public ItemUnlockedEvent ItemUnlocked;

		[MetaMember(40, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		[NonSerialized]
		public OrderedSet<HotspotId> FinalizedHotspots;

		public static readonly DirectorGroupId notificationsGroupId;

		public Dictionary<IItemDefinition, int> DebugGeneratedDynamicTasksPool;

		public CharacterDiscoveredEvent CharacterDiscovered;

		[NonSerialized]
		public int lastVisibleHotpotChangedHash;

		public static readonly char animationSplitChar;

		public static readonly DecorationId DecorationNone;

		[MetaMember(2, MetaMemberFlags.None)]
		public int playerLevel { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public List<int> legacyEventGroupsCompleted { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<HotspotId> visibleHotspots { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<HotspotId> completedHotspots { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<string, string> storedAnimationStates { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<int> discoveredItemTypes { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public MetaDictionary<int, int> boughtBoxAmounts { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public RandomPCG random { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaTime endTimeOfCurrentEventBoard { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public int currentEventBoardAdventureStep { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		[NoChecksum]
		[ExcludeFromGdprExport]
		public CalendarBoardEventStatus currentEventBoardStatus { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		[Transient]
		[ExcludeFromGdprExport]
		public MergeItem undoItemSellItem { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		[Transient]
		[ExcludeFromGdprExport]
		public int undoItemSellCoordinateX { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		[Transient]
		[ExcludeFromGdprExport]
		public int undoItemSellCoordinateY { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public OrderedSet<MassMailIdenfiers> addedMassEmails { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public bool isInventoryAvailable { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<string> ownedDecorations { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public List<string> visibleDecorations { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		[Transient]
		[ExcludeFromGdprExport]
		public MergeBoardId undoBoardId { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MergeBoardId currentEventBoardId2 { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<MergeBoardId, long> nextPossibleEventReplayDay2 { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<MergeBoardId, int> eventProgressValues2 { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<MergeBoardId, int> eventStartedTimes2 { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<string> eventsStartedAtLeastOnce { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<string, string> storedUnityAnimationStates { get; set; }

		[MetaMember(42, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<int> claimedDiscoveryRewards { get; set; }

		[MetaMember(43, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<MergeChainId> claimedDiscoveryCompletionRewards { get; set; }

		[MetaMember(45, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<AreaId> completedAreas { get; set; }

		[MetaMember(46, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<MergeRewardId> CollectedMergeRewards { get; set; }

		[MetaMember(47, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<AreaId> notedTeasedAreas { get; set; }

		[MetaMember(49, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<DirectorGroupId> eventGroupsCompleted { get; set; }

		[MetaMember(51, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<MergeChainId, int> mergeChainLevels { get; set; }

		[MetaMember(52, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<DialogCharacterType> discoveredCharacterTypes { get; set; }

		[MetaMember(53, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<LayeredDecorationSetId, int> layeredDecorationProgress { get; set; }

		[MetaMember(54, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<string, DecorationId> visibleEventDecorations { get; set; }

		[MetaMember(55, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<string, HotspotId> visibleEventHotspots { get; set; }

		[MetaMember(56, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, F32> itemWeightRecords { get; set; }

		[MetaMember(57, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<int> photoTakenItems { get; set; }

		[MetaMember(58, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, int> itemCaughtCount { get; set; }

		[MetaMember(59, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public List<int> UnclaimedWorldRecordRewardFishes { get; set; }

		[MetaMember(60, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, OrderedSet<int>> ClaimedWeightStarRewards { get; set; }

		[MetaMember(61, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<SeasonId> seasonsDiscovered { get; set; }

		[MetaMember(63, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<HotspotId, int> completedRepeatableTasks { get; set; }

		[MetaMember(64, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public bool DidClaimFreeGems { get; set; }

		[MetaMember(65, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<HotspotId, MetaTime> visibleHotspotsWithTimestamps { get; set; }

		[MetaMember(66, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public bool DidFlashSellTutorialFinished { get; set; }

		[MetaMember(67, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<PetId> Pets { get; set; }

		[MetaMember(68, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public PetId ActivePet { get; set; }

		[MetaMember(72, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<MergeBoardId, long> AnalyticsFakeZeroEnergySaldoByMergeBoardId { get; set; }

		[MetaMember(74, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<HotspotId, CardStack> visibleCardStacks { get; set; }

		[MetaMember(76, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<HotspotId, int> hotspotAppearActionCount { get; set; }

		[MetaMember(77, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		[ServerOnly]
		public MetaTime? latestCompletedHotspotTime { get; set; }

		[IgnoreDataMember]
		public MetaTime LatestCompletedHotspotTime => default(MetaTime);

		[MetaMember(78, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, F32> gemWeightRecords { get; set; }

		[MetaMember(79, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, int> gemFoundCount { get; set; }

		[MetaMember(80, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public List<int> UnclaimedWorldRecordGemReward { get; set; }

		[MetaMember(81, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, OrderedSet<int>> ClaimedGemWeightRewards { get; set; }

		[MetaMember(82, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public List<int> GemMineStoryItems { get; set; }

		[MetaMember(83, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<int, int> itemWeightRecordsRodUsed { get; set; }

		[MetaMember(85, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<int> completedPlayerSteps { get; set; }

		[MetaMember(86, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public MetaDictionary<HotspotId, List<(int, int)>> visibleStackMiniGamePositions { get; set; }

		[MetaMember(93, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward LatestDailyAdReward { get; set; }

		[MetaMember(95, MetaMemberFlags.None)]
		[ExcludeFromGdprExport]
		public OrderedSet<AreaId> _notedUnlockableAreas { get; set; }

		[MetaMember(96, MetaMemberFlags.None)]
		public MetaDictionary<ProgressionTrackId, ProgressionTrack> ProgressionTracks { get; set; }

		[IgnoreDataMember]
		public MetacoreTime LastModificationTime { get; set; }

		[IgnoreDataMember]
		public IEnumerable<int> DiscoveredItems => null;

		[IgnoreDataMember]
		public IEnumerable<SeasonId> SeasonsDiscovered => null;

		public IEnumerable<string> DiscoveredItemTypeStrings => null;

		public event EventDecorationRemovedEvent EventDecorationRemoved
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

		public event EventDecorationSetEvent EventDecorationSet
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

		public event EventHotspotRemovedEvent EventHotspotRemoved
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

		public IEnumerable<DirectorGroupId> GetAllCompletedDirectorEventGroups()
		{
			return null;
		}

		public bool CheckIfDirectorEventGroupIsCompleted(DirectorGroupId groupId)
		{
			return false;
		}

		public void SetDirectorEventGroupCompleted(DirectorGroupId groupId)
		{
		}

		public void ForgetDirectorEventGroup(DirectorGroupId groupId)
		{
		}

		public void SetCurrentPlayerLevel(IPlayer player, int playerLevel)
		{
		}

		public int GetCurrentPlayerLevel()
		{
			return 0;
		}

		public void ResetEventProgress(MergeBoardId timedMergeBoardId)
		{
		}

		public void IncrementEventProgress(MergeBoardId timedMergeBoardId, int increment)
		{
		}

		public int GetEventProgress(MergeBoardId timedMergeBoardId)
		{
			return 0;
		}

		public void IncrementProgressionTrack(IPlayer player, ProgressionTrackId trackId, int increment)
		{
		}

		[IteratorStateMachine(typeof(_003CGetProgressionTracksWithArg_003Ed__294))]
		public IEnumerable<ProgressionTrack> GetProgressionTracksWithArg(string arg)
		{
			return null;
		}

		public void RemoveProgressionTrack(ProgressionTrackId trackId)
		{
		}

		public bool GetCanSellItems(IPlayer playerModel)
		{
			return false;
		}

		public IReadOnlyCollection<IAreaInfo> GetCurrentAreas(IPlayer player)
		{
			return null;
		}

		public HashSet<HotspotId> GetVisibleHotspots()
		{
			return null;
		}

		public OrderedSet<HotspotId> GetVisibleHotspotsInOrder()
		{
			return null;
		}

		public MetaDictionary<HotspotId, CardStack> GetVisibleHotspotCardStackInOrder()
		{
			return null;
		}

		public bool IsVisibleCardStackAvailable()
		{
			return false;
		}

		public bool IsHotspotBonusAvailable(IHotspotDefinition hotspot, IPlayer player)
		{
			return false;
		}

		public bool TryGetHotspotBonusEndTime(IHotspotDefinition hotspot, IPlayer player, out MetaTime endTime)
		{
			endTime = default(MetaTime);
			return false;
		}

		public bool TryGetHotspotBonusEndTimeFromHistory(IHotspotDefinition hotspot, out MetaTime endTime)
		{
			endTime = default(MetaTime);
			return false;
		}

		public bool IsHotspotBonusRewardDefinedAndRelevant(IHotspotDefinition hotspot, IPlayer player)
		{
			return false;
		}

		public bool AddVisibleHotspot(IPlayer playerModel, IHotspotDefinition hotspotDefinition, MetacoreTime currentTime, bool isUnlockedAndAvailable)
		{
			return false;
		}

		public void AddVisibleHotspotWithTimestamp(HotspotId hotspotId, MetacoreTime currentTime)
		{
		}

		public bool RemoveVisibleHotspot(HotspotId hotspotId)
		{
			return false;
		}

		public void RemoveVisibleHotspot(HotspotDefinition hotspotDefinition)
		{
		}

		public void RemoveVisibleIfExists(HotspotId hotspotId)
		{
		}

		public bool IsHotspotVisible(HotspotId hotspotId)
		{
			return false;
		}

		public bool IsHotspotTimestampAdded(HotspotId hotspotId)
		{
			return false;
		}

		public void SetVisibleEventHotspot(string eventId, HotspotId hotspotId)
		{
		}

		public void RemoveVisibleEventHotspot(string eventId)
		{
		}

		public IEnumerable<(string, HotspotId)> GetVisibleEventHotspots()
		{
			return null;
		}

		public HotspotId GetVisibleEventHotspot(string eventId)
		{
			return default(HotspotId);
		}

		public int GetLastChangedVisibleHotspotHash()
		{
			return 0;
		}

		public HashSet<HotspotId> GetCompletedHotspots()
		{
			return null;
		}

		public OrderedSet<HotspotId> GetCompletedHotspotsInCompletionOrder()
		{
			return null;
		}

		public HotspotId GetLastCompletedHotspot()
		{
			return default(HotspotId);
		}

		public int CountCompletedHotspots()
		{
			return 0;
		}

		public bool IsHotspotFinalized(HotspotId hotspotId)
		{
			return false;
		}

		public void MarkHotspotFinalized(HotspotId hotspotId)
		{
		}

		public void AddCompletedHotspot(HotspotId hotspotId)
		{
		}

		public void AddCompletedHotspot(HotspotDefinition definition)
		{
		}

		public void RemoveCompletedHotspot(HotspotId hotspotId)
		{
		}

		public bool HasHotspotBeenCompleted(HotspotId hotspotId)
		{
			return false;
		}

		public bool HasHotspotsBeenCompleted(List<HotspotDefinition> hotspots)
		{
			return false;
		}

		public void ResetHotspotProgress()
		{
		}

		public void AddCompletedArea(AreaId areaId)
		{
		}

		public void RemoveCompletedArea(AreaId areaId)
		{
		}

		public bool HasAreaBeenCompleted(AreaId areaId)
		{
			return false;
		}

		public bool IsAreaRewardAvailable(AreaId areaId)
		{
			return false;
		}

		public void AddNotedTeasedArea(AreaId areaId)
		{
		}

		public bool HasTeasedAreaBeenNoted(AreaId areaId)
		{
			return false;
		}

		public void AddNotedUnlockableArea(AreaId areaId)
		{
		}

		public bool HasUnlockableAreaBeenNoted(AreaId areaId)
		{
			return false;
		}

		public bool IsHotspotVisibleOrCompleted(HotspotId hotspotId)
		{
			return false;
		}

		public MetaDictionary<HotspotId, int> GetCompletedRepeatableTasksInCompletionOrder()
		{
			return null;
		}

		public void IncreaseRepeatableTaskCompletionCount(HotspotId hotspotId)
		{
		}

		public void DecreaseRepeatableTaskCompletionCount(HotspotId hotspotId)
		{
		}

		public int GetRepeatableTaskCompletionCount(HotspotId hotspotId)
		{
			return 0;
		}

		public void SetRepeatableTaskCompletionCount(HotspotId hotspotId, int count)
		{
		}

		[IteratorStateMachine(typeof(_003CGetStoredAnimationStates_003Ed__345))]
		public IEnumerable<(string, string, string)> GetStoredAnimationStates()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetStoredUnityAnimationStates_003Ed__346))]
		public IEnumerable<(string, string)> GetStoredUnityAnimationStates()
		{
			return null;
		}

		public string GetStoredAnimationState(string gameObjectName, string animationTrackName)
		{
			return null;
		}

		public string GetStoredUnityAnimationState(string gameObjectName)
		{
			return null;
		}

		public void UpdateStoredAnimationState(string gameObjectName, string animationTrackName, string animationName)
		{
		}

		public void UpdateStoredUnityAnimationState(string gameObjectName, string animationName)
		{
		}

		public void RemoveStoredAnimationState(string gameObjectName, string animationTrackName)
		{
		}

		public void ResetStoredUnityAnimationStates()
		{
		}

		public void TrySetMergeItemDiscovered(IPlayer player, MergeBoard mergeBoard, IMergeItem mergeItem)
		{
		}

		public void TrySetItemDiscovered(IPlayer player, MergeBoard mergeBoard, int itemId)
		{
		}

		public void ExecuteItemDiscoveredActions(IPlayer player, int itemId)
		{
		}

		public void TrySetMergeItemsDiscovered(IPlayer player, MergeBoard mergeBoard, IEnumerable<MergeItem> itemDefinitions)
		{
		}

		public void TrySetItemsDiscovered(IPlayer player, MergeBoard mergeBoard, IEnumerable<int> itemIds)
		{
		}

		public void SetItemsNotDiscovered(List<int> itemIds)
		{
		}

		public void SetItemNotDiscovered(int itemId)
		{
		}

		public bool HasItemBeenDiscovered(int itemId)
		{
			return false;
		}

		public bool HasItemBeenDiscovered(IItemDefinition itemDefinition)
		{
			return false;
		}

		public bool IsItemDiscoveryRewardClaimed(int rewardId)
		{
			return false;
		}

		public void SetItemDiscoveryRewardClaimed(int rewardId)
		{
		}

		public int GetClaimedItemDiscoveryCompletionRewardCount()
		{
			return 0;
		}

		public bool IsItemDiscoveryCompletionRewardClaimed(MergeChainId rewardId)
		{
			return false;
		}

		public void SetItemDiscoveryCompletionRewardClaimed(MergeChainId rewardId)
		{
		}

		public void ClearItemDiscoveryRewardClaims()
		{
		}

		public bool HasCharacterBeenDiscovered(DialogCharacterType characterType)
		{
			return false;
		}

		public void SetCharacterDiscovered(DialogCharacterType characterType)
		{
		}

		public void SetCharacterDiscovered(IEnumerable<DialogCharacterType> dialogCharacterTypes)
		{
		}

		public void SetCharacterNotDiscovered(DialogCharacterType characterType)
		{
		}

		public void IncreaseBoxesBoughtAmount(int itemId)
		{
		}

		public int GetBoxesBoughtAmount(int itemId)
		{
			return 0;
		}

		public void StartNewEventBoard(MergeBoardId mergeBoardId, MetacoreTime endTimestamp)
		{
		}

		public void EventBoardIsGenerated()
		{
		}

		public void ShouldCollectEventBoardReward()
		{
		}

		public void EndCurrentEventBoard()
		{
		}

		public void SetNewEventEndtime(MetaTime newEndTime)
		{
		}

		public MergeBoardId GetCurrentStoryEventBoardId()
		{
			return null;
		}

		public MetaTime GetEndTimeOfCurrentEventBoard()
		{
			return default(MetaTime);
		}

		public CalendarBoardEventStatus GetCurrentEventBoardStatus()
		{
			return default(CalendarBoardEventStatus);
		}

		public void IncreaseCurrentEventBoardAdventureStep()
		{
		}

		public int GetCurrentEventBoardAdventureStep()
		{
			return 0;
		}

		public bool WasMergeRewardCollected(MergeReward mergeReward)
		{
			return false;
		}

		public bool CollectMergeReward(MergeReward mergeReward)
		{
			return false;
		}

		public void SetUndoSellItem(MergeBoardId boardId, MergeItem item, Coordinate coordinate)
		{
		}

		public void ClearUndoSellItem()
		{
		}

		public bool CanUndoSell()
		{
			return false;
		}

		public (MergeBoardId, MergeItem, Coordinate) GetUndoSellItem()
		{
			return default((MergeBoardId, MergeItem, Coordinate));
		}

		public long GetNextPossibleEventReplayEpochDay(MergeBoardId storyEventMergeBoardId)
		{
			return 0L;
		}

		public void SetNextPossibleEventReplayEpochDay(MergeBoardId storyEventMergeBoardId, long epochDay)
		{
		}

		public void MassMailAddedForPlayer(MassMailIdenfiers idenfier)
		{
		}

		public bool IsMassMailAdded(MassMailIdenfiers idenfier)
		{
			return false;
		}

		public void IncreaseEventStartedTimes(MergeBoardId mergeBoardId)
		{
		}

		public int GetEventStartedTimes(MergeBoardId mergeBoardId)
		{
			return 0;
		}

		public bool AddNewDecoration(DecorationId decorationId)
		{
			return false;
		}

		public bool RemoveDecoration(DecorationId decorationId)
		{
			return false;
		}

		public bool DoesOwnDecoration(DecorationId decorationId)
		{
			return false;
		}

		public int GetOwnedDecorationCount()
		{
			return 0;
		}

		public IReadOnlyCollection<string> GetOwnedDecorations()
		{
			return null;
		}

		public void SetDecorationToSlot(DecorationId decorationId, int zeroBasedSlotNumber)
		{
		}

		public DecorationId GetDecorationInSlotIndex(int slotIndex)
		{
			return null;
		}

		public DecorationId GetDecorationInSlotNumber(int slotNumber)
		{
			return null;
		}

		public int GetActiveDecorationSlotCount()
		{
			return 0;
		}

		public IReadOnlyCollection<string> GetVisibleDecorations()
		{
			return null;
		}

		public int GetVisibleDecorationCount()
		{
			return 0;
		}

		public void AddLayeredDecorationProgress(LayeredDecorationSetId setId)
		{
		}

		public void SetLayeredDecorationProgress(LayeredDecorationSetId setId, int progress)
		{
		}

		public int? GetLayeredDecorationProgress(LayeredDecorationSetId setId)
		{
			return null;
		}

		public void ClearLayeredDecorationProgress(LayeredDecorationSetId setId)
		{
		}

		public IEnumerable<(string, DecorationId)> GetVisibleEventDecorations()
		{
			return null;
		}

		public void SetVisibleEventDecoration(string eventId, DecorationId decorationId)
		{
		}

		public void AddEventStarted(string eventId)
		{
		}

		public bool HasStartedEventAtLeastOnce(string eventId)
		{
			return false;
		}

		public void SkipGameTime(MetaDuration numMillisecondToSkip, MetaTime currentTime)
		{
		}

		public bool ReachedNotifications()
		{
			return false;
		}

		public void InitializeMergeChainLevel(IMergeChainDefinition mergeChainDefinition)
		{
		}

		public bool TryGetMergeChainLevel(MergeChainId mergeChainId, out int level)
		{
			level = default(int);
			return false;
		}

		public void SetMergeChainLevel(MergeChainId mergeChainId, int level)
		{
		}

		public void RemoveMergeChainLevel(MergeChainId mergeChainId)
		{
		}

		public bool TryLevelUpMergeChainIfLessThan(IPlayer player, MergeChainId mergeChainId, int comparison, out int levelBefore, out int levelAfter)
		{
			levelBefore = default(int);
			levelAfter = default(int);
			return false;
		}

		public bool TryLevelUpMergeChain(IPlayer player, MergeChainId mergeChainId, out int levelAfter)
		{
			levelAfter = default(int);
			return false;
		}

		public IEnumerable<MergeChainId> GetMergeChainLevels()
		{
			return null;
		}

		public void IncrementItemCaught(MergeItem item)
		{
		}

		public void SetItemWeightRecordIfExceeded(IPlayer player, IMergeItem item, F32 weight, int rodUsed, out bool isWeightRecord, out bool worldRecordRewardAdded)
		{
			isWeightRecord = default(bool);
			worldRecordRewardAdded = default(bool);
		}

		public void SetPhotoTakenOfItem(IItemDefinition item, bool photoTaken)
		{
		}

		public bool HasPhotoOfItemBeenTaken(IItemDefinition itemDefinition)
		{
			return false;
		}

		public MetaDictionary<int, int> GetAllItemsCaughtCount()
		{
			return null;
		}

		public bool TryGetItemCaughtCount(int item, out int caughtCount)
		{
			caughtCount = default(int);
			return false;
		}

		public bool TryGetItemWeightRecord(int item, out F32 weightRecord)
		{
			weightRecord = default(F32);
			return false;
		}

		public bool TryGetItemWeightRecordRodUsed(int item, out int rodUsed)
		{
			rodUsed = default(int);
			return false;
		}

		public void ClaimUnclaimedWorldRecordFishRewards(IPlayer player)
		{
		}

		public bool CanClaimAnyWeightStarReward(IPlayer player)
		{
			return false;
		}

		public bool CanClaimAnyWeightStarReward(IPlayer player, IItemDefinition itemDefinition)
		{
			return false;
		}

		[IteratorStateMachine(typeof(_003CGetAllClaimableWeightStarRewards_003Ed__436))]
		public IEnumerable<PlayerReward> GetAllClaimableWeightStarRewards(IPlayer player)
		{
			return null;
		}

		public void ClaimAllClaimableWeightStarRewards(IPlayer player, CollectibleBoardEventId eventId)
		{
		}

		public bool CanClaimWeightStarReward(IPlayer player, IItemDefinition itemDefinition, int starIndex)
		{
			return false;
		}

		public bool HasClaimedWeightStarReward(IItemDefinition itemDefinition, int starIndex)
		{
			return false;
		}

		public void ClaimWeightStarReward(IPlayer player, CollectibleBoardEventId eventId, IItemDefinition itemDefinition, int starIndex)
		{
		}

		public bool HasClaimedAllWeightStarRewards(IPlayer player, IItemDefinition itemDefinition)
		{
			return false;
		}

		public PlayerReward GetFirstClaimableWeightStarReward(IPlayer player)
		{
			return null;
		}

		public (int, int, bool) GetWeightStarRewardData(IPlayer player, IItemDefinition itemDefinition)
		{
			return default((int, int, bool));
		}

		public void IncrementGemItemAmount(IMergeItem item)
		{
		}

		public bool TryGetGemItemFoundCount(int item, out int caughtCount)
		{
			caughtCount = default(int);
			return false;
		}

		public bool TryGetGemItemWeightRecord(int item, out F32 weightRecord)
		{
			weightRecord = default(F32);
			return false;
		}

		public MetaDictionary<int, int> GetAllGemsFound()
		{
			return null;
		}

		public bool HasClaimedGemWeightReward(IItemDefinition itemDefinition, int weightRewardIndex)
		{
			return false;
		}

		public IEnumerable<IPlayerReward> GetAllClaimableDigEventMuseumRewards(PlayerModel player, MergeBoardId id)
		{
			return null;
		}

		public bool AddDiscoveredSeason(SeasonId seasonId)
		{
			return false;
		}

		public bool RemoveDiscoveredSeason(SeasonId seasonId)
		{
			return false;
		}

		public bool HasSeasonBeenDiscovered(SeasonId seasonId)
		{
			return false;
		}

		public bool DoesOwnPet(PetId petId)
		{
			return false;
		}

		public bool HasAnyPet()
		{
			return false;
		}

		public PetId GetActivePetId()
		{
			return null;
		}

		public List<PetId> AllOwnedPets()
		{
			return null;
		}

		public int GetPetCount()
		{
			return 0;
		}

		public void AddNewPet(PetId petId)
		{
		}

		public void SetActivePet(PetId petId)
		{
		}

		public void RemovePet(PetId petId)
		{
		}

		public CardStack TryGetHotspotCardStack(HotspotId hotspotId)
		{
			return null;
		}

		public List<(int, int)> TryGetHotspotStackMiniGamePositions(HotspotId id)
		{
			return null;
		}

		public bool HasVisibleCardStack(CardStackId cardStackId)
		{
			return false;
		}

		public HotspotId GetFirstHotspotWithCardStack()
		{
			return default(HotspotId);
		}

		public void AddVisibleCardStack(HotspotId hotspot, CardStackId cardStackId, List<PlayCard> cards, GroupingStyle style)
		{
		}

		public void RemoveVisibleCardStack(HotspotId hotspotId)
		{
		}

		public void RemoveCardsFromVisibleCardStack(HotspotId hotspotId, int firstItem, int secondItem)
		{
		}

		public void RandomizeItemPositionsForStackMiniGame(RandomPCG random, HotspotId id, int Height, int Width, List<PlayCard> Cards)
		{
		}

		public bool CanVisibleCardStackBeCompleted(HotspotId hotspotId, bool ignoreLast = false)
		{
			return false;
		}

		public bool IsCardStackRequirementMatched(IPlayer player, CardStackId cardStackId)
		{
			return false;
		}

		public bool CanVisibleCardBeCompleted(IPlayer player, HotspotId hotspotId, int index)
		{
			return false;
		}

		public bool CanCardBeFoundFromInventory(IPlayer player, HotspotId hotspotId, int index)
		{
			return false;
		}

		public PlayCard GetCardStackItem(HotspotId hotspotId, int index)
		{
			return null;
		}

		public (PlayCard, int) GetLastCompletableCardFromCardStack(IPlayer player, HotspotId hotspotId)
		{
			return default((PlayCard, int));
		}

		public Option<PlayCard> GetLastCardFromCardStack(HotspotId hotspotId)
		{
			return default(Option<PlayCard>);
		}

		public bool IsCardStackCardUsable(IPlayer player, HotspotId hotspotId, int index)
		{
			return false;
		}

		public bool IsCardStackRowUsable(IPlayer player, HotspotId hotspotId, int currentRow)
		{
			return false;
		}

		public int GetCurrentStackRow(IPlayer player, HotspotId hotspotId)
		{
			return 0;
		}

		public bool IsLocationTravelUnlocked(IPlayer player, LocationId currentLocation)
		{
			return false;
		}

		public void IncreaseHotspotAppearActionCount(HotspotDefinition hotspotDefinition)
		{
		}

		public void SetHotspotAppearActionCount(HotspotId hotspotId, int count)
		{
		}

		public int GetHotspotAppearActionCount(HotspotId hotspotId)
		{
			return 0;
		}

		public void RemoveDiscoveredItem(int itemId)
		{
		}

		public List<HotspotDefinition> GetIllustrationTasksOnCompletion(IPlayer player, CustomHotspotTableId customHotspotTableId)
		{
			return null;
		}

		public bool HasIllustrationTasksAvailable(IPlayer player, CustomHotspotTableId hotspotTableId)
		{
			return false;
		}

		public bool HasCompletableIllustrationTasksAvailable(IPlayer player, CustomHotspotTableId hotspotTableId)
		{
			return false;
		}

		public HotspotDefinition TryGetVisibleIllustrationParentTask(IPlayer player, CustomHotspotTableId hotspotTableId)
		{
			return null;
		}

		public Option<List<HotspotId>> GetVisibleIllustrationChildTasks(IPlayer player, CustomHotspotTableId hotspotTableId)
		{
			return default(Option<List<HotspotId>>);
		}

		public List<HotspotId> TryGetCompletedIllustrationTasks(IPlayer player, CustomHotspotTableId hotspotTableId)
		{
			return null;
		}

		public void CompletePlayerStep(PlayerStep step)
		{
		}

		public void ClearAllPlayerSteps()
		{
		}

		public bool IsPlayerStepCompleted(PlayerStep step)
		{
			return false;
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
