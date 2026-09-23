using GameLogic.Player.Items;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11203)]
	public class WildItemConsumeAction : PlayerAction
	{
		public IItemDefinition ItemDefinitionItemId { get; set; }

		public string TaskId { get; set; }

		public WildItemConsumeAction()
		{
		}

		public WildItemConsumeAction(IItemDefinition itemDefinitionItemId, string taskId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
