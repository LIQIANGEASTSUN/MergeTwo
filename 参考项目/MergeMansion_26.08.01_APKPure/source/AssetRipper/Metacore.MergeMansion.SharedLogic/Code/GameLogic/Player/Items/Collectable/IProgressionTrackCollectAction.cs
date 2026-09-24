using Code.GameLogic.ProgressionTracks;
using GameLogic.Player.Items.Collectable;

namespace Code.GameLogic.Player.Items.Collectable
{
	public interface IProgressionTrackCollectAction : IProgressCollectAction, ICollectAction
	{
		ProgressionTrackId TrackId { get; }
	}
}
