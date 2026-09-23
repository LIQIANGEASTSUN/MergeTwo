using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Systems.State;

namespace MergeEngine.ECS.Systems.Items
{
	public class MergeItemBoosterComponent : ComponentBase, IRemoteLoadedComponent<SerializedMergeItemBoosterComponent>
	{
		public string BoosterItemUUId;

		public string BoosterConfigurationId;

		public bool ShouldSkipDestroy { get; set; }

		public MergeItemBoosterComponent(Entity entity)
			: base(null)
		{
		}

		public void LoadComponent(SerializedMergeItemBoosterComponent componentData)
		{
		}
	}
}
