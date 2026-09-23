using System.Collections.Generic;
using GameLogic.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializable]
	public interface ISinkStateFactory
	{
		IEnumerable<(IItemDefinition, int)> GetSinkProducts(IMergeMansionGameConfig config);

		ISinkState Create();

		IEnumerable<int> GetAcceptedItems(IMergeMansionGameConfig config);
	}
}
