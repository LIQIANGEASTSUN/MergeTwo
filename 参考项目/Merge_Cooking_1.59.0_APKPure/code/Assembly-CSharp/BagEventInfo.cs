using System;
using UnityEngine;

public class BagEventInfo
{
	public GameGoodsVo bagGoodsVo;

	public Action<bool> CallBack;

	public Transform StartTransform;

	public Transform TipLocation;

	public bool PlayTakeoutEffect;

	public int fromType;
}
