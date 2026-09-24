using Merger.Boosters.Declarations.Data;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterActivator
	{
		bool CanActivateBooster(IBoosterItem booster, string uuId);

		void ActivateBooster(string Uuid, BoosterActivationData payload);
	}
}
