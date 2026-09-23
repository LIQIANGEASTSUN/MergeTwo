using System;
using Framework.Core.Command;
using Framework.Core.Services.Backend.Signal;
using Zenject;

namespace Merger.ItemGenerator.Commands
{
	public class ItemGeneratorRefreshStatesCommand : CommandBase<FetchBackendUpdatesSignal>
	{
		[Inject]
		[NonSerialized]
		public ItemGeneratorService _itemGeneratorService;

		public override void Execute(FetchBackendUpdatesSignal signal)
		{
		}
	}
}
