using System;
using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class DirectorGroupId : StringId<DirectorGroupId>
	{
		public static readonly DirectorGroupId None;

		public static readonly DirectorGroupId GrannysHouse;

		public static readonly DirectorGroupId GateOpen;

		public static readonly DirectorGroupId MansionShowAndMoveToGarage;

		public static readonly DirectorGroupId StartGame;

		public static readonly DirectorGroupId TutorialPouch;

		public static readonly DirectorGroupId TutorialPouch2;

		public static readonly DirectorGroupId StartOpeningTheFirstChest;

		public static readonly DirectorGroupId StartOpeningLevelUpChest;

		public static readonly DirectorGroupId ChestSpeedUpGem;

		public static readonly DirectorGroupId PlayerLevelChestInPouch;

		public static readonly DirectorGroupId StartOpeningPlayerLevelChest;

		public static readonly DirectorGroupId UnfoldToDoButton;

		public static readonly DirectorGroupId UnfoldToDoButton_01;

		public static readonly DirectorGroupId UnfoldToDoButton_02;

		public static readonly DirectorGroupId UnfoldToDoButton_03;

		public static readonly DirectorGroupId HighlightCanLevelUp;

		public static readonly DirectorGroupId UnfoldShopButton;

		public static readonly DirectorGroupId UnfoldInventoryButton;

		public static readonly DirectorGroupId PromptToMergeExperienceInsteadOfCollecting1;

		public static readonly DirectorGroupId PromptToMergeExperienceInsteadOfCollecting2;

		public static readonly DirectorGroupId GarageTutorialStep01;

		public static readonly DirectorGroupId GarageTutorialStep02;

		public static readonly DirectorGroupId GarageTutorialStep03;

		public static readonly DirectorGroupId GarageTutorialStep04;

		public static readonly DirectorGroupId GarageTutorialStep05;

		public static readonly DirectorGroupId GarageTutorialStep06;

		public static readonly DirectorGroupId GarageTutorialStep07;

		public static readonly DirectorGroupId GarageTutorialStep08;

		public static readonly DirectorGroupId FirstMergeGoalVisibleInMap;

		public static readonly DirectorGroupId FirstMergeGoalMenuOpen;

		public static readonly DirectorGroupId SecondMergeGoalMenuOpen;

		public static readonly DirectorGroupId ThirdMergeGoalMenuOpen;

		public static readonly DirectorGroupId GetSaw_01;

		public static readonly DirectorGroupId GetSaw_02;

		public static readonly DirectorGroupId GetSaw_03;

		public static readonly DirectorGroupId GetSaw_04;

		public static readonly DirectorGroupId GetSaw_05;

		public static readonly DirectorGroupId GetSaw_06;

		public static readonly DirectorGroupId GetSaw_07;

		public static readonly DirectorGroupId GetRidOfTheLog;

		public static readonly DirectorGroupId AnotherPairOfGlovesNeeded_01;

		public static readonly DirectorGroupId AnotherPairOfGlovesNeeded_02;

		public static readonly DirectorGroupId AnotherPairOfGlovesNeeded_03;

		public static readonly DirectorGroupId AnotherPairOfGlovesNeeded_04;

		public static readonly DirectorGroupId AnotherPairOfGlovesNeeded_05;

		public static readonly DirectorGroupId AnotherPairOfGlovesFound;

		public static readonly DirectorGroupId RoddyAppearsFirstTime;

		public static readonly DirectorGroupId DrivewayGateRemoveLongGrass;

		public static readonly DirectorGroupId DrivewayGateRemoveFallenTree;

		public static readonly DirectorGroupId ChestSpeedUp;

		public static readonly DirectorGroupId CoinMergeable;

		public static readonly DirectorGroupId MaxLevelCoinsCollectible;

		public static readonly DirectorGroupId DrivewayGateRemoveGroundDirt;

		public static readonly DirectorGroupId DrivewayGateClearMansionSign;

		public static readonly DirectorGroupId DrivewayGateClearedMansionSign;

		public static readonly DirectorGroupId DrivewayGateRemoveFallenTreeTimeSkip;

		public static readonly DirectorGroupId DrivewayRemoveLeaves2;

		public static readonly DirectorGroupId DrivewayStatueRemoveWoodClutter;

		public static readonly DirectorGroupId DrivewayStatueRemoveBranches;

		public static readonly DirectorGroupId MansionDrivewayStatueRevealed;

		public static readonly DirectorGroupId MansionDrivewayStatueFinished;

		public static readonly DirectorGroupId RoddyAppearsSecondTime;

		public static readonly DirectorGroupId RoddyAppearsThirdTime;

		public static readonly DirectorGroupId GardenRightFountainRevealed;

		public static readonly DirectorGroupId GardenRightFountainFinished;

		public static readonly DirectorGroupId WaterGardenStatueRevealed;

		public static readonly DirectorGroupId WaterGardenStatueFinished;

		public static readonly DirectorGroupId BeachRightDiscovered;

		public static readonly DirectorGroupId BeachRightWorkshopCleanedUp;

		public static readonly DirectorGroupId BeachRightTotemFinished;

		public static readonly DirectorGroupId GarageCarRevealed;

		public static readonly DirectorGroupId GarageTraderTableRevealed;

		public static readonly DirectorGroupId GarageCarFinished;

		public static readonly DirectorGroupId MansionRightFillerPoolFinished;

		public static readonly DirectorGroupId MansionRightFillerStatueFinished;

		public static readonly DirectorGroupId AntiqueDealerAppeared;

		public static readonly DirectorGroupId AntiqueDealerConversation;

		public static readonly DirectorGroupId AntiqueDealerDriveOff;

		public static readonly DirectorGroupId TinCanSinkTutorial1;

		public static readonly DirectorGroupId CaseyAndSkatieSinkTutorial1;

		public static readonly DirectorGroupId CaseyAndSkatieDustRemoverTutorial;

		public static readonly DirectorGroupId Halloween2021InitialDialog;

		public static readonly DirectorGroupId Halloween2021StairsAppearToBoard;

		public static readonly DirectorGroupId XMas2021StairsAppearToBoard;

		public static readonly DirectorGroupId OldWell_Intro;

		public static readonly DirectorGroupId OldWell_Discovery;

		public static readonly DirectorGroupId OldWell_Rescue;

		public static readonly DirectorGroupId PoolHouseIntro;

		public static readonly DirectorGroupId PoolHouseOutro;

		public static readonly DirectorGroupId Valentine2022StairsAppearToBoard;

		public static readonly DirectorGroupId Valentine2022Decoration01;

		public static readonly DirectorGroupId Valentine2022Decoration02;

		public static readonly DirectorGroupId Valentine2022Decoration04;

		public static readonly DirectorGroupId Valentine2022Decoration05;

		public static readonly DirectorGroupId Valentine2022Decoration06;

		public static readonly DirectorGroupId Valentine2022Decoration07;

		public static readonly DirectorGroupId Valentine2022Decoration08;

		public static readonly DirectorGroupId Valentine2022Decoration09;

		public static readonly DirectorGroupId Valentine2022Decoration10;

		public static readonly DirectorGroupId Valentine2022Decoration12;

		public static readonly DirectorGroupId Valentine2022Decoration13;

		public static readonly DirectorGroupId Valentine2022Decoration14;

		public static readonly DirectorGroupId Valentine2022Decoration15;

		public static readonly DirectorGroupId StPatrick2022StairsTutorial;

		public static readonly DirectorGroupId SpringEventPortalItem;

		public static readonly DirectorGroupId CodexIntro01;

		public static readonly DirectorGroupId Hopeberry2022StairsTutorial;

		public static readonly DirectorGroupId FourthOfJuly2022PortalTutorial;

		public static readonly DirectorGroupId BirthdayGrandmaOpeningTutorial;

		public static readonly DirectorGroupId SpaPetals;

		public static readonly DirectorGroupId HalloweenHay;

		public static readonly DirectorGroupId Halloween2022Decoration01;

		public static readonly DirectorGroupId Halloween2022Decoration02;

		public static readonly DirectorGroupId Halloween2022Decoration03;

		public static readonly DirectorGroupId Halloween2022Decoration04;

		public static readonly DirectorGroupId Halloween2022Decoration05;

		public static readonly DirectorGroupId Halloween2022Decoration06;

		public static readonly DirectorGroupId Halloween2022Decoration07;

		public static readonly DirectorGroupId Halloween2022Decoration08;

		public static readonly DirectorGroupId Halloween2022Decoration09;

		public static readonly DirectorGroupId Halloween2022Decoration10;

		public static readonly DirectorGroupId Halloween2022Decoration11;

		public static readonly DirectorGroupId Halloween2022Decoration12;

		public static readonly DirectorGroupId Halloween2022Decoration13;

		public static readonly DirectorGroupId Halloween2022Decoration15;

		public static readonly DirectorGroupId Halloween2022PortalTutorial;

		public static readonly DirectorGroupId WatchForTwoSpawnFactoryClicks;

		public static readonly DirectorGroupId WatchForFourSpawnFactoryClicks;

		public static readonly DirectorGroupId WatchForSixSpawnFactoryClicks;

		public static readonly DirectorGroupId TOSVersion1;

		public static readonly DirectorGroupId AskForReview1;

		public static readonly DirectorGroupId Questionnaire12Traits1;

		public static readonly DirectorGroupId Questionnaire12ErrorCompensation1;

		public static readonly DirectorGroupId TOSVersion2;

		public static readonly DirectorGroupId RemoteNotifications;

		public static readonly DirectorGroupId FirstBoot;

		public static readonly DirectorGroupId SocialMediaFacebook;

		public static readonly DirectorGroupId SocialMediaInstagram;

		public static readonly DirectorGroupId SocialMediaTiktok;

		public static readonly DirectorGroupId SocialMediaTwitter;

		public static readonly DirectorGroupId SocialMediaYoutube;

		public static readonly DirectorGroupId SocialMediaDiscord;

		public static readonly DirectorGroupId SocialMediaInboxLink;

		public static readonly DirectorGroupId NewYearsLettersEndOfChain;

		public static readonly DirectorGroupId TestingEventGroup05;

		public static readonly DirectorGroupId Christmas2022Decoration25;

		public static readonly DirectorGroupId Christmas2022Decoration29;

		public static readonly DirectorGroupId Christmas2022Decoration26;

		public static readonly DirectorGroupId Christmas2022Decoration27;

		public static readonly DirectorGroupId Christmas2022Decoration28;

		public static readonly DirectorGroupId Valentines2023RosesEndOfChain;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration16;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration17;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration18;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration19;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration20;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration21;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration22;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration23;

		public static readonly DirectorGroupId SE_Valentines2023_Decoration24;

		public static readonly DirectorGroupId SP_Valentines2023_Decoration25;

		public static readonly DirectorGroupId SP_Valentines2023_Decoration26;

		public static readonly DirectorGroupId SP_Valentines2023_Decoration27;

		public static readonly DirectorGroupId SP_Valentines2023_Decoration28;

		public static readonly DirectorGroupId SP_Valentines2023_Decoration29;

		public static readonly DirectorGroupId SE_Valentines2023_MakeUpGift_06;

		public static readonly DirectorGroupId SE_Valentines2023_EnjoySpa_07;

		public static readonly DirectorGroupId SE_Valentines2023_Shoes_07;

		public static readonly DirectorGroupId BlackCard;

		public static readonly DirectorGroupId BlueCard;

		public static readonly DirectorGroupId Scissors;

		public static readonly DirectorGroupId UnlimitedEnergy;

		public static readonly DirectorGroupId CurrencyBank;

		public static readonly DirectorGroupId PlayerNamePopup;

		[Obsolete("SCID Incentivized flow was removed")]
		public static readonly DirectorGroupId SCIDPopup;

		[Obsolete("SCID Warning popup was removed")]
		public static readonly DirectorGroupId SCIDWarningPopup;

		public static readonly DirectorGroupId ProducerInventoryLockedFTUE;

		public static readonly DirectorGroupId ProducerInventoryFTUE;

		[Obsolete("EnergyModeFTUE is now triggered by EnergyModeEventStartPopup")]
		public static readonly DirectorGroupId EnergyModeFTUE;

		public static readonly DirectorGroupId CooldownRemoverFTUE;

		public static readonly DirectorGroupId CardStackStep01;

		public static readonly DirectorGroupId CardStackStep02;

		public static readonly DirectorGroupId CardStackStep03;

		public static readonly DirectorGroupId CardStackStep04;

		public static readonly DirectorGroupId CardStackStep05;

		public static readonly DirectorGroupId CardStackStep06;

		public static readonly DirectorGroupId PetFTUE;

		public static readonly DirectorGroupId NewShopForReturning;

		public static readonly DirectorGroupId NewShopForExisting;

		public static readonly DirectorGroupId NewShopForExistingOnBoard;

		public static readonly DirectorGroupId NewTasksForExistingOnBoard;

		public static readonly DirectorGroupId SettingsButtonInProfile;

		public static readonly DirectorGroupId BLETradeV2ActivationTutorial;

		public static readonly DirectorGroupId ADEToolsetDiscovery;

		public static readonly DirectorGroupId ADEToolsetUsage;

		public static readonly DirectorGroupId ADEMuseumFTUE1;

		public static readonly DirectorGroupId LocationTravelFTUE01;

		public static readonly DirectorGroupId LocationTravelFTUE02;

		public static readonly DirectorGroupId LocationTravelFTUE03;

		public static readonly DirectorGroupId AARTimeSkipSeen;

		public static readonly DirectorGroupId AARCooldownRemoverSeen;

		public static readonly DirectorGroupId AARInfiniteEnergySeen;

		public static readonly DirectorGroupId AAROnFireSeen;

		public static readonly DirectorGroupId IntroduceTaskCards_01;

		public static readonly DirectorGroupId IntroduceTaskCards_02;

		public static readonly DirectorGroupId IntroduceTaskCards_03;

		public static readonly DirectorGroupId IntroduceTaskCards_04;

		public static readonly DirectorGroupId IntroduceTaskCards_05;

		public static readonly DirectorGroupId FirstAreaUnlock;

		public static readonly DirectorGroupId AutoMergeFTUE;

		public static readonly DirectorGroupId RollTheDiceFTUE;

		public static readonly DirectorGroupId WildItemFTUE;

		public static readonly DirectorGroupId BuilderEventFTUE;

		public static readonly DirectorGroupId DisplayEventsOnBoard;

		public static readonly DirectorGroupId TradesButtonIntroductionForExistingPlayer;

		public static readonly IDictionary<int, string> legacyDcGroupIdMapping;

		public static int? GetLegacyKeyForDirectorGroupId(DirectorGroupId groupId)
		{
			return null;
		}
	}
}
