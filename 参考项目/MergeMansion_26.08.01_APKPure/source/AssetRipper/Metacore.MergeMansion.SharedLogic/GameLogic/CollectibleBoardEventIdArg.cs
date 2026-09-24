using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic
{
	[MetaSerializableDerived(4)]
	public class CollectibleBoardEventIdArg : SerializableArg<CollectibleBoardEventId>
	{
		public CollectibleBoardEventIdArg()
		{
		}

		public CollectibleBoardEventIdArg(CollectibleBoardEventId value)
		{
		}
	}
}
