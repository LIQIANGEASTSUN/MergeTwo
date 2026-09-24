using Metaplay.Core.Model;

namespace Metaplay.Core.Player
{
	public abstract class PlayerSynchronizedServerActionCore<TModel> : PlayerSynchronizedServerActionBase where TModel : IPlayerModelBase
	{
		public override MetaActionResult InvokeExecute(IPlayerModelBase player, bool commit)
		{
			return null;
		}

		public abstract MetaActionResult Execute(TModel player, bool commit);

		public PlayerSynchronizedServerActionCore()
		{
		}
	}
}
