using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Story;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Offers;
using Metaplay.Core.Player;

namespace Code.GameLogic.GameEvents
{
	public interface IBoardEventModel
	{
		IBoardEventInfo BoardEventInfo { get; }

		List<IBoardItem> PocketItems { get; }

		MergeBoard MergeBoard { get; }

		int EnterMergeBoardCount { get; set; }

		bool EnterBoardDialogueTriggered { get; set; }

		MetaActivableState.Activation? LatestActivation { get; }

		bool RequestExtension { get; set; }

		OfferPlacementId BoardShopPlacementId { get; }

		OfferPlacementId BoardShopFlashPlacementId { get; }

		MergeBoardId GetBoardIdentifier();

		void CheckCanBeResolved(PlayerModel player);

		MetaTime? GetActivationVisibilityEndsAtTime(IPlayerModelBase player);

		bool IsActive(IPlayerModelBase playerModel);

		bool CanExtend(IPlayerModelBase playerModel);

		StoryDefinitionId GetEnterBoardDialogue(IPlayer player);

		int GetAuxEnergyAttachmentChance(IPlayer player);
	}
}
