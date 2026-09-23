using Code.GameLogic.GameEvents;
using Metacore.MergeMansion;
using Metacore.MergeMansion.Common.Options.Unity;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UI
{
	[CreateAssetMenu(fileName = "MysteryMachineEventPrefabs", menuName = "ScriptableObjects/EventPrefabs/MysteryMachineEventPrefabs", order = 9)]
	public class MysteryMachineEventPrefabs : ScriptableObject, IMergeBoardEventPrefabs, IBoardEventCardProvider<MysteryMachineEventModel>
	{
		public MysteryMachineEventStartPopup StartPopup;

		public MysteryMachineEventInfoPopup InfoPopup;

		public MysteryMachineEventTaskProgressionPopup TaskProgressionPopup;

		public MysteryMachineEventEndPopup EndPopup;

		public MysteryMachineEventNoLeaderboardEndPopup NoLeaderboardEndPopup;

		public MysteryMachineEventEndOfRunPopup EndOfRunPopup;

		public MysteryMachineLevelInfoPopup MachineLevelInfoPopup;

		public MysteryMachineHudButton MainHubBadge;

		public ToDoProgressMysteryMachineEventItem TodoProgressItem;

		public MysteryMachineItemOddsPopup ItemOddsPopup;

		[SerializeField]
		public SerializableUnityOption<BoardEventCard<MysteryMachineEventModel>> _boardEventCardOption;

		[SerializeField]
		public AssetReferenceT<Sprite> _boardEventCardThumbnail;

		[SerializeField]
		public AssetReferenceT<GameObject> mergeBoardBackground;

		public AssetReferenceT<GameObject> MergeBoardBackground => null;

		public SerializableUnityOption<BoardEventCard<MysteryMachineEventModel>> BoardEventCardOption => null;

		public AssetReferenceT<Sprite> BoardEventCardThumbnail => null;
	}
}
