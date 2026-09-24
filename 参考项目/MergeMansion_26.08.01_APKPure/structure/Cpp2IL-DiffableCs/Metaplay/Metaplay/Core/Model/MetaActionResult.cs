namespace Metaplay.Core.Model;

public class MetaActionResult
{
	public static readonly MetaActionResult Success; //Field offset: 0x0
	public static readonly MetaActionResult UnknownError; //Field offset: 0x8
	public static readonly MetaActionResult InvalidActionType; //Field offset: 0x10
	public static readonly MetaActionResult InvalidLanguage; //Field offset: 0x18
	public static readonly MetaActionResult InvalidMailId; //Field offset: 0x20
	public static readonly MetaActionResult InvalidMail; //Field offset: 0x28
	public static readonly MetaActionResult MailAlreadyConsumed; //Field offset: 0x30
	public static readonly MetaActionResult MailNotConsumed; //Field offset: 0x38
	public static readonly MetaActionResult DuplicateMailId; //Field offset: 0x40
	public static readonly MetaActionResult InvalidInAppTransactionId; //Field offset: 0x48
	public static readonly MetaActionResult InvalidInAppTransactionState; //Field offset: 0x50
	public static readonly MetaActionResult InvalidInAppPurchaseEvent; //Field offset: 0x58
	public static readonly MetaActionResult InvalidInAppProductId; //Field offset: 0x60
	public static readonly MetaActionResult TooManyPendingInAppPurchases; //Field offset: 0x68
	public static readonly MetaActionResult InvalidInAppPlatformProductId; //Field offset: 0x70
	public static readonly MetaActionResult InvalidInAppPlatform; //Field offset: 0x78
	public static readonly MetaActionResult InvalidDynamicInAppPurchaseStatus; //Field offset: 0x80
	public static readonly MetaActionResult InvalidNonDynamicInAppPurchaseStatus; //Field offset: 0x88
	public static readonly MetaActionResult CannotSetPendingDynamicPurchase; //Field offset: 0x90
	public static readonly MetaActionResult NoSuchSubscription; //Field offset: 0x98
	public static readonly MetaActionResult ExistingSubscriptionStateIsNewer; //Field offset: 0xA0
	public static readonly MetaActionResult InvalidFirebaseMessagingToken; //Field offset: 0xA8
	public static readonly MetaActionResult NoSessionDeviceId; //Field offset: 0xB0
	public static readonly MetaActionResult MetaOfferGroupHasNoState; //Field offset: 0xB8
	public static readonly MetaActionResult MetaOfferNotInGroup; //Field offset: 0xC0
	public static readonly MetaActionResult MetaOfferNotPurchasable; //Field offset: 0xC8
	public static readonly MetaActionResult MetaOfferDoesNotHaveInAppProduct; //Field offset: 0xD0
	public static readonly MetaActionResult NoSuchGuildMember; //Field offset: 0xD8
	public static readonly MetaActionResult GuildOperationNotPermitted; //Field offset: 0xE0
	public static readonly MetaActionResult GuildOperationStale; //Field offset: 0xE8
	public static readonly MetaActionResult AlreadyHasNft; //Field offset: 0xF0
	public static readonly MetaActionResult HasNoSuchNft; //Field offset: 0xF8
	public static readonly MetaActionResult NftTransactionAlreadyPending; //Field offset: 0x100
	public static readonly MetaActionResult NoSuchDivisionParticipant; //Field offset: 0x108
	public static readonly MetaActionResult NoSuchDivision; //Field offset: 0x110
	public static readonly MetaActionResult InvalidDivisionState; //Field offset: 0x118
	public static readonly MetaActionResult RewardAlreadyClaimed; //Field offset: 0x120
	public static readonly MetaActionResult DuplicateDivisionHistoryEntry; //Field offset: 0x128
	public static readonly MetaActionResult InvalidDivisionHistoryEntry; //Field offset: 0x130
	public static readonly MetaActionResult AlreadyHasEvent; //Field offset: 0x138
	public static readonly MetaActionResult NoSuchEvent; //Field offset: 0x140
	public static readonly MetaActionResult EventNotConcluded; //Field offset: 0x148
	public static readonly MetaActionResult EventNotDisappeared; //Field offset: 0x150
	public static readonly MetaActionResult InvalidSlotIndex; //Field offset: 0x158
	public static readonly MetaActionResult StatsObjectiveLockedOrCompleted; //Field offset: 0x160
	public static readonly MetaActionResult StatsObjectiveNotEnoughProgress; //Field offset: 0x168
	public static readonly MetaActionResult NoRewardToClaim; //Field offset: 0x170
	public static readonly MetaActionResult CouldNotUnlock; //Field offset: 0x178
	public static readonly MetaActionResult InvalidCellReference; //Field offset: 0x180
	public static readonly MetaActionResult LevelNotReached; //Field offset: 0x188
	public static readonly MetaActionResult InsufficientLetterCount; //Field offset: 0x190
	public static readonly MetaActionResult NotAutoActivatedRewardDirectorGroup; //Field offset: 0x198
	[CompilerGenerated]
	private string <Name>k__BackingField; //Field offset: 0x10

	public override bool IsSuccess
	{
		 get { } //Length: 104
	}

	public private string Name
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static MetaActionResult() { }

	public MetaActionResult(string name) { }

	public virtual bool Equals(object obj) { }

	public override bool get_IsSuccess() { }

	[CompilerGenerated]
	public string get_Name() { }

	public virtual int GetHashCode() { }

	[CompilerGenerated]
	private void set_Name(string value) { }

	public virtual string ToString() { }

}

