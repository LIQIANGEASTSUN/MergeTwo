using Framework.Core.DataBinding;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.ECS.Components.Player
{
	public class PlayerProgressionComponent : ComponentBase
	{
		public const string Key = "playerProgression";

		public MutableBindableProperty<float> LevelProgress;

		public MutableBindableProperty<int> Level;

		public MutableBindableProperty<int> LastOpenSection;

		public MutableBindableProperty<float> EventLevelProgress;

		public MutableBindableProperty<int> EventLevel;

		public PlayerProgressionComponent(Entity entity)
			: base(null)
		{
		}
	}
}
