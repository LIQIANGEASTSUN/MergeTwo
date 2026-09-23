using System;
using ContextualizedECS;
using Framework.Core.DataBinding;
using Framework.Core.MVVM.ViewModel;
using Merger.MergeBoard.PowerBoost.Models;
using Merger.PowerBoost.Providers;
using Zenject;

namespace Merger.MergeBoard.PowerBoost.InfoBar.ViewModel
{
	public class PowerBoostInfoBarColorModifierViewModel : ViewModelBase
	{
		[Inject]
		[NonSerialized]
		public IPowerBoostModel _powerBoostModel;

		[Inject]
		[NonSerialized]
		public IPowerBoostDataProvider _powerBoostDataProvider;

		public bool IsPowerBoostActive => false;

		public BindableProperty<int> PowerBoostMode => null;

		public bool IsPowerBoostable(Entity entity)
		{
			return false;
		}
	}
}
