using System;
using System.Collections.Generic;
using GameLogic.MergeChains;
using Metacore.MergeMansion.Utilities;
using UnityEngine;

namespace UI.Codex
{
	public class CodexItemList : VerticalInfiniteScrollView<CodexItem>
	{
		[SerializeField]
		public CodexItem itemPrefab;

		[NonSerialized]
		public CodexMenuState codexMenuState;

		[NonSerialized]
		public IEnumerable<MergeChainDefinition> data;

		[NonSerialized]
		public List<MergeChainDefinition> filteredData;

		public void Setup(CodexMenuState menuState, IEnumerable<MergeChainDefinition> mergeChains)
		{
		}

		public void SetupData()
		{
		}

		public override void UpdateItem(int itemDataIndex, CodexItem item)
		{
		}

		public override Type GetPrefabTypeForIndex(int index)
		{
			return null;
		}
	}
}
