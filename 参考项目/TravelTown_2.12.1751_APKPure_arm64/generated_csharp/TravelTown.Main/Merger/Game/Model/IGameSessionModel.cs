using Framework.Core.DataBinding;
using Merger.Game.Data;

namespace Merger.Game.Model
{
	public interface IGameSessionModel
	{
		BindableProperty<bool> Started { get; }

		MutableBindableProperty<GameState> GameState { get; }

		MutableBindableProperty<GameState> PrimaryGameState { get; }

		MutableBindableProperty<CurrentBoardType> CurrentBoardType { get; }

		MutableBindableProperty<bool> IsReloadPending { get; }

		MutableBindableProperty<bool> IsReloading { get; }

		MutableBindableProperty<bool> IsGameStarted { get; }

		MutableBindableProperty<bool> IsConnectionLost { get; }

		bool IsGameLoadingToMeta { get; }

		BindableProperty<bool> IsInMetagame { get; }

		BindableProperty<bool> BoardVisible { get; }

		void Start();

		bool IsOnMainBoard();

		int GetCurrentLevel();
	}
}
