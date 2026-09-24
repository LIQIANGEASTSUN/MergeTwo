namespace Code.GameLogic.GameEvents;

public interface IVisibilityStrategy
{

	public bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<TModel> eventModelOption) { }

}

