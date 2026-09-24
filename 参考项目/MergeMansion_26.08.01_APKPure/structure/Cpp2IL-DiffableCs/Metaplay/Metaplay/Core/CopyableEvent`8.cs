namespace Metaplay.Core;

public class CopyableEvent
{
	private Action<T1, T2, T3, T4, T5, T6, T7> _invoker; //Field offset: 0x0

	public CopyableEvent`8() { }

	public void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) { }

	public static DerivedEventType op_Addition(CopyableEvent<DerivedEventType, T1, T2, T3, T4, T5, T6, T7> self, Action<T1, T2, T3, T4, T5, T6, T7> action) { }

}

