using Merger.Boosters.Declarations.Enums;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterStrategy
	{
		BoosterType BoosterType { get; }

		void Execute(RemoteBoosterData boosterData, bool newBooster);

		void TryActivate();

		void TryDeactivate(string uuid);
	}
}
