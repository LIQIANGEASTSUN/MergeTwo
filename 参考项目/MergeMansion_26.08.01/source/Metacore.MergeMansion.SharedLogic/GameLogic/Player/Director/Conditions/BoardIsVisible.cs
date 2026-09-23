using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Director.Conditions
{
	[MetaSerializableDerived(1)]
	public class BoardIsVisible : IScriptedEventCondition
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		public BoardIsVisible()
		{
		}

		public BoardIsVisible(MergeBoardId boardId)
		{
		}

		public bool Matches(IScriptedEventContext context)
		{
			return false;
		}
	}
}
