using System.Collections.Generic;
using MergeEngine.Data;
using MergeEngine.ECS;
using MergeEngine.ECS.Components.Board;
using MergeEngine.ECS.Components.Items;
using MergeEngine.ECS.Components.Items.Producers;
using MergeEngine.ECS.Systems;

namespace MergeEngine.Util
{
	public static class BoardUtil
	{
		public static bool AnyItemsCanBeProduced(IEntityManager entityManager)
		{
			return false;
		}

		public static ITimeCycleComponent GetProducerThatCanProduce(IEntityManager entityManager)
		{
			return null;
		}

		public static bool HasUnmergedProducersOnBoard(IEntityManager entityManager)
		{
			return false;
		}

		public static bool HasToolsOnBoard(IEntityManager entityManager)
		{
			return false;
		}

		public static CollectableComponent GetFirstToolOnBoard(IEntityManager entityManager)
		{
			return null;
		}

		public static IEnumerable<ITimeCycleComponent> GetTimeCycleComponents(IEntityManager entityManager)
		{
			return null;
		}

		public static IEnumerable<PositionComponent> GetUnlockedComponents(IEntityManager entityManager)
		{
			return null;
		}

		public static bool AnyItemsCanBeMerged(ISystemManager systemManager)
		{
			return false;
		}

		public static bool IsInBounds(BoardItemPosition pos, BoardComponent board)
		{
			return false;
		}
	}
}
