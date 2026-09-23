using MergeEngine.ECS;
using Merger.Game.Views.BoardItem.ViewBehaviourAttachers;
using Merger.ProducerExcitement.Compatibility;

namespace Merger.ProducerExcitement.BoardBehaviours
{
	public class ProducerExcitementBehaviourAttacher : BehaviourAttacherBase<IProducerExcitementViewBehaviour>
	{
		public override bool CanAttachBehaviour(Entity entity)
		{
			return false;
		}
	}
}
