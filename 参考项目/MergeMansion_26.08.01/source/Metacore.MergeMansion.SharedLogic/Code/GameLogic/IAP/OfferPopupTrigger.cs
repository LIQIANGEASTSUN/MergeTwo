using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Offers;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.IAP
{
	[MetaSerializable]
	public class OfferPopupTrigger : IGameConfigData<OfferPopupTriggerId>, IGameConfigData, IHasGameConfigKey<OfferPopupTriggerId>, IValidatable
	{
		public static string ShowMethodBadgeClicked => null;

		public static string ShowMethodManualActivation => null;

		public static string ShowMethodShopPopup => null;

		public static string ShowMethodAppLoading => null;

		public static string ShowMethodLobbyReturn => null;

		public static string ShowMethodWebShop => null;

		public static string ShowMethodMergeBoardEnter => null;

		public static string ShowMethodPopupOpen => null;

		public static string ShowMethodPopupClose => null;

		public static string ShowMethodPendingTimeExtensionOffer => null;

		public static string ShowMethodExtendGameEvent => null;

		public static string ShowMethodPromptOpenShopNotYetOpened => null;

		public static string ShowMethodShopHasARefreshedSection => null;

		public static string ShowMethodPromptForFreeOffer => null;

		public static string ShowMethodEventPassPurchaseClicked => null;

		public static string ShowMethodMysteryMachineOutOfCurrencyConfirmation => null;

		public static string ShowMethodProgressionPackLastChance => null;

		public static string ShowMethodEventLastChance => null;

		public static string ShowMethodEventBackToBack => null;

		public static string ShowMethodEventLevelReached => null;

		public static string ShowMethodEventRewardRequiresPurchase => null;

		public static string ShowMethodBuyMoreEnergy => null;

		public static string ShowMethodInventory => null;

		public static string ShowMethodGenericAutomatic => null;

		[MetaMember(1, MetaMemberFlags.None)]
		public OfferPopupTriggerId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int MaxTriggersPerSession { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int MaxTriggersTotal { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> TriggerRequirements { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaDictionary<OfferPopupTriggerPlacementType, List<string>> TriggerPlacements { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public bool ActivatesOfferGroup { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public MetaDuration? MaxWaitTimerToPrompt { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public OfferPopupTrigger()
		{
		}

		public OfferPopupTrigger(OfferPopupTriggerId configKey, int maxTriggersPerSession, int maxTriggersTotal, List<PlayerRequirement> triggerRequirements, bool activatesOfferGroup, MetaDictionary<OfferPopupTriggerPlacementType, List<string>> triggerPlacements, MetaDuration? maxWaitTimerToPrompt, int experimentPriority)
		{
		}

		public bool MatchesTriggerPlacement(OfferPopupTriggerPlacement offerPopupTriggerPlacement)
		{
			return false;
		}

		public bool CanTrigger(PlayerModel player, IActiveOfferGroup offerGroup, OfferPopupTriggerPlacement offerPopupTriggerPlacement)
		{
			return false;
		}

		public bool CanActivate(PlayerModel player, MergeMansionOfferGroupInfo offerGroup, OfferPopupTriggerPlacement offerPopupTriggerPlacement)
		{
			return false;
		}

		public bool FulfillsSharedRequirements(IPlayer player, MergeMansionOfferGroupInfo offerGroupInfo, OfferPopupTriggerPlacement offerPopupTriggerPlacement)
		{
			return false;
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
