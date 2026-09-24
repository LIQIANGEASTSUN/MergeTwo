using System.Collections.Generic;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterActivationPolicy
	{
		bool CanActivate(IBoosterItem booster, List<RemoteBoosterData> activeBoosters, IEnumerable<IBoosterItem> activeBoostersLocal);
	}
}
