using Code.GameLogic.GameEvents;
using Metaplay.Core;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace Merge
{
	[MetaSerializable]
	[MetaFormConfigLibraryItemReference(typeof(BoardInfo))]
	public class MergeBoardId : StringId<MergeBoardId>
	{
		public static readonly MergeBoardId Garage;

		public static readonly MergeBoardId None;

		public static readonly MergeBoardId LegacyEventLindsay;

		public static readonly MergeBoardId LegacyEventCaseySkatie;

		public static readonly MergeBoardId LegacyEventIgnatious;

		public static readonly MergeBoardId Test;

		public static readonly MergeBoardId[] LegacyStoryEvents;

		public static readonly MergeBoardId MADDIE_MEETS_MANSION_3;

		public bool IsLegacyEvent()
		{
			return false;
		}

		public bool SupportsInventories()
		{
			return false;
		}
	}
}
