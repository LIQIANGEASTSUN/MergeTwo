using System.Collections.Generic;
using System.Collections.ObjectModel;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems;
using MergeEngine.ECS.Systems.Items;

namespace MergeEngine.ECS.Components
{
	public class KillSystem : BaseItemSystem<KillComponent>
	{
		public override SystemPriorities Priority => default(SystemPriorities);

		public override IEnumerable<KillComponent> OnWillProcessComponents(ReadOnlyCollection<KillComponent> components)
		{
			return null;
		}

		public override void ProcessComponent(KillComponent component)
		{
		}

		public void ForceKill()
		{
		}
	}
}
