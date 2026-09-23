using GameLogic.Player.Items;

namespace Code.Bot.Model
{
	public class RequiredItemInfo
	{
		public IItemDefinition itemDef;

		public int target;

		public int have;

		public RequiredItemInfo(IItemDefinition itemDef, int target, int have)
		{
		}

		public bool NeedMore()
		{
			return false;
		}
	}
}
