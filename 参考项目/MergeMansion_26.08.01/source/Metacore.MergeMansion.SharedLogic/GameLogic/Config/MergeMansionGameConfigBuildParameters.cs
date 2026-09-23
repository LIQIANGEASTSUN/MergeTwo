using System;
using System.Runtime.Serialization;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializableDerived(1)]
	[MetaBlockedMembers(new int[] { 3, 4, 5, 6, 100 })]
	public class MergeMansionGameConfigBuildParameters : GameConfigBuildParameters
	{
		public override bool IsIncremental => false;

		[MetaMember(1, MetaMemberFlags.None)]
		[MetaFormNotEditable]
		[Obsolete]
		public string LegacySpreadSheetTitle { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaFormNotEditable]
		[Obsolete]
		public string LegacySpreadSheetUrl { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public bool SetAsActive { get; set; }

		[IgnoreDataMember]
		public BuildOptimizationParameters OptimizationParameters { get; set; }
	}
}
