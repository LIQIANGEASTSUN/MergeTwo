using System.Runtime.Serialization;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Director.Config
{
	[MetaSerializableDerived(3)]
	public class DelayFinalizationToBoard : IDirectorAction
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[IgnoreDataMember]
		public bool IsVisualAction => false;

		public DelayFinalizationToBoard()
		{
		}

		public DelayFinalizationToBoard(MergeBoardId boardId)
		{
		}

		public void Run(IPlayer playerModel, IDirectorActionContext actionContext)
		{
		}
	}
}
