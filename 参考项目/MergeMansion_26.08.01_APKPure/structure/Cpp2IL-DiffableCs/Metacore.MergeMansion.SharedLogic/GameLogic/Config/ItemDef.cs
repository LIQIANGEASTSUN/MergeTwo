namespace GameLogic.Config;

[MetaSerializableDerived(2)]
public class ItemDef : ConfigDefinition<Int32, IItemDefinition>
{

	private ItemDef() { }

	public ItemDef(int key) { }

	public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams) { }

	public static MetaDictionary<Int32, ItemDef> FixRefMetaDict(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual IItemDefinition GetDef(IMergeMansionGameConfig config) { }

}

