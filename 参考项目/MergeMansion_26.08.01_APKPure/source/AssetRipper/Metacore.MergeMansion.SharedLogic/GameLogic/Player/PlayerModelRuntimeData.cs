using System;
using Metaplay.Core.Player;

namespace GameLogic.Player
{
	public sealed class PlayerModelRuntimeData : PlayerModelRuntimeDataBase<PlayerModel>
	{
		[NonSerialized]
		public readonly IPlayerModelServerListener serverListener;

		[NonSerialized]
		public readonly IPlayerModelClientListener clientListener;

		[NonSerialized]
		public readonly PocketChangedEvent walletPocketContentChanged;

		[NonSerialized]
		public readonly PocketChangedEvent walletEventPocketContentChanged;

		[NonSerialized]
		public readonly CurrencyAddedEvent walletCurrencyAdded;

		[NonSerialized]
		public readonly CurrencyRemovedEvent walletCurrencyRemoved;

		public PlayerModelRuntimeData(PlayerModel instance)
			: base((PlayerModel)default(_00210))
		{
		}

		public override void CopySideEffectListenersTo(PlayerModel instance)
		{
		}
	}
}
