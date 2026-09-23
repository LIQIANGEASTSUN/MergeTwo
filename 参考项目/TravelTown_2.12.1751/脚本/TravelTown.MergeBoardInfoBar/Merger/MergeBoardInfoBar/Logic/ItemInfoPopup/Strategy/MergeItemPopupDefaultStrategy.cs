using System;
using Framework.UIFSM.Model.Navigation;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.ItemInfoPopup.Strategy
{
	public class MergeItemPopupDefaultStrategy : IItemInfoPopupDefaultStrategy
	{
		[Inject]
		[NonSerialized]
		public INavigationModel _navigationModel;

		[Inject]
		[NonSerialized]
		public DiContainer _container;

		[Inject]
		[NonSerialized]
		public SignalBus _signalBus;

		public bool TryOpenPopup(ItemInfoPopupOpenData data)
		{
			return false;
		}
	}
}
