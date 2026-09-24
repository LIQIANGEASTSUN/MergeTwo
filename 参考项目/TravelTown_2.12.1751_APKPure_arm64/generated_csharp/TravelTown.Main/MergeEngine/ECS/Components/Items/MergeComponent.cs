using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.ECS.Components.Items
{
	public class MergeComponent : ComponentBase<MergeCapability>
	{
		public MergeType MergeType { get; set; }

		public string SpecificMergeItem { get; set; }

		public MergeComponent(MergeCapability capability, Entity entity)
			: base((MergeCapability)default(_00210), (Entity)null)
		{
		}
	}
}
