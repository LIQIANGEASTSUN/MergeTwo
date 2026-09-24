using System;
using UnityEngine;

namespace MiniGame.CupMerge;

[Serializable]
public class IntGameObjectKvp
{
	[Tooltip("字典的键（int类型，不可重复）")]
	public int key;

	[Tooltip("字典的值（GameObject类型）")]
	public GameObject value;
}
