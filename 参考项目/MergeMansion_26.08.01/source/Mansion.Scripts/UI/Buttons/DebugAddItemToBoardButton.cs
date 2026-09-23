using System;
using GameLogic.Player;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Client;
using UnityEngine;

namespace UI.Buttons
{
	public class DebugAddItemToBoardButton : MonoBehaviour
	{
		[NonSerialized]
		public Type _type;

		[NonSerialized]
		public IPlayer _player;

		[NonSerialized]
		public IPlayerClientContext _playerContext;

		[NonSerialized]
		public MergeBoardId _mergeBoardId;

		[NonSerialized]
		public int _itemId;

		[NonSerialized]
		public int _addCount;

		[NonSerialized]
		public Option<IMergeItem> _sinkOption;

		[NonSerialized]
		public Action _afterActionExecuted;

		public void InitializeAddToBoard(IPlayer player, IPlayerClientContext playerContext, MergeBoardId mergeBoardId, int itemId, int addCount, Action onAddedToBoard)
		{
		}

		public void InitializeSink(IPlayer player, IPlayerClientContext playerContext, MergeBoardId mergeBoardId, int itemId, int addCount, IMergeItem sink, Action onProgressIncreased)
		{
		}

		public void Initialize(IPlayer player, IPlayerClientContext playerContext, MergeBoardId mergeBoardId, int itemId, int addCount, Option<IMergeItem> sinkOption, Action afterActionExecuted)
		{
		}

		[PublicAPI]
		public void Clicked()
		{
		}

		public void AddToBoard()
		{
		}

		public void Sink(IMergeItem sink)
		{
		}
	}
}
