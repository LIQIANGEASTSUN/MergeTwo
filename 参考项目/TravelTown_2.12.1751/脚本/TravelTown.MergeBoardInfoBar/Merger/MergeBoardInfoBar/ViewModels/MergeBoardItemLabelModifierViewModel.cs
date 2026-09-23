using System;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoardInfoBar.Logic.Labeling;
using Zenject;

namespace Merger.MergeBoardInfoBar.ViewModels
{
	public class MergeBoardItemLabelModifierViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IInfoBarLabelRule[] _labelRules;

		public IInfoBarLabelRule[] LabelRules => null;
	}
}
