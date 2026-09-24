//Type is in global namespace

public struct TimeData
{
	public long Millis; //Field offset: 0x0
	public long Second; //Field offset: 0x8

	public static TimeData At(long millis) { }

	public static TimeData Now() { }

	public static TimeData op_Subtraction(TimeData lhs, TimeData rhs) { }

	public virtual string ToString() { }

}

