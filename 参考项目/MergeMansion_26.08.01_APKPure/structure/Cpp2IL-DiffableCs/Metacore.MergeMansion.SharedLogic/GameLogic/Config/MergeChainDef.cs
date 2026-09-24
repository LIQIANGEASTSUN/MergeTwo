namespace GameLogic.Config;

[MetaSerializableDerived(3)]
public class MergeChainDef : ConfigDefinition<MergeChainId, IMergeChainDefinition>
{

	public MergeChainDef() { }

	public MergeChainDef(MergeChainId key) { }

	public MergeChainDef(string key) { }

	public static MergeChainDef FixRef(MetaMemberDeserializationFailureParams failureParams) { }

	public static List<MergeChainDef> FixRefList(MetaMemberDeserializationFailureParams failureParams) { }

	public virtual IMergeChainDefinition GetDef(IMergeMansionGameConfig config) { }

}

