namespace UI.Board;

[DefaultMember("Item")]
public class BoardCoordinates : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Transform, Transform[]> <>9__2_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal Transform[] <Awake>b__2_0(Transform row) { }

	}

	[SerializeField]
	private Transform[] rows; //Field offset: 0x20
	private Transform[][] cells; //Field offset: 0x28

	public Transform Item
	{
		 get { } //Length: 72
	}

	public BoardCoordinates() { }

	private void Awake() { }

	public Transform get_Item(int x, int y) { }

}

