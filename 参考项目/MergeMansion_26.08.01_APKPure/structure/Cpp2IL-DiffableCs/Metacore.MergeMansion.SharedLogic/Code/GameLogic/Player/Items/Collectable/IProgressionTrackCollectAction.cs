namespace Code.GameLogic.Player.Items.Collectable;

public interface IProgressionTrackCollectAction : IProgressCollectAction, ICollectAction
{

	public ProgressionTrackId TrackId
	{
		 get { } //Length: 0
	}

	public ProgressionTrackId get_TrackId() { }

}

