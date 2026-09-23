using Code.GameLogic.GameEvents;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Options.Unity;
using UI.GameEvents;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI
{
	[CreateAssetMenu(fileName = "CollectibleBoardEventPrefabs", menuName = "ScriptableObjects/EventPrefabs/CollectibleBoardEventPrefabs", order = 3)]
	public class CollectibleBoardEventPrefabs : ScriptableObject, IEventPrefabs, IEventInfoPanelPrefabs, IMergeBoardEventPrefabs, IBoardEventCardProvider<CollectibleBoardEventModel>
	{
		[SerializeField]
		public SerializableUnityOption<Sprite> eventIcon;

		[SerializeField]
		public AssetReferenceT<GameObject> mainHubBadge;

		[SerializeField]
		public AssetReferenceT<GameObject> startPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> endPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> teasePopup;

		[SerializeField]
		public AssetReferenceT<GameObject> introPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> infoPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> todoProgressItem;

		[SerializeField]
		public AssetReferenceT<GameObject> mergeBoardBackground;

		[SerializeField]
		public AssetReferenceT<GameObject> progressionPopup;

		[SerializeField]
		public AssetReferenceT<GameObject> extendPopup;

		[SerializeField]
		public SerializableUnityOption<BoardEventCard<CollectibleBoardEventModel>> _boardEventCardOption;

		[SerializeField]
		public AssetReferenceT<Sprite> _boardEventCardThumbnail;

		[Header("Info panel")]
		[SerializeField]
		public CollectibleBoardEventInfoPanel infoPanel;

		[SerializeField]
		public EventInfoPanelBehaviour tasksOnBoardInfoPanel;

		[Header("Localization IDs")]
		[SerializeField]
		public string startPopupDescriptionTextLocId;

		[SerializeField]
		public string introPopupHeaderTextLocId;

		[SerializeField]
		public string introPopupDescriptionTextLocId;

		[SerializeField]
		public string endPopupNoRewardsTextLocId;

		public SerializableUnityOption<Sprite> EventIcon => null;

		public AssetReferenceT<GameObject> MainHubBadge => null;

		public AssetReferenceT<GameObject> StartPopup => null;

		public AssetReferenceT<GameObject> EndPopup => null;

		public AssetReferenceT<GameObject> TeasePopup => null;

		public AssetReferenceT<GameObject> IntroPopup => null;

		public AssetReferenceT<GameObject> InfoPopup => null;

		public AssetReferenceT<GameObject> TodoProgressItem => null;

		public EventInfoPanelBehaviour InfoPanel => null;

		public EventInfoPanelBehaviour TasksOnBoardInfoPanel => null;

		public AssetReferenceT<GameObject> MergeBoardBackground => null;

		public AssetReferenceT<GameObject> ProgressionTrackPopup => null;

		public AssetReferenceT<GameObject> ExtendPopup => null;

		public SerializableUnityOption<BoardEventCard<CollectibleBoardEventModel>> BoardEventCardOption => null;

		public AssetReferenceT<Sprite> BoardEventCardThumbnail => null;

		public string StartPopupHeaderTextLocId => null;

		public string StartPopupDescriptionTextLocId => null;

		public string EndPopupHeaderTextLocId => null;

		public string EndPopupDescriptionTextLocId => null;

		public string EndPopupNoRewardsTextLocId => null;

		public string IntroPopupHeaderTextLocId => null;

		public string IntroPopupDescriptionTextLocId => null;
	}
}
