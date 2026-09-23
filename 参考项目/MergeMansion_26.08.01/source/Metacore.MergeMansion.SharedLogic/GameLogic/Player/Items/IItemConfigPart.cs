using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items
{
	public interface IItemConfigPart : IHasGameConfigKey<string>
	{
	}
	public interface IItemConfigPart<out TOutput> : IItemConfigPart, IHasGameConfigKey<string>
	{
		TOutput ToConfigData(IProducerFactory producerFactory);
	}
}
