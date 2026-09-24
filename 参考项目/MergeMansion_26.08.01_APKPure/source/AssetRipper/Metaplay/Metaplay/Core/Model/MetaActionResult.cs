namespace Metaplay.Core.Model
{
	public class MetaActionResult
	{
		public static readonly MetaActionResult Success;

		public static readonly MetaActionResult UnknownError;

		public static readonly MetaActionResult InvalidActionType;

		public static readonly MetaActionResult InvalidLanguage;

		public static readonly MetaActionResult InvalidMailId;

		public static readonly MetaActionResult InvalidMail;

		public static readonly MetaActionResult MailAlreadyConsumed;

		public static readonly MetaActionResult MailNotConsumed;

		public static readonly MetaActionResult DuplicateMailId;

		public static readonly MetaActionResult InvalidInAppTransactionId;

		public static readonly MetaActionResult InvalidInAppTransactionState;

		public static readonly MetaActionResult InvalidInAppPurchaseEvent;

		public static readonly MetaActionResult InvalidInAppProductId;

		public static readonly MetaActionResult TooManyPendingInAppPurchases;

		public static readonly MetaActionResult InvalidInAppPlatformProductId;

		public static readonly MetaActionResult InvalidInAppPlatform;

		public static readonly MetaActionResult InvalidDynamicInAppPurchaseStatus;

		public static readonly MetaActionResult InvalidNonDynamicInAppPurchaseStatus;

		public static readonly MetaActionResult CannotSetPendingDynamicPurchase;

		public static readonly MetaActionResult NoSuchSubscription;

		public static readonly MetaActionResult ExistingSubscriptionStateIsNewer;

		public static readonly MetaActionResult InvalidFirebaseMessagingToken;

		public static readonly MetaActionResult NoSessionDeviceId;

		public static readonly MetaActionResult MetaOfferGroupHasNoState;

		public static readonly MetaActionResult MetaOfferNotInGroup;

		public static readonly MetaActionResult MetaOfferNotPurchasable;

		public static readonly MetaActionResult MetaOfferDoesNotHaveInAppProduct;

		public static readonly MetaActionResult NoSuchGuildMember;

		public static readonly MetaActionResult GuildOperationNotPermitted;

		public static readonly MetaActionResult GuildOperationStale;

		public static readonly MetaActionResult AlreadyHasNft;

		public static readonly MetaActionResult HasNoSuchNft;

		public static readonly MetaActionResult NftTransactionAlreadyPending;

		public static readonly MetaActionResult NoSuchDivisionParticipant;

		public static readonly MetaActionResult NoSuchDivision;

		public static readonly MetaActionResult InvalidDivisionState;

		public static readonly MetaActionResult RewardAlreadyClaimed;

		public static readonly MetaActionResult DuplicateDivisionHistoryEntry;

		public static readonly MetaActionResult InvalidDivisionHistoryEntry;

		public static readonly MetaActionResult AlreadyHasEvent;

		public static readonly MetaActionResult NoSuchEvent;

		public static readonly MetaActionResult EventNotConcluded;

		public static readonly MetaActionResult EventNotDisappeared;

		public static readonly MetaActionResult InvalidSlotIndex;

		public static readonly MetaActionResult StatsObjectiveLockedOrCompleted;

		public static readonly MetaActionResult StatsObjectiveNotEnoughProgress;

		public static readonly MetaActionResult NoRewardToClaim;

		public static readonly MetaActionResult CouldNotUnlock;

		public static readonly MetaActionResult InvalidCellReference;

		public static readonly MetaActionResult LevelNotReached;

		public static readonly MetaActionResult InsufficientLetterCount;

		public static readonly MetaActionResult NotAutoActivatedRewardDirectorGroup;

		public string Name { get; set; }

		public virtual bool IsSuccess => false;

		public MetaActionResult(string name)
		{
		}

		public override string ToString()
		{
			return null;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
