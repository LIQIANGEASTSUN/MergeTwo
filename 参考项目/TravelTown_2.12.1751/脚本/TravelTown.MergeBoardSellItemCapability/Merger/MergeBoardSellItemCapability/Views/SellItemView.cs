using ContextualizedECS;
using ContextualizedECS.Context;
using Framework.Core.MVVM.View;
using Framework.Core.View.ReactiveComponents;
using MergeEngine.Configuration;
using Merger.Game.Views.Data;
using Merger.MergeBoard.Logic;
using Merger.MergeBoardSellItemCapability.ViewModels;
using UnityEngine;
using UnityEngine.UI;

namespace Merger.MergeBoardSellItemCapability.Views
{
	public class SellItemView : ViewBase<SellItemViewModel>, IBoardControllerPostTickProcessor
	{
		[SerializeField]
		public ReactiveButton _sellButton;

		[SerializeField]
		public ReactiveButton _undoButton;

		[SerializeField]
		public Image _sellButtonImage;

		[SerializeField]
		public Image _deleteButtonImage;

		[SerializeField]
		public string _sellButtonTextFormat;

		[SerializeField]
		public ReactiveText _sellButtonText;

		[SerializeField]
		public float _buttonOnClickInvocationDelay;

		public void Start()
		{
		}

		public override void OnDestroy()
		{
		}

		public void Update()
		{
		}

		public void Process(TickArgs result)
		{
		}

		public void OnSelectedItemChanged((Entity entity, IMergeItem mergeItem) selectedItem)
		{
		}

		public void UpdateSellButton()
		{
		}

		public void UpdateUndoSellButton()
		{
		}

		public void SetSellButtonText(IMergeItem mergeItem)
		{
		}

		public void SellButtonClicked()
		{
		}

		public void UndoSellButtonClicked()
		{
		}

		public void SendFloatingTextSignal(Entity entity, FloatingTextType floatingType, FloatingTextData data = null, bool useDelay = false)
		{
		}
	}
}
