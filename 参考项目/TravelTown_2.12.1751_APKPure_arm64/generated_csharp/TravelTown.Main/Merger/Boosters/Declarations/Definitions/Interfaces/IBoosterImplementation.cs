using Merger.Boosters.Data;
using Merger.Boosters.Declarations.Enums;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterImplementation<TData> where TData : BoosterDataBase
	{
		BoosterType Type { get; }

		bool CanProcess();

		TData CreateBoosterData(RemoteBoosterData remoteActiveBooster);

		void BoosterUpdated(TData implementation);

		void BoosterRemoved(TData implementation);

		void OnLastBoosterExpire();
	}
}
