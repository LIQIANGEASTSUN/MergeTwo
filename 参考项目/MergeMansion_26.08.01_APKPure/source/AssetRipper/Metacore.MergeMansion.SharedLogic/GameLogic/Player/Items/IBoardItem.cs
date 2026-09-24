using GameLogic.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	[MetaDeserializationConvertFromConcreteDerivedType(typeof(MergeItem))]
	public interface IBoardItem
	{
		int ItemId { get; }

		string GetItemType(IMergeMansionGameConfig config);
	}
}
