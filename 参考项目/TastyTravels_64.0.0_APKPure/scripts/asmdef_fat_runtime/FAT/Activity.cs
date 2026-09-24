using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using IFix.Core;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT
{
	public class Activity : IGameModule, IUserDataHolder, IPostSetUserDataListener, IUpdate
	{
		public class TypeInfo
		{
			public EventTypeInfo conf;

			public ConditionExpression.Expr expr;

			public bool ready;

			public int count;

			public long countTS;

			public long recordTS;

			public void Record(ActivityLike acti_)
			{
			}

			public void Sync(ActivityLike acti_)
			{
			}

			public void Clear()
			{
			}
		}

		public readonly List<EventTime> confR;

		public readonly Dictionary<(int, int), ActivityLike> map;

		public readonly Dictionary<ActivityLike, (int, int, EventType)> mapR;

		public readonly Dictionary<EventType, List<ActivityLike>> index;

		[NonSerialized]
		public readonly Dictionary<EventType, List<IObjRplcPeriodProvider>> _rplcReplacePeriodProviders;

		public readonly GroupGiftPack giftpack;

		public readonly GroupExchange exchange;

		public readonly GroupCommon common;

		[NonSerialized]
		public readonly BoardActivityHandler boardActivityHandler;

		[NonSerialized]
		public readonly List<ActivityLike> cache;

		[NonSerialized]
		public readonly List<ActivityLike> dependentActivities;

		[NonSerialized]
		public bool changed;

		[NonSerialized]
		public readonly Dictionary<int, long> record;

		[NonSerialized]
		public readonly Dictionary<(int, int), string> invalid;

		[NonSerialized]
		public readonly Dictionary<(int, int), string> fail;

		[NonSerialized]
		public readonly Dictionary<EventType, TypeInfo> info;

		[NonSerialized]
		public readonly Dictionary<(int, int), ActivityLike> pending;

		[NonSerialized]
		public readonly List<ActivityLike> limbo;

		[NonSerialized]
		public readonly List<ActivityLike> observer;

		[NonSerialized]
		public IDictionary<int, EventTime> allEvents;

		[NonSerialized]
		public long infoTS;

		[NonSerialized]
		public long confTS;

		[NonSerialized]
		public readonly ActivityPopup popup;

		[NonSerialized]
		public readonly ActivityRedirect redirect;

		[NonSerialized]
		public UniTask waitRes;

		[NonSerialized]
		public readonly ActivityUpdateHelper _updateHelper;

		public void Reset()
		{
		}

		public bool IsInObjRplcReplacePeriod(EventType type_)
		{
			return false;
		}

		public void LoadConfig()
		{
		}

		void IUserDataHolder.FillData(LocalSaveData archive)
		{
		}

		void IUserDataHolder.SetData(LocalSaveData archive)
		{
		}

		public void PrepareRes()
		{
		}

		public void _RegisterUpdate(IActivityUpdate obj)
		{
		}

		public void _UnregisterUpdate(IActivityUpdate obj)
		{
		}

		void IUpdate.Update(float deltaTime)
		{
		}

		public RankingActivity RankingData()
		{
			return null;
		}

		public void OnPostSetUserData()
		{
		}

		public void Startup()
		{
		}

		public void DebugReset()
		{
		}

		public void DebugExpire()
		{
		}

		public void DebugReportReady()
		{
		}

		public static void S(ReadOnlySpan<char> s_, out ReadOnlySpan<char> a_, out ReadOnlySpan<char> b_, char l_)
		{
			a_ = default(ReadOnlySpan<char>);
			b_ = default(ReadOnlySpan<char>);
		}

		public void DebugActivate(string s_)
		{
		}

		public void DebugInsert(string s_)
		{
		}

		public void DebugEnd(string s_)
		{
		}

		[IDTag(0)]
		public bool IsActive((int id, int from) id_)
		{
			return false;
		}

		[IDTag(1)]
		public bool IsActive(EventType type_)
		{
			return false;
		}

		public bool IsExpire((int id, int from) id_)
		{
			return false;
		}

		public bool IsInvalid((int, int) id_, out string rs_)
		{
			rs_ = null;
			return false;
		}

		public bool IsFirst(EventType type_)
		{
			return false;
		}

		public long RecordOf(int id_)
		{
			return 0L;
		}

		public List<ActivityLike> LookupActive(EventType type_)
		{
			return null;
		}

		[IDTag(1)]
		public ActivityLike LookupAny(EventType type_)
		{
			return null;
		}

		public bool LookupConf(int id_, out EventTime conf_)
		{
			conf_ = null;
			return false;
		}

		[IDTag(0)]
		public bool LookupAny(EventType type_, out ActivityLike acti_)
		{
			acti_ = null;
			return false;
		}

		[IDTag(2)]
		public bool LookupAny(EventType type_, int param_, out ActivityLike acti_)
		{
			acti_ = null;
			return false;
		}

		[IDTag(0)]
		public bool Lookup(int id_, out ActivityLike acti_)
		{
			acti_ = null;
			return false;
		}

		[IDTag(1)]
		public ActivityLike Lookup(int id_, int from_ = 0)
		{
			return null;
		}

		[IDTag(0)]
		public bool LookupWithEventId(int id, out ActivityLike act)
		{
			act = null;
			return false;
		}

		[IDTag(1)]
		public ActivityLike LookupWithEventId(int id)
		{
			return null;
		}

		public void CheckConfR()
		{
		}

		public ActivityGroup GroupOf(EventType type_)
		{
			return null;
		}

		public static bool LevelValid(int active_, int shutdown_)
		{
			return false;
		}

		public (bool, string) TryAdd((int, int) id_, EventType type_, int filter_ = 0, ActivityInstance data_ = null, ActivityGroup.Option option_ = default(ActivityGroup.Option))
		{
			return default((bool, string));
		}

		public (bool, string) TryAddTo(Action<ActivityLike> Add_, (int, int) id_, EventType type_, ActivityInstance data_ = null, ActivityGroup.Option option_ = default(ActivityGroup.Option))
		{
			return default((bool, string));
		}

		public void CheckRefresh(int filter_ = 0, bool log_ = true)
		{
		}

		[IDTag(0)]
		public void CheckEventTime(int filter_ = 0)
		{
		}

		[IDTag(1)]
		public void CheckEventTime(int filter_, Predicate<EventTime> confFilter_)
		{
		}

		public void CheckFollowEvent(int filter_ = 0)
		{
		}

		public void CheckEventTrigger()
		{
		}

		public EventTypeInfo GetTypeInfo(EventType type_)
		{
			return null;
		}

		public bool TypeLimit(EventType type_)
		{
			return false;
		}

		[IDTag(0)]
		public void CheckTypeReady(bool log_ = true)
		{
		}

		[IDTag(1)]
		public (bool, bool) CheckTypeReady(EventType type_)
		{
			return default((bool, bool));
		}

		public void CheckTypeCount()
		{
		}

		public void CheckEnd()
		{
		}

		public void AddActive((int id, int from) id_, ActivityLike acti_, bool new_)
		{
		}

		public void AcceptActive((int id, int from) id_, ActivityLike acti_, bool new_)
		{
		}

		[IDTag(1)]
		public void RemoveActive(ActivityLike acti_)
		{
		}

		[IDTag(0)]
		public void RemoveActive(int id_, int from_, EventType type_, ActivityLike acti_)
		{
		}

		public void AddPending(ActivityLike acti_)
		{
		}

		public void RemovePending(ActivityLike acti_)
		{
		}

		public void AcceptPending(ActivityLike acti_)
		{
		}

		public (bool, string) Invalid((int, int) id_, string rs_)
		{
			return default((bool, string));
		}

		public void RecordFail((int, int) id_, EventType type_, string reason_)
		{
		}

		public void SyncRecordTS(ActivityLike acti_)
		{
		}

		[IDTag(1)]
		public void EndImmediate(EventType type_)
		{
		}

		[IDTag(0)]
		public void EndImmediate(ActivityLike acti_, bool expire_)
		{
		}

		public void EqualsEndImmediate(ActivityLike acti_)
		{
		}

		public void WhenEnd(ActivityLike acti_, bool expire_)
		{
		}

		public void AddLimbo(ActivityLike acti_)
		{
		}

		public void RemoveLimbo(ActivityLike acti_)
		{
		}

		public void CheckLimbo()
		{
		}

		[IDTag(1)]
		public void Observe(ActivityLike acti_)
		{
		}

		[IDTag(0)]
		public void Observe(string e_)
		{
		}
	}
}
