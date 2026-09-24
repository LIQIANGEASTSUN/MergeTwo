using Merger.Game.Data;
using strange.extensions.promise.api;

namespace Merger.Services
{
	public interface IBoardConfigService
	{
		BoardConfigResponse BoardConfigResponse { get; }

		int? ImmediateToolsMinLevel { get; }

		int? StackingMinLevel { get; }

		IPromise FetchBoardConfig();
	}
}
