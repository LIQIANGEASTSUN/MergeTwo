using MergeEngine.Configuration;
using Merger.Boosters.Declarations.Definitions.Interfaces;

namespace MergeEngine.ECS
{
	public interface IEntityFactory
	{
		Entity CreateBoardItemEntity(IMergeItem itemConfiguration, MergeItemInstanceConfiguration instanceConfiguration);

		Entity CreateBoardEntity();

		Entity CreateInventoryEntity();

		Entity CreateOrdersEntity();

		Entity CreatePlayerEntity();

		Entity CreateCollectionBookEntity();

		Entity CreateNarrativeEntity();

		Entity CreateBoosterItemEntity(IBoosterItem booster, string uuId);
	}
}
