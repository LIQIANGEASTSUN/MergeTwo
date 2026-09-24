namespace GameLogic.Player.Items;

[MetaDeserializationConvertFromConcreteDerivedType(typeof(MergeItem))]
[MetaSerializable]
public interface IBoardItem
{

	public int ItemId
	{
		 get { } //Length: 0
	}

	public int get_ItemId() { }

	public string GetItemType(IMergeMansionGameConfig config) { }

}

