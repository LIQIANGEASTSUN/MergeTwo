using System;
using Framework.Core.DataBinding;
using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components
{
	[CacheAs(new Type[] { typeof(IWipeableComponent) })]
	public class UndoComponent : ComponentBase, IWipeableComponent, IComponentBase
	{
		public Entity SoldItem;

		public MutableBindableProperty<IMergeItem> SoldMergeItem { get; }

		public UndoComponent(Entity entity)
			: base(null)
		{
		}

		void IWipeableComponent.Wipe()
		{
		}
	}
}
