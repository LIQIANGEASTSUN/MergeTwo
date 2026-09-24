namespace Metaplay.Core.Player;

[MetaSerializable]
public abstract class PlayerActionCore : PlayerActionBase
{

	public PlayerActionCore`1() { }

	public abstract MetaActionResult Execute(TModel player, bool commit) { }

	public virtual MetaActionResult InvokeExecute(IPlayerModelBase player, bool commit) { }

}

