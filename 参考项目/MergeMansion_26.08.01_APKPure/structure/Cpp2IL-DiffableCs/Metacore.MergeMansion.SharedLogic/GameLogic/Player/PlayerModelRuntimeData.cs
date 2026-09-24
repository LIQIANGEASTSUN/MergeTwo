namespace GameLogic.Player;

public sealed class PlayerModelRuntimeData : PlayerModelRuntimeDataBase<PlayerModel>
{
	private readonly IPlayerModelServerListener serverListener; //Field offset: 0x48
	private readonly IPlayerModelClientListener clientListener; //Field offset: 0x50
	private readonly PocketChangedEvent walletPocketContentChanged; //Field offset: 0x58
	private readonly PocketChangedEvent walletEventPocketContentChanged; //Field offset: 0x60
	private readonly CurrencyAddedEvent walletCurrencyAdded; //Field offset: 0x68
	private readonly CurrencyRemovedEvent walletCurrencyRemoved; //Field offset: 0x70

	public PlayerModelRuntimeData(PlayerModel instance) { }

	public virtual void CopySideEffectListenersTo(PlayerModel instance) { }

}

