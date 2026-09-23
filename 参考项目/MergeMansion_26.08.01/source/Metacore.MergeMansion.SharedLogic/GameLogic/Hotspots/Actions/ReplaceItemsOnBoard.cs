using System.Runtime.Serialization;
using GameLogic.Config;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Hotspots.Actions
{
	[MetaSerializableDerived(2)]
	public class ReplaceItemsOnBoard : IDirectorAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId MergeBoardId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixItemRef")]
		public ItemDef ReplacementItem { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Tag { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDuration ReplaceDuration { get; set; }

		[IgnoreDataMember]
		public bool IsVisualAction => false;

		public ReplaceItemsOnBoard()
		{
		}

		public ReplaceItemsOnBoard(MergeBoardId mergeBoardId, int replacementItem, string tag, MetaDuration replaceDuration)
		{
		}

		public void Run(IPlayer player, IDirectorActionContext directorContext)
		{
		}

		public bool Matches(IMergeItem item, IPlayer player)
		{
			return false;
		}

		public bool Matches(IItemDefinition itemDefinition)
		{
			return false;
		}

		public void ReplaceItemsInMail(IPlayer player, IItemDefinition replacement)
		{
		}

		public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
