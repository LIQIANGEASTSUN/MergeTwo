using System;
using System.Collections.Generic;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FAT
{
	public class UIChoiceBox : UIBase
	{
		[SerializeField]
		public TextMeshProUGUI txtTitle;

		[SerializeField]
		public Button btnClose;

		[SerializeField]
		public Button btnConfirm;

		[SerializeField]
		public Button btnGrey;

		[SerializeField]
		public Transform itemRoot;

		[NonSerialized]
		public int boxItemId;

		[NonSerialized]
		public int selectedItemId;

		[NonSerialized]
		public List<int> curChoices;

		[NonSerialized]
		public Func<int, bool> onConfirm;

		public override void OnCreate()
		{
		}

		public override void OnParse(params object[] items)
		{
		}

		public override void OnPreOpen()
		{
		}

		public void ShowTitle(Item box)
		{
		}

		public void ShowChoices(List<int> choices)
		{
		}

		public void ItemShow(Transform item, int id)
		{
		}

		public void ItemSelect(Transform item, bool selected)
		{
		}

		public void OnSelectItem(int idx)
		{
		}

		public void OnBtnConfirm()
		{
		}

		public void _003C_003EiFixBaseProxy_OnCreate()
		{
		}

		public void _003C_003EiFixBaseProxy_OnParse(object[] P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}
	}
}
