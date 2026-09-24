//Type is in global namespace

[Obsolete]
public class BoardJsonSaveLoad
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<String, DateTime> <>9__6_0; //Field offset: 0x8
		public static Func<String, String> <>9__6_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal DateTime <Initialize>b__6_0(string d) { }

		internal string <Initialize>b__6_1(string file) { }

	}

	private const string OLD_BOARD_DATA_PATH = "BoardData"; //Field offset: 0x0
	private const string BOARD_DATA_FOLDER = "Board"; //Field offset: 0x0
	private const string BOARD_DATA_FILE_START_PREFIX = "BoardData"; //Field offset: 0x0
	private const int MAXIMUM_JSON_FILE_SAVED = 3; //Field offset: 0x0
	private LinkedList<String> fileNamesOrderedByWriteTime; //Field offset: 0x10
	private bool isFirstSession; //Field offset: 0x18

	public BoardJsonSaveLoad() { }

	public void DeleteAllFiles() { }

	private string GetFileNameOfIndex(int index) { }

	public void Initialize() { }

	public BoardData LoadBoardData() { }

	public void SaveBoard(BoardData boardData) { }

}

