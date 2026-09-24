//Type is in global namespace

public class Chest : BaseChest
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<BaseItem, Boolean> <>9__5_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <OnTapped>b__5_0(BaseItem baseItem) { }

	}

	[Inject]
	private IBoardController _boardController; //Field offset: 0x108
	[Inject]
	private SlidingTextController _slidingTextController; //Field offset: 0x110

	protected override EffectTypes EffectType
	{
		 get { } //Length: 8
	}

	public Chest() { }

	protected override EffectTypes get_EffectType() { }

	public virtual void OnTapped() { }

	public virtual void Reset(bool willPlayEffect = false) { }

}

