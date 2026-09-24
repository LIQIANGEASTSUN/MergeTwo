using Framework.Core.Services.Backend.Signal;

namespace Merger.Game.Command
{
	public class UpdateBoardResourcesStateOnConfigUpdatedCommand : UpdateBoardResourcesStateCommandBase<FetchBackendUpdatesSignal>
	{
		public override void Execute(FetchBackendUpdatesSignal signal)
		{
		}
	}
}
