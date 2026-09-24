namespace Metaplay.Core.Player;

public abstract class PlayerSynchronizedServerActionCore : PlayerSynchronizedServerActionBase
{

	protected PlayerSynchronizedServerActionCore`1() { }

	public abstract MetaActionResult Execute(TModel player, bool commit) { }

	public virtual MetaActionResult InvokeExecute(IPlayerModelBase player, bool commit) { }

}

