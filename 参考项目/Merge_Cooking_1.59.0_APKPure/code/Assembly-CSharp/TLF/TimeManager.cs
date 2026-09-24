using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.Events;

namespace TLF;

public class TimeManager
{
	public class ScheduleEvent
	{
		public object target;

		public float duration;

		public float delay = -1f;

		public int repeatTimes = 1;

		public float delayCount;

		public float durationCount;

		public int repeatCount;

		public bool isDone;

		public bool isFirstFrame = true;

		public UnityAction<float> updateAction;

		public Action<ScheduleEvent> OnDoneCallback;

		public static ScheduleEvent CreateScheduleEvent(float duration, int repeatTimes, UnityAction<float> action, float delay = -1f, object target = null, Action<ScheduleEvent> OnDoneCallback = null)
		{
			return new ScheduleEvent
			{
				duration = duration,
				repeatTimes = repeatTimes,
				updateAction = action,
				delay = delay,
				target = target,
				OnDoneCallback = OnDoneCallback
			};
		}

		public void ExecAction(float dt)
		{
			if (updateAction == null || target.Equals(null))
			{
				return;
			}
			try
			{
				updateAction.Invoke(dt);
			}
			catch (Exception arg)
			{
				Debug.LogError((object)string.Format("ꋞú赴", arg));
			}
			finally
			{
				repeatCount++;
				if (repeatTimes >= 0 && repeatCount >= repeatTimes)
				{
					isDone = true;
				}
			}
		}

		public void Update(float dt)
		{
			if (isDone)
			{
				if (OnDoneCallback != null)
				{
					OnDoneCallback(this);
				}
			}
			else if (isFirstFrame)
			{
				isFirstFrame = false;
			}
			else if (delay < 0f || delayCount >= delay)
			{
				durationCount += dt;
				if (durationCount >= duration)
				{
					ExecAction(durationCount);
					durationCount = 0f;
				}
			}
			else
			{
				delayCount += dt;
				if (delayCount >= delay)
				{
					ExecAction(delayCount);
				}
			}
		}
	}

	public static readonly DateTime dateUtcZero = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);

	private static long adjustTime = 0L;

	private static TimeManager _instance = new TimeManager();

	private List<ScheduleEvent> eventList = new List<ScheduleEvent>();

	private Dictionary<object, List<ScheduleEvent>> targetEventList = new Dictionary<object, List<ScheduleEvent>>();

	private List<ScheduleEvent> cachePoolList = new List<ScheduleEvent>();

	private List<object> keyList = new List<object>();

	private int year;

	private int month;

	private int day;

	private bool isInit;

	private static Dictionary<long, DateTime> dateDict = new Dictionary<long, DateTime>();

	public static TimeManager Instance => _instance;

	public static TimeManager GetInstance()
	{
		return _instance;
	}

	public static void Reset()
	{
		_instance = new TimeManager();
	}

	private void AddScheduleEvent(ScheduleEvent e, object target)
	{
		if (target == null)
		{
			eventList.Add(e);
			return;
		}
		if (!targetEventList.ContainsKey(target))
		{
			targetEventList.Add(target, new List<ScheduleEvent>());
		}
		targetEventList[target].Add(e);
	}

	public void ScheduleOnce(UnityAction<float> act, object target)
	{
		if (cachePoolList.Count > 0)
		{
			ScheduleEvent scheduleEvent = cachePoolList[0];
			scheduleEvent.duration = 0f;
			scheduleEvent.repeatTimes = 1;
			scheduleEvent.updateAction = act;
			scheduleEvent.delay = -1f;
			scheduleEvent.target = target;
			scheduleEvent.OnDoneCallback = OnScheduleOver;
			AddScheduleEvent(scheduleEvent, target);
			cachePoolList.RemoveAt(0);
		}
		else
		{
			ScheduleEvent e = ScheduleEvent.CreateScheduleEvent(0f, 1, act, -1f, target, OnScheduleOver);
			AddScheduleEvent(e, target);
		}
	}

	public void Schedule(object target, UnityAction<float> act, float duration, int repeatTimes, float delay = -1f)
	{
		if (cachePoolList.Count > 0)
		{
			ScheduleEvent scheduleEvent = cachePoolList[0];
			scheduleEvent.duration = duration;
			scheduleEvent.repeatTimes = repeatTimes;
			scheduleEvent.updateAction = act;
			scheduleEvent.delay = delay;
			scheduleEvent.target = target;
			scheduleEvent.OnDoneCallback = OnScheduleOver;
			AddScheduleEvent(scheduleEvent, target);
			cachePoolList.RemoveAt(0);
		}
		else
		{
			ScheduleEvent e = ScheduleEvent.CreateScheduleEvent(duration, repeatTimes, act, delay, target, OnScheduleOver);
			AddScheduleEvent(e, target);
		}
	}

	private void OnScheduleOver(ScheduleEvent e)
	{
		if (e == null)
		{
			return;
		}
		if (eventList.Contains(e))
		{
			eventList.Remove(e);
		}
		if (targetEventList.ContainsKey(e.target) && e.target != null)
		{
			if (targetEventList[e.target].Count <= 0)
			{
				targetEventList.Remove(e.target);
			}
			else
			{
				targetEventList[e.target].Remove(e);
			}
		}
	}

	public void UnSchedule(UnityAction<float> act, object target = null)
	{
		if (target != null)
		{
			if (!targetEventList.ContainsKey(target))
			{
				return;
			}
			List<ScheduleEvent> list = targetEventList[target];
			foreach (ScheduleEvent item in list)
			{
				if ((Delegate?)(object)item.updateAction == (Delegate?)(object)act)
				{
					list.Remove(item);
					break;
				}
			}
			if (targetEventList[target].Count <= 0)
			{
				targetEventList.Remove(target);
			}
			return;
		}
		foreach (ScheduleEvent @event in eventList)
		{
			if ((Delegate?)(object)@event.updateAction == (Delegate?)(object)act)
			{
				eventList.Remove(@event);
				break;
			}
		}
	}

	public void ClearSchedule(object target)
	{
		for (int num = eventList.Count - 1; num >= 0; num--)
		{
			if (eventList[num].target == target)
			{
				eventList.Remove(eventList[num]);
			}
		}
		if (targetEventList.ContainsKey(target))
		{
			targetEventList.Remove(target);
		}
	}

	public void Update(float dt)
	{
		for (int num = eventList.Count - 1; num >= 0; num--)
		{
			eventList[num].Update(dt);
		}
		keyList.Clear();
		foreach (object key in targetEventList.Keys)
		{
			keyList.Add(key);
		}
		foreach (object key2 in keyList)
		{
			if (!key2.Equals(null))
			{
				if (!targetEventList.ContainsKey(key2))
				{
					continue;
				}
				for (int num2 = targetEventList[key2].Count - 1; num2 >= 0; num2--)
				{
					if (targetEventList.ContainsKey(key2) && !key2.Equals(null))
					{
						targetEventList[key2][num2].Update(dt);
					}
				}
			}
			else if (targetEventList.ContainsKey(key2))
			{
				targetEventList.Remove(key2);
			}
		}
	}

	public void Clear()
	{
		eventList.Clear();
		targetEventList.Clear();
	}

	public void updateTime()
	{
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public int isEqualToDay(int year, int month, int day)
	{
		DateTime now = DateTime.Now;
		this.year = now.Year;
		this.month = now.Month;
		this.day = now.Day;
		int num = -1;
		if (this.year == year && this.month == month && this.day == day)
		{
			return 0;
		}
		if (this.year > year)
		{
			return 1;
		}
		if (this.year == year)
		{
			if (this.month > month)
			{
				return 1;
			}
			if (this.month == month)
			{
				if (this.day > day)
				{
					return 1;
				}
				return -1;
			}
			return -1;
		}
		return -1;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public int isEqualToDay(long timeStamp)
	{
		DateTime dateTime = TimeZone.CurrentTimeZone.ToLocalTime(new DateTime(1970, 1, 1)).AddMilliseconds(timeStamp);
		return isEqualToDay(dateTime.Year, dateTime.Month, dateTime.Day);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetLocalTimestamp()
	{
		return new DateTimeOffset(DateTime.UtcNow).ToUnixTimeSeconds();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetLocalTimestampByMillisecond()
	{
		return new DateTimeOffset(DateTime.UtcNow).ToUnixTimeMilliseconds();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int getTimeStamp()
	{
		return (int)Singleton<ServerManager>.Instance.ServerTimeV3;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public long GetTimeStamp(bool isSecond = true)
	{
		TimeSpan timeSpan = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
		if (!isSecond)
		{
			return Singleton<ServerManager>.Instance.ServerTimeV3 * 1000 + timeSpan.Milliseconds;
		}
		return Singleton<ServerManager>.Instance.ServerTimeV3;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public long GetDeviceTimeStamp(bool isSecond = true)
	{
		TimeSpan timeSpan = DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0);
		long num = ((!isSecond) ? Convert.ToInt64(timeSpan.TotalMilliseconds) : Convert.ToInt64(timeSpan.TotalSeconds));
		return num + adjustTime;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public int GetDeviceDayID()
	{
		return GetDateIDByTime(GetDeviceTimeStamp() - ServerTimeManager.TimeDiff);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public long GetTimeStameByDay()
	{
		return Convert.ToInt64((DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, 0)).Days) + adjustTime / 86400;
	}

	[Obsolete("该方法基于旧时间系统(外面直接用DateTime容易出问题),请改用TimeSystem中接口。")]
	public DateTime GetDateTimeByTimeSpan(long timeSpan, bool isSecond = true)
	{
		DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0);
		DateTime utcNow = DateTime.UtcNow;
		if (isSecond)
		{
			return TimeZone.CurrentTimeZone.ToLocalTime(dateTime.AddSeconds(timeSpan));
		}
		return TimeZone.CurrentTimeZone.ToLocalTime(dateTime.AddMilliseconds(timeSpan));
	}

	[Obsolete("该方法基于旧时间系统(外面直接用DateTime容易出问题),请改用TimeSystem中接口。")]
	public DateTime GetLocalDateTimeByTimestamp(long timeSpan)
	{
		return TimeZoneInfo.ConvertTime(DateTimeOffset.FromUnixTimeSeconds(timeSpan), TimeZoneInfo.Local).DateTime;
	}

	[Obsolete("该方法基于旧时间系统(外面直接用DateTime容易出问题),请改用TimeSystem中接口。")]
	public long GetTimeStameByDateTime(DateTime dateTime, bool isSecond = true)
	{
		TimeSpan timeSpan = dateTime - new DateTime(1970, 1, 1, 0, 0, 0, 0).ToLocalTime();
		long num = ((!isSecond) ? Convert.ToInt64(timeSpan.TotalMilliseconds) : Convert.ToInt64(timeSpan.TotalSeconds));
		return num + adjustTime;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static string GetCurrentTimeStr(bool isAdjustTime = true)
	{
		DateTime dateTime = DateTime.UtcNow.ToLocalTime();
		if (isAdjustTime)
		{
			dateTime = new DateTime(DateTime.UtcNow.Ticks + adjustTime * 10000000, DateTimeKind.Utc).ToLocalTime();
		}
		int num = dateTime.Year;
		int num2 = dateTime.Month;
		int num3 = dateTime.Day;
		int hour = dateTime.Hour;
		int minute = dateTime.Minute;
		_ = dateTime.Second;
		return string.Format("숮뀊\u20e3笯笀/\u0085厄쉘뀀箝㉙ㅉrò叱숗끾㏫㨘㨔)Ñ叐쉊뀈㪤䑋䑏fí召\u1a62අ", new object[5] { num, num2, num3, hour, minute });
	}

	public string GetSecondString(long second, bool showHour = true)
	{
		if (showHour)
		{
			return string.Format("녻\u0730រ\0逭\ud934", second / 3600) + "뺦" + string.Format("녻\u0730រ\0逭\ud934", second % 3600 / 60) + "뺦" + string.Format("녻\u0730រ\0逭\ud934", second % 60);
		}
		return string.Format("녻\u0730រ\0逭\ud934", second % 3600 / 60) + "뺦" + string.Format("녻\u0730រ\0逭\ud934", second % 60);
	}

	public (string, string, string) GetSecondStringSplit(long second)
	{
		string item = string.Format("녻\u0730រ\0逭\ud934", second / 3600);
		string item2 = string.Format("녻\u0730រ\0逭\ud934", second % 3600 / 60);
		string item3 = string.Format("녻\u0730រ\0逭\ud934", second % 60);
		return (item, item2, item3);
	}

	public string GetTimeFormatString(long second)
	{
		long num = 172800L;
		long num2 = 86400L;
		if (second > num)
		{
			return (second / num2).ToString();
		}
		string text = string.Format("녻\u0730រ\0逭\ud934", second / 3600);
		string text2 = string.Format("녻\u0730រ\0逭\ud934", second % 3600 / 60);
		string text3 = string.Format("녻\u0730រ\0逭\ud934", second % 60);
		return text + "뺦" + text2 + "뺦" + text3;
	}

	public string GetTimeFormatString(long second, bool isHour = true, bool isMinute = true, bool isSecond = true, bool isDay = true)
	{
		long num = 172800L;
		long num2 = 86400L;
		if (isDay && second > num)
		{
			return (second / num2).ToString();
		}
		string text = string.Format("녻\u0730រ\0逭\ud934", second / 3600);
		string text2 = string.Format("녻\u0730រ\0逭\ud934", second % 3600 / 60);
		string text3 = string.Format("녻\u0730រ\0逭\ud934", second % 60);
		string text4 = "";
		if (isHour)
		{
			text4 += text;
		}
		if (isMinute)
		{
			if (text4 != "")
			{
				text4 += "뺦";
			}
			text4 += text2;
		}
		if (isSecond)
		{
			if (text4 != "")
			{
				text4 += "뺦";
			}
			text4 += text3;
		}
		return text4;
	}

	public string GetTimeFormatString2(long second)
	{
		string text = "";
		int num = (int)second / 60;
		int num2 = (int)second % 60;
		text = ((num >= 10) ? (text + string.Format("ꋞú赴", num)) : (text + string.Format("勡㏗\ud998ŉ", num)));
		text += "뺦";
		if (num2 < 10)
		{
			return text + string.Format("勡㏗\ud998ŉ", num2);
		}
		return text + string.Format("ꋞú赴", num2);
	}

	public string GetTimeFormatString3(long second, int showNum = 2, string fliter = ":")
	{
		long num = second / 3600;
		long num2 = second % 3600 / 60;
		long num3 = second % 60;
		string text = "";
		if (showNum == 2)
		{
			if (num > 0)
			{
				return num.ToString().PadLeft(2, '0') + fliter + num2.ToString().PadLeft(2, '0');
			}
			return num2.ToString().PadLeft(2, '0') + fliter + num3.ToString().PadLeft(2, '0');
		}
		return num.ToString().PadLeft(2, '0') + fliter + num2.ToString().PadLeft(2, '0') + fliter + num3.ToString().PadLeft(2, '0');
	}

	public string GetTimeFormatByDHMS(int second)
	{
		int num = second / 3600;
		int num2 = second % 3600 / 60;
		int num3 = second % 60;
		string text = "";
		if (num > 0)
		{
			if (num2 > 0)
			{
				return num + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩녥䉟㱾\0逢\ud964") + num2 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕");
			}
			return num + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩녥䉟㱾\0逢\ud964");
		}
		if (num3 > 0)
		{
			return num2 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕") + num3 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숏끥溊搐敗=¾厽");
		}
		return num2 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕");
	}

	public static void Settime(string[] args)
	{
		if (args.Length > 2)
		{
			int num = int.Parse(args[0]);
			int num2 = int.Parse(args[1]);
			int num3 = int.Parse(args[2]);
			int hour = ((args.Length > 3) ? int.Parse(args[3]) : 0);
			int minute = ((args.Length > 4) ? int.Parse(args[4]) : 0);
			int second = ((args.Length > 5) ? int.Parse(args[5]) : 0);
			DateTime dateTime = new DateTime(num, num2, num3, hour, minute, second, DateTimeKind.Local);
			int num4 = (int)new DateTimeOffset(DateTime.UtcNow).ToUnixTimeSeconds();
			adjustTime = (int)new DateTimeOffset(dateTime).ToUnixTimeSeconds() - num4;
		}
	}

	public static void ResetTime()
	{
		adjustTime = 0L;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetTimeStampByHourMinuteSecond(int y, int m, int d, int h, int mi, int s)
	{
		return Convert.ToInt64((new DateTime(y, m, d, h, mi, s, 0).ToUniversalTime() - new DateTime(1970, 1, 1, 0, 0, 0, 0)).TotalSeconds);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static string GetTodayDayID()
	{
		DateTime dateTime = DateTime.UtcNow.ToLocalTime();
		int num = dateTime.Year;
		int num2 = dateTime.Month;
		int num3 = dateTime.Day;
		return string.Format("숮뀊篣ㄯ笀/ò叱숗끾㫫䐘㩏`í召\u1a62අ", num, num2, num3);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int GetDateIDByTime(long timestamp)
	{
		DateTime value2;
		if (dateDict.TryGetValue(timestamp, out var value))
		{
			value2 = value;
		}
		else
		{
			if (dateDict.Count > 1000)
			{
				dateDict.Clear();
			}
			value2 = Instance.GetDateTimeByTimeSpan(timestamp);
			dateDict.Add(timestamp, value2);
		}
		int num = value2.Year;
		int num2 = value2.Month;
		int num3 = value2.Day;
		return num * 10000 + num2 * 100 + num3;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static bool IsBetweenTwoDay(int minMonth, int minDay, int maxMonth, int maxDay)
	{
		DateTime now = DateTime.Now;
		int num = now.Year;
		int num2 = now.Year;
		int num3 = now.Month;
		int num4 = now.Day;
		if (maxMonth < minMonth)
		{
			if (num3 >= minMonth)
			{
				num2 = num + 1;
			}
			else if (num3 <= maxMonth)
			{
				num2 = num - 1;
			}
		}
		else if (maxMonth == minMonth && maxDay < minMonth)
		{
			if (num4 >= minDay)
			{
				num2 = num + 1;
			}
			else if (num4 <= maxDay)
			{
				num2 = num - 1;
			}
		}
		DateTime dateTime = DateTime.Now;
		DateTime dateTime2 = DateTime.Now;
		if (num == num2)
		{
			dateTime = new DateTime(num, minMonth, minDay, 0, 0, 0);
			dateTime2 = new DateTime(num, maxMonth, maxDay, 23, 59, 59);
		}
		else if (num2 > num)
		{
			dateTime = new DateTime(num, minMonth, minDay, 0, 0, 0);
			dateTime2 = new DateTime(num2, maxMonth, maxDay, 23, 59, 59);
		}
		else if (num2 < num)
		{
			dateTime = new DateTime(num2, minMonth, minDay, 0, 0, 0);
			dateTime2 = new DateTime(num, maxMonth, maxDay, 23, 59, 59);
		}
		if (now >= dateTime && now <= dateTime2)
		{
			return true;
		}
		return false;
	}

	public string GetSecondStringOfMinutes(long second)
	{
		return string.Format("녻\u0730រ\0逭\ud934", second / 60) + "뺦" + string.Format("녻\u0730រ\0逭\ud934", second % 60);
	}

	public string GetSecondStringFormat(int second)
	{
		if (second > 86400)
		{
			return second / 86400 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩匡機ā讅뱹");
		}
		if (second > 3600)
		{
			return second / 3600 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩녥䉟㱾\0逢\ud964");
		}
		if (second > 60)
		{
			return second / 60 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕");
		}
		return second + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숏끥溊搐敗=¾厽");
	}

	public string GetSecondStringFormatSpecial(int second)
	{
		if (second >= 86400)
		{
			return second / 86400 + LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩匡機ā讅뱹");
		}
		if (3600 <= second && second < 86400)
		{
			int num = second / 3600;
			int num2 = second % 3600 / 60;
			return LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숅끥徑䴆敁 \u0082厁匭橮ā译赥", new List<string>
			{
				num.ToString(),
				num2.ToString()
			});
		}
		int num3 = second / 60;
		int num4 = second % 60;
		return LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕灟S4끣q䈾䣌", new List<string>
		{
			num3.ToString(),
			num4.ToString()
		});
	}

	public string GetTimeDownBySecond(int second)
	{
		if (second >= 90000)
		{
			int num = second / 86400;
			int num2 = second % 86400 / 3600;
			return LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숋끥䢝漌敍\r&匥嬧亊", new List<string>
			{
				num.ToString(),
				num2.ToString()
			});
		}
		if (3600 <= second && second < 90000)
		{
			int num3 = second / 3600;
			int num4 = second % 3600 / 60;
			return LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숅끥徑䴆敁 \u0082厁匭橮ā译赥", new List<string>
			{
				num3.ToString(),
				num4.ToString()
			});
		}
		int num5 = second / 60;
		int num6 = second % 60;
		return LocalizedLang.GetUIValueByKey("숏끛榴洐䝫\u0006ª厩숃끥璔攄敚'Ö叕灟S4끣q䈾䣌", new List<string>
		{
			num5.ToString(),
			num6.ToString()
		});
	}

	public string GetColonTimeDownBySecond(int second)
	{
		if (second >= 86400)
		{
			int num = second / 86400;
			return LocalizedLang.GetUIValueByKey("숏끓犴洐呲=Î反䕡t4끟Fꈳ\u1dd1", new List<string> { num.ToString() });
		}
		if (3600 <= second && second < 86400)
		{
			int num2 = second / 3600;
			return LocalizedLang.GetUIValueByKey("숏끓犴洐呲=Î反숵끎痨父慼=Ú叙", new List<string> { num2.ToString() });
		}
		int num3 = second / 60;
		int num4 = second % 60;
		return LocalizedLang.GetUIValueByKey("숗뀙⏨㈘笎)\u0091厐뻡", new List<string>
		{
			num3.ToString().PadLeft(2, '0'),
			num4.ToString().PadLeft(2, '0')
		});
	}

	[Obsolete("该方法基于旧时间系统(外面直接用DateTime容易出问题),请改用TimeSystem中接口。")]
	public int GetWeekOfYear(DateTime dt)
	{
		return new GregorianCalendar().GetWeekOfYear(dt, CalendarWeekRule.FirstDay, DayOfWeek.Monday);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public int GetIntervalDays(int startDayID, int endDayID, int diff_defaultDays = 0)
	{
		try
		{
			DateTime dateTime = DateTime.ParseExact(startDayID.ToString(), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
			return (DateTime.ParseExact(endDayID.ToString(), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal) - dateTime).Days;
		}
		catch (Exception)
		{
			return diff_defaultDays;
		}
	}

	public int GetWeekday(DayOfWeek weekDay)
	{
		return weekDay switch
		{
			DayOfWeek.Monday => 1, 
			DayOfWeek.Tuesday => 2, 
			DayOfWeek.Wednesday => 3, 
			DayOfWeek.Thursday => 4, 
			DayOfWeek.Friday => 5, 
			DayOfWeek.Saturday => 6, 
			DayOfWeek.Sunday => 7, 
			_ => -1, 
		};
	}
}
