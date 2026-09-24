using System;
using System.Globalization;
using TLF;

public static class ServerTimeManager
{
	public static int TimeDiff = 10800;

	public static int CrossDaysTime = 3;

	private static long _serverTimeV2 = -1L;

	private static int _serverTodayIdv2 = -1;

	public static bool mCanUpdateServerTime = false;

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateLocalNumber => TimeManager.GetDateIDByTime(TimeManager.GetLocalTimestamp() - TimeDiff);

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateNumber => TimeManager.GetDateIDByTime(CurrentTime() - TimeDiff);

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateServerNumber
	{
		get
		{
			if (Singleton<ServerManager>.Instance.ServerTime <= 0)
			{
				return TodayDateNumber;
			}
			return TimeManager.GetDateIDByTime(Singleton<ServerManager>.Instance.ServerTime - TimeDiff);
		}
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateServerNumberV2
	{
		get
		{
			if (Singleton<ServerManager>.Instance.ServerTimeV2 <= 0)
			{
				return TodayDateNumber;
			}
			return TimeManager.GetDateIDByTime(Singleton<ServerManager>.Instance.ServerTimeV2 - TimeDiff);
		}
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateServerNumberV3
	{
		get
		{
			if (Singleton<ServerManager>.Instance.ServerTime > 0)
			{
				return TimeManager.GetDateIDByTime(Singleton<ServerManager>.Instance.ServerTime - TimeDiff);
			}
			if (Singleton<ServerManager>.Instance.ServerTimeV2 > 0)
			{
				return TimeManager.GetDateIDByTime(Singleton<ServerManager>.Instance.ServerTimeV2 - TimeDiff);
			}
			return TodayDateNumber;
		}
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long ServerTimeV2 => _serverTimeV2;

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int ServerTodayIDV2 => _serverTodayIdv2;

	public static int GetDayIDByTimestamp(this long timestamp)
	{
		return TimeManager.GetDateIDByTime(timestamp - TimeDiff);
	}

	public static int TodayDateNumberWithTimeOff(int timeOff)
	{
		return TimeManager.GetDateIDByTime(CurrentTime() - TimeDiff - timeOff);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayDateServerNumberWithTimeOff(int timeOff)
	{
		if (Singleton<ServerManager>.Instance.ServerTimeV2 <= 0)
		{
			return TodayDateNumberWithTimeOff(timeOff);
		}
		return TimeManager.GetDateIDByTime(Singleton<ServerManager>.Instance.ServerTimeV2 - TimeDiff - timeOff);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayTheLastServerSecond(long curTime)
	{
		DateTime dateTimeByTimeSpan = TimeManager.Instance.GetDateTimeByTimeSpan(curTime - TimeDiff);
		return (int)(dateTimeByTimeSpan.AddDays(1.0).Date - dateTimeByTimeSpan).TotalSeconds;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayTheLastServerSecond()
	{
		long serverTime = Singleton<ServerManager>.Instance.ServerTime;
		DateTime dateTimeByTimeSpan = TimeManager.Instance.GetDateTimeByTimeSpan(serverTime - TimeDiff);
		return (int)(dateTimeByTimeSpan.AddDays(1.0).Date - dateTimeByTimeSpan).TotalSeconds;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int TodayTheLastLocalSecond()
	{
		long num = CurrentTime();
		DateTime dateTimeByTimeSpan = TimeManager.Instance.GetDateTimeByTimeSpan(num - TimeDiff);
		return (int)(dateTimeByTimeSpan.AddDays(1.0).Date - dateTimeByTimeSpan).TotalSeconds;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long CurrentTime()
	{
		return TimeManager.Instance.GetTimeStamp();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long CurrentServerTime()
	{
		if (Singleton<ServerManager>.Instance.ServerTime > 0)
		{
			return Singleton<ServerManager>.Instance.ServerTime;
		}
		return TimeManager.Instance.GetTimeStamp();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long CurrentServerTimeV2()
	{
		if (Singleton<ServerManager>.Instance.ServerTimeV2 > 0)
		{
			return Singleton<ServerManager>.Instance.ServerTimeV2;
		}
		return TimeManager.Instance.GetTimeStamp();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long CurrentServerTime3()
	{
		if (Singleton<ServerManager>.Instance.ServerTime > 0)
		{
			return Singleton<ServerManager>.Instance.ServerTime;
		}
		if (Singleton<ServerManager>.Instance.ServerTimeV2 > 0)
		{
			return Singleton<ServerManager>.Instance.ServerTimeV2;
		}
		return TimeManager.Instance.GetTimeStamp();
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int CurrentDate()
	{
		string s = TimeManager.GetInstance().GetDateTimeByTimeSpan(CurrentTime()).ToString("숓끃撠搔祹\u001f\u0096厕");
		int result = 0;
		int.TryParse(s, out result);
		return result;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int CurrentDateServer(bool timeDiff = true)
	{
		long num = Singleton<ServerManager>.Instance.ServerTimeV2;
		if (num <= 0)
		{
			num = CurrentTime();
		}
		if (timeDiff)
		{
			num -= TimeDiff;
		}
		string s = TimeManager.GetInstance().GetDateTimeByTimeSpan(num).ToString("숓끃撠搔祹\u001f\u0096厕");
		int result = 0;
		int.TryParse(s, out result);
		return result;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetZeroHourTimeStamp()
	{
		long num = CurrentTime() - TimeDiff;
		DateTime dateTimeByTimeSpan = TimeManager.Instance.GetDateTimeByTimeSpan(num);
		int num2 = (int)(dateTimeByTimeSpan.AddDays(1.0).Date - dateTimeByTimeSpan).TotalSeconds;
		return num - (86400 - num2);
	}

	public static bool VerifyTime(long starTime, int interval)
	{
		if (CurrentTime() - starTime >= interval)
		{
			return true;
		}
		return false;
	}

	public static bool VerifyInGameTime(int starTime, int interval)
	{
		if (ObjectManager.GetInstance().analyticsModel.analyticsVO.playtime - starTime >= interval)
		{
			return true;
		}
		return false;
	}

	public static bool VerifyInGameTimeUseServerTime(int starTime, int interval)
	{
		if (CurrentServerTime3() - starTime >= interval)
		{
			return true;
		}
		return false;
	}

	public static float TimeProgress(long starTime, int interval)
	{
		if (CurrentTime() > 0)
		{
			return (float)(CurrentTime() - starTime) / (float)interval;
		}
		return 0f;
	}

	public static int IntervalTime(long starTime)
	{
		if (CurrentTime() > 0)
		{
			return (int)(CurrentTime() - starTime);
		}
		return 0;
	}

	public static int IntervalTimeInGame(int starTime)
	{
		if (ObjectManager.GetInstance().analyticsModel.analyticsVO.playtime > 0)
		{
			return ObjectManager.GetInstance().analyticsModel.analyticsVO.playtime - starTime;
		}
		return 0;
	}

	public static int IntervalTimeInGameUseServerTime(int starTime)
	{
		if (CurrentServerTime3() > 0)
		{
			return (int)CurrentServerTime3() - starTime;
		}
		return 0;
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetDayEndTimestamp(int dayID)
	{
		try
		{
			DateTime dateTime = DateTime.ParseExact(dayID.ToString(), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
			dateTime += new TimeSpan(0, 23, 59, 59);
			return TimeManager.Instance.GetTimeStameByDateTime(dateTime) + TimeDiff;
		}
		catch (Exception)
		{
			return -1L;
		}
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static long GetDayStartTimestamp(int dayID)
	{
		try
		{
			DateTime dateTime = DateTime.ParseExact(dayID.ToString(), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
			return TimeManager.Instance.GetTimeStameByDateTime(dateTime) + TimeDiff;
		}
		catch (Exception)
		{
			return -1L;
		}
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int GetCurrentDayOfWeek()
	{
		DateTime dateTimeByTimeSpan = TimeManager.GetInstance().GetDateTimeByTimeSpan(CurrentServerTime3());
		return TimeManager.GetInstance().GetWeekday(dateTimeByTimeSpan.DayOfWeek);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int GetCurrentDayOfWeekWithTimeDiff()
	{
		DateTime dateTimeByTimeSpan = TimeManager.GetInstance().GetDateTimeByTimeSpan(CurrentServerTime3() - TimeDiff);
		return TimeManager.GetInstance().GetWeekday(dateTimeByTimeSpan.DayOfWeek);
	}

	[Obsolete("该方法基于旧时间系统,新功能请改用TimeSystem中接口。")]
	public static int GetDayOfWeekByDay(int dayID)
	{
		DateTime dateTime = DateTime.ParseExact(dayID.ToString(), "숓끃撠搔祹\u001f\u0096厕", CultureInfo.InvariantCulture, DateTimeStyles.AdjustToUniversal);
		return TimeManager.GetInstance().GetWeekday(dateTime.DayOfWeek);
	}

	public static void UpdateServerTime()
	{
		if (mCanUpdateServerTime && Singleton<ServerManager>.Instance.serverModel != null && Singleton<ServerManager>.Instance.serverModel.ServerDataVO != null)
		{
			_serverTimeV2 = Singleton<ServerManager>.Instance.ServerTimeV2;
			if (_serverTimeV2 > 0)
			{
				_serverTodayIdv2 = TodayDateServerNumberV2;
			}
		}
	}
}
