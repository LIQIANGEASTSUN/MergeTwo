using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public interface IVisibilityStrategy<TId, TInfo, TModel> where TInfo : class, IMetaActivableInfo<TId>, IGameConfigData<TId> where TModel : MetaActivableState<TId, TInfo>
	{
		bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<TModel> eventModelOption);
	}
}
