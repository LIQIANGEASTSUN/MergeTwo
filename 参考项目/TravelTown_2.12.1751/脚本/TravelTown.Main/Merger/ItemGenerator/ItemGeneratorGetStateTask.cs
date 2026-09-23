using System;
using Framework.Bootstrap;
using Zenject;
using strange.extensions.promise.api;

namespace Merger.ItemGenerator
{
	public class ItemGeneratorGetStateTask : BootstrapTask
	{
		[Inject]
		[NonSerialized]
		public ItemGeneratorService _itemGeneratorService;

		public override BootstrapTaskErrorStrategy TaskErrorStrategy => default(BootstrapTaskErrorStrategy);

		public override IPromise Run()
		{
			return null;
		}
	}
}
