using System.Collections.Generic;
using Merger.Boosters.Declarations.Enums;

namespace Merger.Boosters.Declarations.Definitions.Interfaces
{
	public interface IBoosterController
	{
		BoosterType Type { get; }

		void Process(List<RemoteBoosterData> boosters);

		void BoosterActivated(RemoteBoosterData boosterData);

		void BoosterExpired(string uuid);
	}
}
