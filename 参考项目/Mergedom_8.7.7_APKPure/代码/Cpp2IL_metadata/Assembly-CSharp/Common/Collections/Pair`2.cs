namespace Common.Collections;

public struct Pair
{
	public T first; //Field offset: 0x0
	public K second; //Field offset: 0x0

	public Pair`2(T t, K k) { }

	public void Deconstruct(out T obj1, out K obj2) { }

}

