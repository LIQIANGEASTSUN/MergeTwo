using System;
using System.Collections.Generic;
using Framework.Core.MVVM.View;
using JetBrains.Annotations;
using Merger.Game.Views;
using Merger.Game.Views.BoardItem;
using Merger.MergeBoard.ViewModel;
using UnityEngine;

namespace Merger.MergeBoard.View.Items
{
	public class MergeBoardItemBehavioursHandler : ViewBase<BoardItemBehavioursHandlerViewModel>
	{
		[Tooltip("Can be used to configure visual variants of behaviours in Board Events")]
		[SerializeField]
		[CanBeNull]
		public List<BehaviourPrefabData> _behaviourOverrides;

		[CanBeNull]
		[SerializeField]
		[Tooltip("holder GameObject for behaviour pools")]
		public Transform _behaviourPoolsHolder;

		[NonSerialized]
		public Dictionary<string, BehaviourPrefabData> _combinedBehaviourConfig;

		public Dictionary<string, BehaviourPrefabData> CombinedBehaviourConfig => null;

		public string BehavioursPoolIdStringFormat => null;

		public void AttachBehaviours(IBoardItemView boardItem)
		{
		}

		public void InitializeBehaviourPools()
		{
		}
	}
}
