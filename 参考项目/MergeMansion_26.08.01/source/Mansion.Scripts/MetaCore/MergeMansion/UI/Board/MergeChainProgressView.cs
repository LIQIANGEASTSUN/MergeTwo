using System;
using System.Collections.Generic;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metacore.MergeMansion.Common.Options;
using UnityEngine;

namespace Metacore.MergeMansion.UI.Board
{
	public class MergeChainProgressView : MonoBehaviour
	{
		[Serializable]
		public struct TweenData
		{
			public float InitialDelay;

			public float BetweenDelay;

			public float Duration;

			public AnimationCurve Curve;

			public MergeChainProgressItemView.TweenArgs ToTweenArgs(int i)
			{
				return default(MergeChainProgressItemView.TweenArgs);
			}
		}

		public struct Data
		{
			public readonly IBoard Board;

			public readonly IBoardController BoardController;

			public readonly IEnumerable<IItemDefinition> MergeChainItems;

			public readonly int MergeChainDisplayLength;

			public Data(IPlayer player, IBoard board, IBoardController boardController, IMergeChainDefinition mergeChainDefinition)
			{
				Board = null;
				BoardController = null;
				MergeChainItems = null;
				MergeChainDisplayLength = 0;
			}

			public static int GetMergeChainDisplayLength(IPlayer player, IBoard board, IMergeChainDefinition mergeChainDefinition)
			{
				return 0;
			}
		}

		[SerializeField]
		public MergeChainProgressItemView _itemViewPrefab;

		[SerializeField]
		public Transform _itemViewContainer;

		[SerializeField]
		public TweenData _itemTweenData;

		[SerializeField]
		public TweenData _arrowTweenData;

		[NonSerialized]
		public readonly List<MergeChainProgressItemView> _instantiatedItemViews;

		[NonSerialized]
		public Option<Data> _dataOption;

		public void OnDestroy()
		{
		}

		public void Init(IPlayer player, IBoard board, IBoardController boardController)
		{
		}

		public void TearDown()
		{
		}

		public void DestroyItemViews()
		{
		}

		public Option<IMergeChainDefinition> GetMergeChainToDisplay(IPlayer player, IBoard board)
		{
			return default(Option<IMergeChainDefinition>);
		}

		public void InitItemViews(Data data)
		{
		}

		public int GetLastActiveItemIndex(IBoard board, IEnumerable<IItemDefinition> items, int count)
		{
			return 0;
		}

		public void OnBoardStepResult(BoardStepResult boardStepResult)
		{
		}

		public void UpdateItemViewStates()
		{
		}

		public static MergeChainProgressItemView.State GetStateForItemIndex(int i, int lastActiveItemIndex)
		{
			return default(MergeChainProgressItemView.State);
		}
	}
}
