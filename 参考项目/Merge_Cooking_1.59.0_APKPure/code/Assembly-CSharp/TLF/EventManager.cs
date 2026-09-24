using System;
using System.Collections.Generic;
using UnityEngine;

namespace TLF;

public class EventManager
{
	private static EventManager _instance = new EventManager();

	public static int EVENT_SET_LOCALIZATION = 90000001;

	public static int EVENT_NEW_DAY = 90000002;

	public static int EVENT_CLICK_BUTTON = 90000003;

	public static int EVENT_SHOW_VIEW = 90000004;

	public static int EVENT_SHOW_VIEW_ANI_END = 90000005;

	public static int EVENT_CLOSE_VIEW = 90000006;

	public static int EVENT_CLOSE_VIEW_ANI_START = 90000007;

	public static int EVENT_NATIVE_PURCHASE_COMPLETE = 90000008;

	public static int EVENT_PURCHASE_COMPLETE = 90000009;

	public static int EVENT_DISPLAY_ALTER = 90000010;

	public static int EVENT_SHOW_POP = 90000011;

	public static int EVENT_HIDE_POP = 90000012;

	public static int EVENT_SHOW_ERROR_POP = 90000014;

	public static int EVENT_BTN_TOUCH_BEGIN = 90000015;

	public static int EVENT_VIDEO_SUCCESS = 90000016;

	public static int EVENT_UPDATE_MAIL_ID = 90000017;

	public static int EVENT_UPDATE_SERVER_SHOP_PRO_LIST = 90000018;

	public static int EVENT_FACEBOOK_LOGIN_CALLBACK = 90000019;

	public static int EVENT_PURCHASE_FAIL = 90000020;

	public static int EVENT_ATTRIBUTION_SUCCESS = 90000021;

	public static int EVENT_ATTRIBUTION_TIMEOUT = 90000022;

	public static int EVENT_REATTRIBUTION_SUCCESS = 90000023;

	public static int EVENT_CLOSE_VIEW_WITH_INDEX = 90000024;

	private Action<string> debugAct = Debug.LogError;

	private Dictionary<int, Delegate> eventCache = new Dictionary<int, Delegate>();

	public static EventManager GetInstance()
	{
		return _instance;
	}

	private bool OnListenerAdding(int eventType, Delegate listenerAdd)
	{
		if (!eventCache.ContainsKey(eventType))
		{
			eventCache.Add(eventType, null);
		}
		Delegate obj = eventCache[eventType];
		if ((object)obj != null && obj.GetType() != listenerAdd.GetType())
		{
			debugAct(string.Format("꾼ʚꈈ筇אַﾃ⪵⼈閘︷쿕ど謶ぐò匡籽\u0002〄\ue002}Ⅳ哕", obj.GetType(), listenerAdd.GetType()));
			return false;
		}
		return true;
	}

	public void AddEventListener(int eventType, Action handler)
	{
		if (OnListenerAdding(eventType, handler))
		{
			eventCache[eventType] = (Action)Delegate.Combine((Action)eventCache[eventType], handler);
		}
	}

	public void AddEventListener<T>(int eventType, Action<T> handler)
	{
		if (OnListenerAdding(eventType, handler))
		{
			eventCache[eventType] = (Action<T>)Delegate.Combine((Action<T>)eventCache[eventType], handler);
		}
	}

	public void AddEventListener<T1, T2>(int eventType, Action<T1, T2> handler)
	{
		if (OnListenerAdding(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2>)Delegate.Combine((Action<T1, T2>)eventCache[eventType], handler);
		}
	}

	public void AddEventListener<T1, T2, T3>(int eventType, Action<T1, T2, T3> handler)
	{
		if (OnListenerAdding(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2, T3>)Delegate.Combine((Action<T1, T2, T3>)eventCache[eventType], handler);
		}
	}

	public void AddEventListener<T1, T2, T3, T4>(int eventType, Action<T1, T2, T3, T4> handler)
	{
		if (OnListenerAdding(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2, T3, T4>)Delegate.Combine((Action<T1, T2, T3, T4>)eventCache[eventType], handler);
		}
	}

	public void DispatchEvent(int eventType)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action action)
		{
			action();
		}
	}

	public void DispatchEvent<T>(int eventType, T arg)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action<T> action)
		{
			action(arg);
		}
	}

	public void DispatchEvent<T1, T2>(int eventType, T1 arg1, T2 arg2)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action<T1, T2> action)
		{
			action(arg1, arg2);
		}
	}

	public void DispatchEvent<T1, T2, T3>(int eventType, T1 arg1, T2 arg2, T3 arg3)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action<T1, T2, T3> action)
		{
			action(arg1, arg2, arg3);
		}
	}

	public void DispatchEvent<T1, T2, T3, T4>(int eventType, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action<T1, T2, T3, T4> action)
		{
			action(arg1, arg2, arg3, arg4);
		}
	}

	public void DispatchEvent<T1, T2, T3, T4, T5>(int eventType, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
	{
		if (eventCache.ContainsKey(eventType) && eventCache[eventType] is Action<T1, T2, T3, T4, T5> action)
		{
			action(arg1, arg2, arg3, arg4, arg5);
		}
	}

	private void DispatchTryEventInternal(int eventType, Delegate handlers, params object[] args)
	{
		if ((object)handlers == null)
		{
			return;
		}
		Delegate[] invocationList;
		try
		{
			invocationList = handlers.GetInvocationList();
		}
		catch (Exception arg)
		{
			debugAct(string.Format("숚끓措栛䑕&\u0092厑숯끈溠琰呂7¾厽鴏ข滣琐ɂ7¾厽숏끃ォ紐吉)Å叄숋끊㶱䜌ⱇ7ù司숄끎掐愅敂=\u0092厑숄끓玶琅瑸;Ò发수끟㶫笙ⱛ ù司④அ", eventType, arg));
			return;
		}
		if (invocationList == null)
		{
			return;
		}
		foreach (Delegate obj in invocationList)
		{
			try
			{
				obj.DynamicInvoke(args);
			}
			catch (Exception arg2)
			{
				Debug.LogError((object)string.Format("숚끓措栛䑕&\u0092厑숯끈溠琰呂7¾厽鴏ข滣琐ɂ7¾厽숏끃ォ紐吉)Å叄수끟㶫笙ⱛ ù司④அ", eventType, arg2));
			}
		}
	}

	public void DispatchTryEvent(int eventType)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType]);
		}
	}

	public void DispatchTryEvent<T>(int eventType, T arg)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType], arg);
		}
	}

	public void DispatchTryEvent<T1, T2>(int eventType, T1 arg1, T2 arg2)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType], arg1, arg2);
		}
	}

	public void DispatchTryEvent<T1, T2, T3>(int eventType, T1 arg1, T2 arg2, T3 arg3)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType], arg1, arg2, arg3);
		}
	}

	public void DispatchTryEvent<T1, T2, T3, T4>(int eventType, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType], arg1, arg2, arg3, arg4);
		}
	}

	public void DispatchTryEvent<T1, T2, T3, T4, T5>(int eventType, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
	{
		if (eventCache.ContainsKey(eventType))
		{
			DispatchTryEventInternal(eventType, eventCache[eventType], arg1, arg2, arg3, arg4, arg5);
		}
	}

	private bool OnListenerRemoving(int eventType, Delegate listenerRemove)
	{
		if (eventCache.ContainsKey(eventType))
		{
			Delegate obj = eventCache[eventType];
			if ((object)obj != null && obj.GetType() != listenerRemove.GetType())
			{
				debugAct(string.Format("뮼䙞ꈈ筇אַﾃ⪵⼈閘︷쿕ど謶ぐò匡籽\u0002〄\ue002}Ⅳ哕", obj.GetType(), listenerRemove.GetType()));
				return false;
			}
			return true;
		}
		return false;
	}

	private void OnListenerRemoved(int eventType)
	{
		if (eventCache.ContainsKey(eventType) && (object)eventCache[eventType] == null)
		{
			eventCache.Remove(eventType);
		}
	}

	public void RemoveEventListener(int eventType, Action handler)
	{
		if (OnListenerRemoving(eventType, handler))
		{
			eventCache[eventType] = (Action)Delegate.Remove((Action)eventCache[eventType], handler);
			OnListenerRemoved(eventType);
		}
	}

	public void RemoveEventListener<T>(int eventType, Action<T> handler)
	{
		if (OnListenerRemoving(eventType, handler))
		{
			eventCache[eventType] = (Action<T>)Delegate.Remove((Action<T>)eventCache[eventType], handler);
			OnListenerRemoved(eventType);
		}
	}

	public void RemoveEventListener<T1, T2>(int eventType, Action<T1, T2> handler)
	{
		if (OnListenerRemoving(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2>)Delegate.Remove((Action<T1, T2>)eventCache[eventType], handler);
			OnListenerRemoved(eventType);
		}
	}

	public void RemoveEventListener<T1, T2, T3>(int eventType, Action<T1, T2, T3> handler)
	{
		if (OnListenerRemoving(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2, T3>)Delegate.Remove((Action<T1, T2, T3>)eventCache[eventType], handler);
			OnListenerRemoved(eventType);
		}
	}

	public void RemoveEventListener<T1, T2, T3, T4>(int eventType, Action<T1, T2, T3, T4> handler)
	{
		if (OnListenerRemoving(eventType, handler))
		{
			eventCache[eventType] = (Action<T1, T2, T3, T4>)Delegate.Remove((Action<T1, T2, T3, T4>)eventCache[eventType], handler);
			OnListenerRemoved(eventType);
		}
	}

	public void RemoveAllListener()
	{
		eventCache.Clear();
	}
}
