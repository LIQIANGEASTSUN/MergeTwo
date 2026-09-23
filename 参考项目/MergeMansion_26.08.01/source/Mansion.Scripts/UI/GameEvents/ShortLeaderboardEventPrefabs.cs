using Code.GameLogic.GameEvents;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Options.Unity;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI.GameEvents
{
	[CreateAssetMenu(fileName = "ShortLeaderboardEventPrefabs", menuName = "ScriptableObjects/EventPrefabs/ShortLeaderboardEventPrefabs", order = 13)]
	public class ShortLeaderboardEventPrefabs : ScriptableObject, IMergeBoardEventPrefabs, IBoardEventCardProvider<ShortLeaderboardEventModel>
	{
		public ShortLeaderboardEventHudButton MainHubBadge;

		public ShortLeaderboardEventStartPopup StartPopup;

		public ShortLeaderboardEventEndPopup EndPopup;

		public ShortLeaderboardEventInfoPopup InfoPopup;

		public ShortLeaderboardEventProgressionPopup ProgressionPopup;

		public ToDoProgressShortLeaderboardEventItem TodoProgressItem;

		public ShortLeaderboardEventInfoPanel InfoPanel;

		public EventInfoPanelBehaviour TasksOnBoardInfoPanel;

		public ShortLeaderboardEventTeasePopup TeasePopup;

		[SerializeField]
		public SerializableUnityOption<BoardEventCard<ShortLeaderboardEventModel>> _boardEventCardOption;

		[Header("Addressable references")]
		public AssetReferenceT<Sprite> MainHubBadgeSprite;

		public AssetReferenceT<Sprite> StartPopupIllustrationSprite;

		public AssetReferenceT<Sprite> EndPopupIllustrationSprite;

		public AssetReferenceT<Sprite> TodoProgressItemIllustrationSprite;

		public AssetReferenceT<Sprite> TeasePopupIllustrationSprite;

		[SerializeField]
		public AssetReferenceT<Sprite> _boardEventCardThumbnail;

		[SerializeField]
		public AssetReferenceT<GameObject> mergeBoardBackground;

		public AssetReferenceT<GameObject> MergeBoardBackground => null;

		public SerializableUnityOption<BoardEventCard<ShortLeaderboardEventModel>> BoardEventCardOption => null;

		public AssetReferenceT<Sprite> BoardEventCardThumbnail => null;
	}
}
