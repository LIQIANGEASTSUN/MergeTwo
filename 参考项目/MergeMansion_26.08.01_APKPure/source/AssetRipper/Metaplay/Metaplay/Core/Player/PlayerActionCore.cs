using Metaplay.Core.Model;

namespace Metaplay.Core.Player
{
	[MetaSerializable]
	public abstract class PlayerActionCore<TModel> : PlayerActionBase where TModel : IPlayerModelBase
	{
		public PlayerActionCore()
		{
		}

		public override MetaActionResult InvokeExecute(IPlayerModelBase player, bool commit)
		{
			return null;
		}

		public abstract MetaActionResult Execute(TModel player, bool commit);
	}
}
