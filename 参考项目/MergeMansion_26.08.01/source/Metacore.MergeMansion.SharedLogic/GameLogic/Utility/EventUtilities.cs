using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Code.GameLogic.GameEvents;
using Code.GameLogic.Utility;
using GameLogic.Config;
using GameLogic.Config.EnergyModeEvent;
using GameLogic.Player;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Player;
using Metaplay.Core.Schedule;

namespace GameLogic.Utility
{
	public static class EventUtilities
	{
		[CompilerGenerated]
		public sealed class _003CSelectActivableWindowsForKind_003Ed__14 : IEnumerable<(IStringId, MetaTime, MetaTime)>, IEnumerable, IEnumerator<(IStringId, MetaTime, MetaTime)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (IStringId id, MetaTime Start, MetaTime End) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			[NonSerialized]
			public MetaActivableKindId kindId;

			public MetaActivableKindId _003C_003E3__kindId;

			[NonSerialized]
			public IPlayer player;

			public IPlayer _003C_003E3__player;

			[NonSerialized]
			public IMetaActivableSet _003CactivableSet_003E5__2;

			[NonSerialized]
			public IEnumerator<KeyValuePair<object, IGameConfigData>> _003C_003E7__wrap2;

			(IStringId, MetaTime, MetaTime) IEnumerator<(IStringId, MetaTime, MetaTime)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((IStringId, MetaTime, MetaTime));
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
			public _003CSelectActivableWindowsForKind_003Ed__14(int _003C_003E1__state)
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
			IEnumerator<(IStringId, MetaTime, MetaTime)> IEnumerable<(IStringId, MetaTime, MetaTime)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public static void TryLevelUpMergeChain(IPlayer player, IStringId eventId, IItemDefinition itemDefinition)
		{
		}

		public static bool TryGetStartAndEndTimeInGameConfig(MetaActivableParams activableParams, PlayerLocalTime currentTime, out MetaTime? startTimeInGameConfig, out MetaTime? endTimeInGameConfig)
		{
			startTimeInGameConfig = null;
			endTimeInGameConfig = null;
			return false;
		}

		public static EventInstanceId GetActivableInstanceId(IBoardEventInfo activable, IPlayerModelBase player, out MetaTime? startTimeInGameConfig, out MetaTime? endTimeInGameConfig)
		{
			startTimeInGameConfig = null;
			endTimeInGameConfig = null;
			return null;
		}

		public static EventInstanceId GetActivableInstanceId(IBoardEventInfo activable, PlayerLocalTime currentTime, out MetaTime? startTimeInGameConfig, out MetaTime? endTimeInGameConfig)
		{
			startTimeInGameConfig = null;
			endTimeInGameConfig = null;
			return null;
		}

		public static EventInstanceId CreateActivableInstanceId(string activableId, MetaTime? activableStartTimeInGameConfig)
		{
			return null;
		}

		public static bool ShouldDisplayActiveEnergyModeEventInUI(IPlayer player, EnergyModeEventModel eventModel)
		{
			return false;
		}

		public static void ValidateSchedule<TId>(string sheetName, IMetaActivableConfigData<TId> configData) where TId : IStringId
		{
		}

		public static void ValidateSchedule(string sheetName, string configKey, MetaRecurringCalendarSchedule schedule)
		{
		}

		public static bool IsValidRecurrencePeriod(MetaCalendarPeriod period)
		{
			return false;
		}

		public static MetaDictionary<EventLevelId, MetaRef<EventLevelInfo>> ParseFallbackLevels(string fallbackLevelsStr)
		{
			return null;
		}

		public static MetaTime TryStartActivationsAndGetNextEventStartTime<TId, TInfo, TModel>(this MetaActivableSet<TId, TInfo, TModel> activableSet, PlayerModel playerModel, IEnumerable<TInfo> eventInfos, Option<Func<TInfo, bool>> additionalCanStartCheckOption, MetaTime existingNextEventStartTime, PlayerEventsModelRefreshAction action) where TId : IStringId where TInfo : IMetaActivableConfigData<TId> where TModel : MetaActivableState
		{
			return default(MetaTime);
		}

		public static MetaTime TryStartActivationsAndGetNextEventStartTime<TId, TInfo, TModel>(this MetaActivableSet<TId, TInfo, TModel> activableSet, PlayerModel playerModel, IEnumerable<TInfo> eventInfos, Option<Func<TInfo, bool>> additionalCanStartCheckOption) where TId : IStringId where TInfo : IMetaActivableConfigData<TId> where TModel : MetaActivableState
		{
			return default(MetaTime);
		}

		public static IEnumerable<(IStringId, MetaTime, MetaTime)> SelectActiveWindowsForKind(string kind, IPlayer player)
		{
			return null;
		}

		public static IEnumerable<(IStringId, MetaTime, MetaTime)> SelectActiveWindowsForModel(Type activableStateType, IPlayer player)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CSelectActivableWindowsForKind_003Ed__14))]
		public static IEnumerable<(IStringId, MetaTime, MetaTime)> SelectActivableWindowsForKind(IPlayer player, MetaActivableKindId kindId)
		{
			return null;
		}

		public static bool EventMeetsRequirements(IPlayer player, IMetaActivableInfo metaActivableInfo)
		{
			return false;
		}

		public static (IStringId, MetaTime, MetaTime) BuildResultFromVisibleStatus(MetaActivableVisibleStatus activableVisibleStatus, KeyValuePair<object, IGameConfigData> infoData)
		{
			return default((IStringId, MetaTime, MetaTime));
		}

		public static Option<MetaScheduleOccasion> GetEventCurrentNextOrPreviousEnabledOccasion(IMetaActivableInfo eventInfo, PlayerLocalTime currentTime)
		{
			return default(Option<MetaScheduleOccasion>);
		}

		public static Option<MetaTimeRange> GetEventCurrentOrNextEnabledRange(CoreSupportEventInfo eventInfo, PlayerLocalTime time)
		{
			return default(Option<MetaTimeRange>);
		}

		public static List<(MetaActivableKindId, List<string>)> GetActivableIdsOfAllKinds(IMergeMansionGameConfig gameConfig)
		{
			return null;
		}
	}
}
