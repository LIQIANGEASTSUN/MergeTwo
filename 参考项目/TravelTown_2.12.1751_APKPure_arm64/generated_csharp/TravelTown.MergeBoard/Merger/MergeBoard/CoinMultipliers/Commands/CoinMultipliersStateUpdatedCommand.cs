using System;
using Framework.Core.Command;
using Merger.CoinMultipliers.Signals;
using Merger.MergeBoard.Controller;
using Zenject;

namespace Merger.MergeBoard.CoinMultipliers.Commands
{
	public class CoinMultipliersStateUpdatedCommand : CommandBase<CoinMultipliersStateUpdatedSignal>
	{
		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		public override void Execute(CoinMultipliersStateUpdatedSignal signal)
		{
		}
	}
}
