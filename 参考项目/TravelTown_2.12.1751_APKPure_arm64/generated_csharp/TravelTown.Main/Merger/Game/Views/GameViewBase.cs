using Framework.Core.MVVM.View;
using Merger.Game.ViewModel;

namespace Merger.Game.Views
{
	public class GameViewBase<TViewModel> : ViewBase<TViewModel> where TViewModel : GameBaseViewModel
	{
		public bool HasGameStarted => false;

		public virtual void Awake()
		{
		}

		public override void OnDestroy()
		{
		}

		public void GameStartedChanged(bool started)
		{
		}

		public virtual void GameStarted()
		{
		}
	}
}
