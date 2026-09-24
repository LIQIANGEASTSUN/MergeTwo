namespace Metaplay.Core;

public class CopyableEvent
{
	private Action<T1> _invoker; //Field offset: 0x0

	public CopyableEvent`2() { }

	public void Invoke(T1 arg1) { }

	public static DerivedEventType op_Addition(CopyableEvent<DerivedEventType, T1> self, Action<T1> action) { }

}

