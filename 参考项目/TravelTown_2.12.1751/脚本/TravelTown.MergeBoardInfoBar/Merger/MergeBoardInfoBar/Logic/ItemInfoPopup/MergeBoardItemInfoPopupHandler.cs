using System;
using Framework.Core;
using Merger.MergeBoardInfoBar.Logic.ItemInfoPopup.Strategy;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.ItemInfoPopup
{
	public class MergeBoardItemInfoPopupHandler : Base, IMergeBoardItemInfoPopupHandler
	{
		[Inject]
		[NonSerialized]
		public IItemInfoPopupDefaultStrategy _defaultStrategy;

		[Inject]
		[NonSerialized]
		public IItemInfoPopupOpenStrategy[] _strategies;

		public void OpenPopup(ItemInfoPopupOpenData data)
		{
		}
	}
}
