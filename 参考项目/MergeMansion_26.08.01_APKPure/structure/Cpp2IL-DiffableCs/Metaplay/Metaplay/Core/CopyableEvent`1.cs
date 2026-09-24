namespace Metaplay.Core;

public class CopyableEvent
{
	private Action _invoker; //Field offset: 0x0

	public CopyableEvent`1() { }

	public void Invoke() { }

	public static DerivedEventType op_Addition(CopyableEvent<DerivedEventType> self, Action action) { }

}

