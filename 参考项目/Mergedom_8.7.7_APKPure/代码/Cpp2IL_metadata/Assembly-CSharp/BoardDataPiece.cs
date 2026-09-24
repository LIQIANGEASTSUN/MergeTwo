//Type is in global namespace

public class BoardDataPiece : BaseGameDataPiece
{
	[CompilerGenerated]
	private struct <>c__DisplayClass13_0
	{
		public bool createInitialValuesIfNotExist; //Field offset: 0x0
		public BoardDataPiece <>4__this; //Field offset: 0x8

	}

	public const string ALTERNATIVE_ASSETS_GROUP = "BoardDataPiece.alternativeAssetsGroup"; //Field offset: 0x0
	private const string DATA = "BoardDataPiece.dataObject"; //Field offset: 0x0
	private const string START_BOARD_DATA_PATH = "StartBoardData_A"; //Field offset: 0x0
	private const string START_BOARD_DATA_PATH_FTUE_BC = "StartBoardData_FTUE_B"; //Field offset: 0x0
	public Action triggerUpdate; //Field offset: 0x28
	[Obsolete]
	private readonly BoardJsonSaveLoad boardJsonSaveLoad; //Field offset: 0x30
	private DataObjectBoard dataObject; //Field offset: 0x38
	private BoardData _kinoaInitialBoard; //Field offset: 0x40

	public BoardData boardData
	{
		 get { } //Length: 24
	}

	public BoardDataPiece() { }

	[CompilerGenerated]
	private bool <TryDeserializeFromLocal>g__TryCreateNewBoard|13_0(ref <>c__DisplayClass13_0 unnamed_param_0) { }

	public virtual void DeleteLocalData() { }

	public BoardData get_boardData() { }

	public virtual string GetKey() { }

	public virtual bool IsDirty() { }

	public virtual void SerializeToLocal() { }

	public void SetBoardData(BoardData data) { }

	public void SetKinoaInitialBoard(BoardData initialBoard) { }

	public virtual void TriggerUpdate() { }

	public virtual bool TryDeserializeFromLocal(bool createInitialValuesIfNotExist = false) { }

}

