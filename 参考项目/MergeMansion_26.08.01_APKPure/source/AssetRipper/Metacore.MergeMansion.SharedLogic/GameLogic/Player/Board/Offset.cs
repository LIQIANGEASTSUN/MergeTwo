namespace GameLogic.Player.Board
{
	public readonly struct Offset
	{
		public readonly int X;

		public readonly int Y;

		public static readonly Offset Top;

		public static readonly Offset Bot;

		public static readonly Offset Left;

		public static readonly Offset Right;

		public static readonly Offset TopRight;

		public static readonly Offset BotRight;

		public static readonly Offset BotLeft;

		public static readonly Offset TopLeft;

		public static readonly Offset[] OffsetsNearHorizontalAndVertical;

		public static readonly Offset[] Offsets3x3AroundClockwise;

		public static readonly Offset[] Offsets3x3BiggerAroundClockwise;

		public Offset(int x, int y)
		{
			X = 0;
			Y = 0;
		}

		public static Offset operator +(Offset a, Offset b)
		{
			return default(Offset);
		}

		public static implicit operator Offset((int x, int y) pair)
		{
			return default(Offset);
		}
	}
}
