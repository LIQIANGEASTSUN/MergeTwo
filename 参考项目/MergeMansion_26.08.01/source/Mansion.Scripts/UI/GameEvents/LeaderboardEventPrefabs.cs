using Code.GameLogic.GameEvents;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Options.Unity;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI.GameEvents
{
	[CreateAssetMenu(fileName = "LeaderboardEventPrefabs", menuName = "ScriptableObjects/EventPrefabs/LeaderboardEventPrefabs", order = 4)]
	public class LeaderboardEventPrefabs : ScriptableObject, IEventPrefabs, IEventInfoPanelPrefabs, IMergeBoardEventPrefabs, IBoardEventCardProvider<LeaderboardEventModel>
	{
		[SerializeField]
		public SerializableUnityOption<Sprite> eventIcon;

		[SerializeField]
		public AssetReferenceT<GameObject> mainHubBadge;

		[SerializeField]
		public AssetReferenceT<GameObject> startPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> infoPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> rankingPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> endPopup;

		[SerializeField]
		public LeaderboardEventInfoPanel leaderboardEventInfoPanel;

		[SerializeField]
		public EventInfoPanelBehaviour tasksOnBoardInfoPanel;

		[SerializeField]
		public AssetReferenceT<GameObject> todoProgressItem;

		[SerializeField]
		public AssetReferenceT<GameObject> mergeBoardBackground;

		[SerializeField]
		public SerializableUnityOption<BoardEventCard<LeaderboardEventModel>> _boardEventCardOption;

		[SerializeField]
		public AssetReferenceT<Sprite> _boardEventCardThumbnail;

		public SerializableUnityOption<BoardEventCard<LeaderboardEventModel>> BoardEventCardOption => null;

		public AssetReferenceT<Sprite> BoardEventCardThumbnail => null;

		public SerializableUnityOption<Sprite> EventIcon => null;

		public AssetReferenceT<GameObject> MainHubBadge => null;

		public AssetReferenceT<GameObject> StartPopup => null;

		public AssetReferenceT<GameObject> EndPopup => null;

		public AssetReferenceT<GameObject> TeasePopup { get; }

		public AssetReferenceT<GameObject> IntroPopup { get; }

		public AssetReferenceT<GameObject> InfoPopup => null;

		public AssetReferenceT<GameObject> TodoProgressItem => null;

		public EventInfoPanelBehaviour InfoPanel => null;

		public AssetReferenceT<GameObject> RankingPopup => null;

		public EventInfoPanelBehaviour TasksOnBoardInfoPanel => null;

		public AssetReferenceT<GameObject> MergeBoardBackground => null;

		public string StartPopupHeaderTextLocId { get; }

		public string StartPopupDescriptionTextLocId { get; }

		public string EndPopupHeaderTextLocId { get; }

		public string EndPopupDescriptionTextLocId { get; }

		public string EndPopupNoRewardsTextLocId { get; }

		public string IntroPopupHeaderTextLocId { get; }

		public string IntroPopupDescriptionTextLocId { get; }
	}
}
