using Merger.Boosters.Declarations.Enums;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterStrategyApplier
	{
		BoosterType Type { get; }

		void ApplyStrategy(IBoosterStrategy strategy);
	}
}
