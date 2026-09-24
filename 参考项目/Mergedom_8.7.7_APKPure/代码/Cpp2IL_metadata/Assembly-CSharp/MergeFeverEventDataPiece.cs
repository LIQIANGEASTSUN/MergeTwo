//Type is in global namespace

public class MergeFeverEventDataPiece : BaseGameDataPiece
{
	private const string KEY_DATA_OBJECT = "MergeFeverEventDataPiece.dataObject"; //Field offset: 0x0
	private const string IS_POPUP_SHOWN = "is_popup_shown"; //Field offset: 0x0
	private const string MERGE_FEVER_EVENT = "merge_fever"; //Field offset: 0x0
	private DataObjectMergeFever dataObject; //Field offset: 0x28
	private string eventName; //Field offset: 0x30
	private string saveKey; //Field offset: 0x38
	private bool isInit; //Field offset: 0x40

	public int currentMergeCount
	{
		 get { } //Length: 24
	}

	public long doubleMergeActivateTime
	{
		 get { } //Length: 24
	}

	public int doubleMergeIncrementValue
	{
		 get { } //Length: 24
	}

	public int doubleMergeLifeTime
	{
		 get { } //Length: 24
	}

	public bool isPopupShown
	{
		 get { } //Length: 160
		 set { } //Length: 152
	}

	public string lastFeverId
	{
		 get { } //Length: 24
	}

	public int lastMergeCount
	{
		 get { } //Length: 24
	}

	public int levelIndex
	{
		 get { } //Length: 24
	}

	public MergeFeverEventDataPiece() { }

	public void AddCurrentMergeCount(int mergeCount) { }

	public virtual void DeleteLocalData() { }

	public int get_currentMergeCount() { }

	public long get_doubleMergeActivateTime() { }

	public int get_doubleMergeIncrementValue() { }

	public int get_doubleMergeLifeTime() { }

	public bool get_isPopupShown() { }

	public string get_lastFeverId() { }

	public int get_lastMergeCount() { }

	public int get_levelIndex() { }

	public virtual string GetKey() { }

	public void IncrementLevelIndex() { }

	public void Init(string eventName) { }

	private void LoadSave() { }

	public void ResetPlayerData() { }

	public virtual void SerializeToLocal() { }

	public void set_isPopupShown(bool value) { }

	public void SetDoubleMergeActivateTime(long time) { }

	public void SetDoubleMergeIncrementValue(int val) { }

	public void SetDoubleMergeLifeTime(int time) { }

	public void SetLastFeverId(string id) { }

	public void SetLastMergeCount(int lastMergeCount) { }

	public void SetLevelIndex(int index) { }

	public virtual bool TryDeserializeFromLocal(bool createInitialValuesIfNotExist = false) { }

}

