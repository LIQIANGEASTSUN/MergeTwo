using System.Collections.Generic;
using Game.Cloud.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Config
{
	[MetaSerializableDerived(3)]
	public class MergeChainDef : ConfigDefinition<MergeChainId, IMergeChainDefinition>
	{
		public MergeChainDef()
		{
		}

		public MergeChainDef(MergeChainId key)
		{
		}

		public MergeChainDef(string key)
		{
		}

		public override IMergeChainDefinition GetDef(IMergeMansionGameConfig config)
		{
			return null;
		}

		public static MergeChainDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<MergeChainDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
