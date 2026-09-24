namespace MergeEngine.ECS.Components.Items
{
	public class KillComponent : ComponentBase
	{
		public string Source { get; set; }

		public KillComponent(Entity entity)
			: base(null)
		{
		}
	}
}
