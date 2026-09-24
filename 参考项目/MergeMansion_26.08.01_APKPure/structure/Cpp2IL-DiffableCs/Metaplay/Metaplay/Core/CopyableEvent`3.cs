namespace Metaplay.Core;

public class CopyableEvent
{
	private Action<T1, T2> _invoker; //Field offset: 0x0

	public CopyableEvent`3() { }

	public void Invoke(T1 arg1, T2 arg2) { }

	public static DerivedEventType op_Addition(CopyableEvent<DerivedEventType, T1, T2> self, Action<T1, T2> action) { }

}

