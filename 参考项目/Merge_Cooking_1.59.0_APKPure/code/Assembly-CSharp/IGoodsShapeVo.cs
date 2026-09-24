using System;
using System.Collections.Generic;
using TLF;
using UnityEngine;

[Serializable]
public class IGoodsShapeVo : BaseVO
{
	public int goodsID;

	public string shapeInfo = "";

	public List<Vector2> shapeList = new List<Vector2>();

	public Vector2 GetSize()
	{
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		//IL_0032: Unknown result type (might be due to invalid IL or missing references)
		//IL_003f: Unknown result type (might be due to invalid IL or missing references)
		//IL_004c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0063: Unknown result type (might be due to invalid IL or missing references)
		//IL_0100: Unknown result type (might be due to invalid IL or missing references)
		//IL_0081: Unknown result type (might be due to invalid IL or missing references)
		//IL_0073: Unknown result type (might be due to invalid IL or missing references)
		//IL_009f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00af: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
		List<Vector2> list = GetShapeList();
		if (list == null || list.Count < 1)
		{
			return new Vector2(1f, 1f);
		}
		float x = list[0].x;
		float y = list[0].y;
		float x2 = list[0].x;
		float y2 = list[0].y;
		for (int i = 1; i < list.Count; i++)
		{
			if (list[i].x < x)
			{
				x = list[i].x;
			}
			if (list[i].y < y)
			{
				y = list[i].y;
			}
			if (list[i].x > x2)
			{
				x2 = list[i].x;
			}
			if (list[i].y > y2)
			{
				y2 = list[i].y;
			}
		}
		return new Vector2(y2 - y + 1f, x2 - x + 1f);
	}

	public List<Vector2> GetShapeList()
	{
		//IL_0051: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		if (shapeList == null || shapeList.Count < 1)
		{
			string[] array = shapeInfo.Split(';');
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split('|');
				if (array2.Length == 2)
				{
					Vector2 item = new Vector2((float)array2[0].ToInt(), (float)array2[1].ToInt());
					shapeList.Add(item);
				}
			}
		}
		return shapeList;
	}

	public List<int> GetAreaGridIdByGridId(int gridId)
	{
		//IL_0014: Unknown result type (might be due to invalid IL or missing references)
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		List<int> list = new List<int>();
		List<Vector2> list2 = GetShapeList();
		for (int i = 0; i < list2.Count; i++)
		{
			int item = gridId + (int)list2[i].x * 10 + (int)list2[i].y;
			list.Add(item);
		}
		return list;
	}
}
