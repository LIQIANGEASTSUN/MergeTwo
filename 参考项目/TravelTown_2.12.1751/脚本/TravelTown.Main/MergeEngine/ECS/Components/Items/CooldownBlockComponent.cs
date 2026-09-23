namespace MergeEngine.ECS.Components.Items
{
	public class CooldownBlockComponent : ComponentBase
	{
		public bool BlockUnlockTime;

		public CooldownBlockComponent(Entity entity)
			: base(null)
		{
		}
	}
}
