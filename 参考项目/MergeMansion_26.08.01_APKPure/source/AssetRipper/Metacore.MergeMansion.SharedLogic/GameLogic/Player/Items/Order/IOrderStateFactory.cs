using GameLogic.Random;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializable]
	public interface IOrderStateFactory
	{
		IOrderState Create(IGenerationContext context);
	}
}
