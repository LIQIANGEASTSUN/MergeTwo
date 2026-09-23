using System;
using Framework.Bootstrap;
using Merger.RemoteSprite.Services;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.RemoteMergeItems.Bootstrap
{
	public class GetItemsPathTooltipOverrideTask : BootstrapTask
	{
		[Inject]
		[NonSerialized]
		public IRemoteMergeItemsService _remoteMergeItemsService;

		public override BootstrapTaskErrorStrategy TaskErrorStrategy => default(BootstrapTaskErrorStrategy);

		public override IPromise Run()
		{
			return null;
		}
	}
}
