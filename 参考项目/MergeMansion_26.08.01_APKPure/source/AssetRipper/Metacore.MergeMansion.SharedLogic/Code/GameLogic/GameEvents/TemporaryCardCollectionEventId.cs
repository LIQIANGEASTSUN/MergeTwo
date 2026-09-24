using Metaplay.Core;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class TemporaryCardCollectionEventId : StringId<TemporaryCardCollectionEventId>
	{
		public static readonly TemporaryCardCollectionEventId None;
	}
}
