//Type is in global namespace

public class PlayerDataPiece : BaseGameDataPiece
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass76_0
	{
		public DateTime cutoff; //Field offset: 0x10

		public <>c__DisplayClass76_0() { }

		internal bool <CountWithinDays>b__0(DateTime t) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass77_0
	{
		public DateTime cutoff; //Field offset: 0x10

		public <>c__DisplayClass77_0() { }

		internal bool <PruneOldTimestamps>b__0(DateTime t) { }

	}

	private const string DATA = "PlayerDataPiece.dataObject"; //Field offset: 0x0
	private const string LK_GOLD_AMOUNT_KEY = "GoldAmount"; //Field offset: 0x0
	private const string LK_STAR_AMOUNT_KEY = "StartAmount"; //Field offset: 0x0
	private const string LK_BLUE_STAR_AMOUNT_KEY = "BlueStarAmount"; //Field offset: 0x0
	private const string LK_ENERGY_AMOUNT_KEY = "EnergyAmountKey"; //Field offset: 0x0
	private const string LK_EXP_AMOUNT_KEY = "ExpAmountKey"; //Field offset: 0x0
	private const string LK_LEVEL_KEY = "LevelKey"; //Field offset: 0x0
	private const string LK_LEVELED_UP_KEY = "LeveledUpKey"; //Field offset: 0x0
	private const string LK_LEVELED_UP_COUNT = "LeveledUpCountKey"; //Field offset: 0x0
	private const string LK_PURCHASE_BALANCE_KEY = "PurchaseBalanceKey"; //Field offset: 0x0
	private const string RK_PLAYER_SAVE_ROOT_KEY = "player"; //Field offset: 0x0
	private DataObjectPlayer dataObject; //Field offset: 0x28

	public string activePass
	{
		 get { } //Length: 88
		 set { } //Length: 48
	}

	public AlmediaLinkStatus almediaLinkStatus
	{
		 get { } //Length: 24
		 set { } //Length: 36
	}

	public int blueStarAmount
	{
		 get { } //Length: 24
	}

	public int DeliveriesScore3D
	{
		 get { } //Length: 24
	}

	public int DeliveriesScore7D
	{
		 get { } //Length: 24
	}

	public int energyAmount
	{
		 get { } //Length: 24
	}

	public int expAmount
	{
		 get { } //Length: 24
	}

	public int finishedOrderCount
	{
		 get { } //Length: 24
	}

	public int forceUpdateCounter
	{
		 get { } //Length: 24
	}

	public string FTUEVerion
	{
		 get { } //Length: 24
	}

	public int goldAmount
	{
		 get { } //Length: 24
	}

	public bool isFTUEDone
	{
		 get { } //Length: 24
	}

	public bool isLeveledUp
	{
		 get { } //Length: 24
	}

	public bool IsPlayerInitialized
	{
		 get { } //Length: 16
	}

	public bool isTester
	{
		 get { } //Length: 32
	}

	public DateTime lastDailyRewardReceived
	{
		 get { } //Length: 24
		 set { } //Length: 36
	}

	public string lastDrainedEpisode
	{
		 get { } //Length: 44
	}

	public int lastDrainGold
	{
		 get { } //Length: 24
	}

	public bool lastDrainGrantDone
	{
		 get { } //Length: 32
	}

	public int lastDrainStars
	{
		 get { } //Length: 24
	}

	public string lastSeenLastRoom
	{
		 get { } //Length: 44
	}

	public int level
	{
		 get { } //Length: 24
	}

	public int levelUpCount
	{
		 get { } //Length: 24
	}

	public int OrderSkipCount
	{
		 get { } //Length: 24
		 set { } //Length: 36
	}

	public DateTime passExpiry
	{
		 get { } //Length: 192
		 set { } //Length: 36
	}

	public string pendingAckEpisode
	{
		 get { } //Length: 44
	}

	public string pendingDrainEpisode
	{
		 get { } //Length: 44
	}

	public int purchaseBalance
	{
		 get { } //Length: 24
	}

	public int starAmount
	{
		 get { } //Length: 24
	}

	public bool starDrainerMigrated
	{
		 get { } //Length: 32
	}

	public int totalMergeCount
	{
		 get { } //Length: 24
	}

	public PlayerDataPiece() { }

	public void AddAdTimestamp(DateTime timestamp) { }

	public void ClearDrainAck() { }

	private static int CountWithinDays(List<DateTime> timestamps, DateTime currentTime, int days) { }

	public void DebugSetLastDrainedEpisode(string episodeKey) { }

	public virtual void DeleteLocalData() { }

	public string get_activePass() { }

	public AlmediaLinkStatus get_almediaLinkStatus() { }

	public int get_blueStarAmount() { }

	public int get_DeliveriesScore3D() { }

	public int get_DeliveriesScore7D() { }

	public int get_energyAmount() { }

	public int get_expAmount() { }

	public int get_finishedOrderCount() { }

	public int get_forceUpdateCounter() { }

	public string get_FTUEVerion() { }

	public int get_goldAmount() { }

	public bool get_isFTUEDone() { }

	public bool get_isLeveledUp() { }

	public bool get_IsPlayerInitialized() { }

	public bool get_isTester() { }

	public DateTime get_lastDailyRewardReceived() { }

	public string get_lastDrainedEpisode() { }

	public int get_lastDrainGold() { }

	public bool get_lastDrainGrantDone() { }

	public int get_lastDrainStars() { }

	public string get_lastSeenLastRoom() { }

	public int get_level() { }

	public int get_levelUpCount() { }

	public int get_OrderSkipCount() { }

	public DateTime get_passExpiry() { }

	public string get_pendingAckEpisode() { }

	public string get_pendingDrainEpisode() { }

	public int get_purchaseBalance() { }

	public int get_starAmount() { }

	public bool get_starDrainerMigrated() { }

	public int get_totalMergeCount() { }

	public virtual string GetKey() { }

	public void MarkDrainCommitted(string episodeKey, int starsBefore, int goldGranted) { }

	public void MarkDrainGrantDone() { }

	private static void PruneOldTimestamps(List<DateTime> timestamps, DateTime currentTime) { }

	public void ResetDrainerStateForMigration() { }

	public virtual void SerializeToLocal() { }

	public void set_activePass(string value) { }

	public void set_almediaLinkStatus(AlmediaLinkStatus value) { }

	public void set_lastDailyRewardReceived(DateTime value) { }

	public void set_OrderSkipCount(int value) { }

	public void set_passExpiry(DateTime value) { }

	public void SetBlueStarAmount(int amount) { }

	public void SetEnergyAmount(int amount) { }

	public void SetExpAmount(int amount) { }

	public void SetFinishedOrderCount(int amount) { }

	public void SetFTUEVerion(string ftueVerion) { }

	public void SetGoldAmount(int amount) { }

	public void SetIsFTUEDone(bool isdone) { }

	public void SetIsLeveledUp(bool leveledUp) { }

	public void SetIsTester(bool tester) { }

	public void SetLastSeenLastRoom(string episodeKey) { }

	public void SetLevel(int amount) { }

	public void SetLevelUpCount(int count) { }

	public void SetPendingAckEpisode(string episodeKey) { }

	public void SetPendingDrainEpisode(string episodeKey) { }

	public void SetPurchaseBalance(int balance) { }

	public void SetStarAmount(int amount) { }

	public void SetTotalMergeCount(int count) { }

	public virtual bool TryDeserializeFromLocal(bool createInitialValuesIfNotExist = false) { }

}

