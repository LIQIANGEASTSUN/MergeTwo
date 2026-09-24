namespace GameLogic.Player.Board;

[IsReadOnly]
public struct Offset
{
	public static readonly Offset Top; //Field offset: 0x0
	public static readonly Offset Bot; //Field offset: 0x8
	public static readonly Offset Left; //Field offset: 0x10
	public static readonly Offset Right; //Field offset: 0x18
	public static readonly Offset TopRight; //Field offset: 0x20
	public static readonly Offset BotRight; //Field offset: 0x28
	public static readonly Offset BotLeft; //Field offset: 0x30
	public static readonly Offset TopLeft; //Field offset: 0x38
	public static readonly Offset[] OffsetsNearHorizontalAndVertical; //Field offset: 0x40
	public static readonly Offset[] Offsets3x3AroundClockwise; //Field offset: 0x48
	public static readonly Offset[] Offsets3x3BiggerAroundClockwise; //Field offset: 0x50
	public readonly int X; //Field offset: 0x0
	public readonly int Y; //Field offset: 0x4

	private static Offset() { }

	private Offset(int x, int y) { }

	public static Offset op_Addition(Offset a, Offset b) { }

	public static Offset op_Implicit(ValueTuple<Int32, Int32> pair) { }

}

