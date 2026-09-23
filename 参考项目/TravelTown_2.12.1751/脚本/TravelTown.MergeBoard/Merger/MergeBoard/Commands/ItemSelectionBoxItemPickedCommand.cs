using System;
using Framework.Core.Command;
using MergeEngine.Model.Configuration;
using Merger.Game.Model;
using Merger.ItemSelectionBox.Signals;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.View.Layout;
using Zenject;

namespace Merger.MergeBoard.Commands
{
	public class ItemSelectionBoxItemPickedCommand : CommandBase<ItemSelectionBoxItemSelectedSignal>
	{
		[Inject]
		[NonSerialized]
		public IGameSessionModel _gameSessionModel;

		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _layout;

		public override void Execute(ItemSelectionBoxItemSelectedSignal signal)
		{
		}
	}
}
