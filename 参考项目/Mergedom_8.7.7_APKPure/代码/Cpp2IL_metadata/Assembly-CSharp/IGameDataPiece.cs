//Type is in global namespace

public interface IGameDataPiece
{

	public void DeleteLocalData() { }

	public string GetKey() { }

	public void Initialize(GameData gameData) { }

	public bool IsDirty() { }

	public void LockChanges() { }

	public void SerializeToLocal() { }

	public void SetDirty(bool deviceSpecific = true) { }

	public void TriggerUpdate() { }

	public bool TryDeserializeFromLocal(bool createInitialValuesIfNotExist = false) { }

	public void UnlockChanges() { }

}

