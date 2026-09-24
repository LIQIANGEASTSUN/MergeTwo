using System;

[Serializable]
public class TableMergeLine : TableBase
{
	public int id;

	public string name;

	public int type;

	public int group;

	public bool customSort;

	public int amount;

	public int[] output;

	public int[] re_line;

	public int[] presetDropQueue;

	public int[] presetDropQueue1;

	public bool Sales_Protect;

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
