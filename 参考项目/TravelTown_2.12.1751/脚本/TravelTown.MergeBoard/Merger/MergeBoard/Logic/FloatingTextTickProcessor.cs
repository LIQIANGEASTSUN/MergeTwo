using System;
using ContextualizedECS;
using ContextualizedECS.Context;
using Merger.CoinMultipliers.Services;
using Merger.Game.Views.Data;
using Merger.MergeBoard.Controller;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.Logic
{
	public class FloatingTextTickProcessor : IBoardControllerPostTickProcessor
	{
		[Inject]
		[NonSerialized]
		public BoardController _boardController;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		[Inject]
		[NonSerialized]
		public IMergeBoardLayout _boardLayout;

		[Inject]
		[NonSerialized]
		public ICoinMultiplierCollectFloatingTextBuilder _coinMultiplierCollectFloatingTextBuilder;

		public RectTransform _overlayCanvas => null;

		public void Process(TickArgs result)
		{
		}

		public void OnOutOfHardCurrency()
		{
		}

		public void SendFloatingTextSignal(Entity entity, FloatingTextType floatingType, FloatingTextData data = null, bool useDelay = false)
		{
		}
	}
}
