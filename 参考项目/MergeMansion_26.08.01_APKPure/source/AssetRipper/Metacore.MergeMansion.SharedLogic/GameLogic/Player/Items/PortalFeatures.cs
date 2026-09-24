using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items
{
	[MetaSerializable]
	public class PortalFeatures : IPortalFeatures
	{
		public static readonly PortalFeatures NoPortal;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsPortal { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId TargetBoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public PortalType Type { get; set; }

		public Option<MergeBoardId> TargetBoardIdOption => default(Option<MergeBoardId>);

		public PortalFeatures(PortalType type, MergeBoardId targetBoardId)
		{
		}

		public PortalFeatures()
		{
		}

		public bool Equals(PortalFeatures other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
