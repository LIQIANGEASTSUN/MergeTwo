using System;

[Serializable]
public class TableUnlockMergeLine : TableBase
{
	public int id;

	public int unlockType;

	public int[] unlockParam;

	public int unlockMergeId;

	public string desKey;

	public string animName;

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
